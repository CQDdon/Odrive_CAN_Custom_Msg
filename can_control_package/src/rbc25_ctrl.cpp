#include <rclcpp/rclcpp.hpp>
#include "odrive_custom_msg/msg/control.hpp"
#include "odrive_custom_msg/msg/ca_nmsg.hpp"
#include <std_msgs/msg/u_int8.hpp>
#include <iomanip>
#include <sstream>

class RBC25CtrlNode : public rclcpp::Node {
public:
    RBC25CtrlNode() : Node("rbc25_ctrl") {
        // Subscriber to Control message
        control_sub_ = this->create_subscription<odrive_custom_msg::msg::Control>(
            "control_topic",
            10,
            std::bind(&RBC25CtrlNode::controlCallback, this, std::placeholders::_1));

        // Subscriber for Full Calibration Sequence command
        calib_sub_ = this->create_subscription<std_msgs::msg::UInt8>(
            "calibration_topic",
            10,
            std::bind(&RBC25CtrlNode::calibrationCallback, this, std::placeholders::_1));

        // Publisher for CANmsg
        can_pub_ = this->create_publisher<odrive_custom_msg::msg::CANmsg>("can_topic", 10);

        RCLCPP_INFO(this->get_logger(), "RBC25 Control Node has been started.");
    }

private:
    void controlCallback(const odrive_custom_msg::msg::Control::SharedPtr msg) {
        uint8_t device_id = msg->device_id;
        float value;
        uint8_t cmd_id;

        // Determine cmd_id and value based on device_id
        if (device_id == 0) {
            value = msg->input_pos;
            cmd_id = 0x0c;
        } else if (device_id == 1) {
            value = msg->input_vel;
            cmd_id = 0x0d;
        } else if (device_id == 2) {
            value = msg->input_torque;
            cmd_id = 0x0e;
        } else {
            RCLCPP_WARN(this->get_logger(), "Invalid device_id: %u", device_id);
            return;
        }

        // Create frame_id
        uint32_t frame_id = (device_id << 5) | cmd_id;

        // Convert value to hexadecimal and create 8-byte data array
        uint8_t data[8] = {0};
        std::memcpy(data, &value, sizeof(value));

        // Create CANmsg
        odrive_custom_msg::msg::CANmsg can_msg;
        can_msg.frame_id = frame_id;
        std::copy(data, data + 8, can_msg.data.begin());
        can_msg.interface = "vcan0";

        // Publish CAN_msg
        can_pub_->publish(can_msg);

        RCLCPP_INFO(this->get_logger(), "Published CAN frame_id: 0x%X, data: [%s], interface: %s", 
                    frame_id, formatData(data).c_str(), can_msg.interface.c_str());
    }

    void calibrationCallback(const std_msgs::msg::UInt8::SharedPtr msg) {
        uint8_t device_id = msg->data;

        // Command ID for Full Calibration Sequence
        uint8_t cmd_id = 0x03;

        // Create frame_id
        uint32_t frame_id = (device_id << 5) | cmd_id;

        // Create CANmsg
        odrive_custom_msg::msg::CANmsg can_msg;
        can_msg.frame_id = frame_id;
        can_msg.data.fill(0);  // Fill the data array with zeros
        can_msg.interface = "vcan0";

        // Publish CAN_msg
        can_pub_->publish(can_msg);

        RCLCPP_INFO(this->get_logger(), "Published Full Calibration Command for device_id: %u, frame_id: 0x%X", 
                    device_id, frame_id);
    }

    std::string formatData(uint8_t *data) {
        std::ostringstream oss;
        for (int i = 0; i < 8; ++i) {
            oss << "0x" << std::hex << std::setw(2) << std::setfill('0') << (int)data[i];
            if (i < 7) oss << ", ";
        }
        return oss.str();
    }

    rclcpp::Subscription<odrive_custom_msg::msg::Control>::SharedPtr control_sub_;
    rclcpp::Subscription<std_msgs::msg::UInt8>::SharedPtr calib_sub_;
    rclcpp::Publisher<odrive_custom_msg::msg::CANmsg>::SharedPtr can_pub_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<RBC25CtrlNode>());
    rclcpp::shutdown();
    return 0;
}
