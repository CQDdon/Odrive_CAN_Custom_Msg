#include "rclcpp/rclcpp.hpp"
#include "odrive_custom_msg/robocon_msg/Control.msg"
#include "std_msgs/msg/string.hpp"

class OdriveController : public rclcpp::Node {
public:
    OdriveController(int node_id, std::string interface)
    : Node("odrive_controller_" + std::to_string(node_id)), node_id_(node_id), interface_(interface) {
        subscriber_ = this->create_subscription<Odrive_Controller::msg::ControlData>(
            "control_data_" + std::to_string(node_id),
            10,
            std::bind(&OdriveController::controlCallback, this, std::placeholders::_1)
        );
        // Initialize publisher for communication with CAN_sender
        publisher_ = this->create_publisher<std_msgs::msg::String>("can_send", 10);
        // Receive feedback from CAN_sender
        feedback_subscriber_ = this->create_subscription<std_msgs::msg::String>(
            "can_feedback",
            10,
            std::bind(&OdriveController::feedbackCallback, this, std::placeholders::_1)
        );
    }

private:
    void controlCallback(const Odrive_Controller::msg::ControlData::SharedPtr msg) {
        float value;
        uint8_t cmd_id;
        if (node_id_ == 0) {
            value = msg->input_pos;
            cmd_id = 0x0c;
        } else if (node_id_ == 1) {
            value = msg->input_vel;
            cmd_id = 0x0d;
        } else if (node_id_ == 2) {
            value = msg->input_torque;
            cmd_id = 0x0e;
        }

        // Encode value to hex, pad to 8 bytes
        std::array<uint8_t, 8> data = encodeFloatToHex(value);

        // Encode frame ID
        uint8_t frame_id = (node_id_ << 5) | cmd_id;

        // Send CAN frame to CAN_sender
        std_msgs::msg::String can_message;
        can_message.data = createCANMessage(frame_id, data, interface_);
        publisher_->publish(can_message);
    }

    void feedbackCallback(const std_msgs::msg::String::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Feedback received: %s", msg->data.c_str());
    }

    std::array<uint8_t, 8> encodeFloatToHex(float value) {
        std::array<uint8_t, 8> data = {0};
        uint32_t hex_value = *reinterpret_cast<uint32_t*>(&value);
        for (int i = 0; i < 4; ++i) {
            data[i] = (hex_value >> (i * 8)) & 0xFF;
        }
        return data;
    }

    std::string createCANMessage(uint8_t frame_id, std::array<uint8_t, 8> data, const std::string& interface) {
        // Construct message to send to CAN_sender
        std::ostringstream oss;
        oss << std::hex << static_cast<int>(frame_id) << "," << interface;
        for (auto byte : data) {
            oss << "," << static_cast<int>(byte);
        }
        return oss.str();
    }

    rclcpp::Subscription<Odrive_Controller::msg::ControlData>::SharedPtr subscriber_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr feedback_subscriber_;

    int node_id_;
    std::string interface_;
};
