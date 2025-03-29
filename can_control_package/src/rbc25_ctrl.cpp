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
vvoid controlCallback(const odrive_custom_msg::msg::Control::SharedPtr msg) {
    // Kiểm tra lệnh đặc biệt: device_id âm hoặc bằng 0xFF (dùng cho "broadcast")
    if (msg->device_id < 0 || msg->device_id == 0xFF) {
        // Lấy mã lệnh đặc biệt từ input_pos (đã được test_node map: calib=0x00, stop=0x01, idle=0x02, clrerr=0x03, clc=0x04)
        uint8_t special_cmd_code = static_cast<uint8_t>(msg->input_pos);

        uint8_t can_cmd = 0;  // giá trị sẽ được dùng trong 5 bit thấp của frame_id
        uint8_t data[8] = {0};  // payload 8 byte
        size_t data_len = 8;
        
        // Xác định can_cmd và dữ liệu payload dựa theo lệnh đặc biệt
        switch (special_cmd_code) {
            case 0x00: // calib: Full Calibration Sequence
                // Sử dụng Set_Axis_State (cmd_id = 0x07) với payload = 3 (uint32 little-endian)
                can_cmd = 0x07;
                {
                    uint32_t state = 3;
                    std::memcpy(data, &state, sizeof(state));
                }
                break;
            case 0x01: // stop: Set velocity = 0
                // Sử dụng Set_Input_Vel (cmd_id = 0x0D) với payload gồm 2 float = 0.0 (velocity và torque feedforward)
                can_cmd = 0x0D;
                {
                    float vel = 0.0f;
                    float torque_ff = 0.0f;
                    std::memcpy(data, &vel, sizeof(vel));
                    std::memcpy(data + sizeof(vel), &torque_ff, sizeof(torque_ff));
                }
                break;
            case 0x02: // idle: Set axis to Idle
                // Sử dụng Set_Axis_State (cmd_id = 0x07) với payload = 1 (uint32 little-endian)
                can_cmd = 0x07;
                {
                    uint32_t state = 1;
                    std::memcpy(data, &state, sizeof(state));
                }
                break;
            case 0x03: // clrerr: Clear Errors
                // Sử dụng Clear_Errors (cmd_id = 0x18) với payload toàn 0
                can_cmd = 0x18;
                // payload mặc định toàn 0 (đối với v0.5.6 không có payload, nhưng gửi 0 cũng hoạt động trên cả hai phiên bản)
                break;
            case 0x04: // clc: Closed Loop Control
                // Sử dụng Set_Axis_State (cmd_id = 0x07) với payload = 8 (uint32 little-endian)
                can_cmd = 0x07;
                {
                    uint32_t state = 8;
                    std::memcpy(data, &state, sizeof(state));
                }
                break;
            default:
                RCLCPP_ERROR(this->get_logger(), "Invalid special command: 0x%X", special_cmd_code);
                return;
        }
        
        // Nếu device_id là 0xFF, thì gửi lệnh cho một mảng các device (ví dụ: {1,2,3})
        if (msg->device_id == 0xFF) {
            std::vector<uint8_t> broadcast_ids = {0, 1, 2};
            for (uint8_t id : broadcast_ids) {
                uint32_t frame_id = (id << 5) | can_cmd;
                
                odrive_custom_msg::msg::CANmsg can_msg;
                can_msg.frame_id = frame_id;
                std::copy(data, data + data_len, can_msg.data.begin());
                can_msg.interface = "vcan0";
                
                can_pub_->publish(can_msg);
                RCLCPP_INFO(this->get_logger(), "Broadcast: device_id=%u, frame_id=0x%X, can_cmd=0x%X, special_cmd=0x%X",
                             id, frame_id, can_cmd, special_cmd_code);
            }
        }
        else {
            // Nếu không phải broadcast, gửi lệnh cho một thiết bị đơn (chuyển device_id âm về dương)
            uint8_t dev_id = (msg->device_id < 0) ? static_cast<uint8_t>(-msg->device_id) : msg->device_id;
            uint32_t frame_id = (dev_id << 5) | can_cmd;
            
            odrive_custom_msg::msg::CANmsg can_msg;
            can_msg.frame_id = frame_id;
            std::copy(data, data + data_len, can_msg.data.begin());
            can_msg.interface = "vcan0";
            
            can_pub_->publish(can_msg);
            RCLCPP_INFO(this->get_logger(), "Special command sended: device_id=%u, frame_id=0x%X, can_cmd=0x%X, special_cmd=0x%X",
                         dev_id, frame_id, can_cmd, special_cmd_code);
        }
    }
    else {
        // Xử lý lệnh thông thường như cũ
        uint8_t device_id = msg->device_id;
        float value;
        uint8_t cmd_id;
        
        if (device_id == 0) {
            value = msg->input_vel;
            cmd_id = 0x0D;
        } else if (device_id == 1) {
            value = msg->input_vel;
            cmd_id = 0x0D;
        } else if (device_id == 2) {
            value = msg->input_vel;
            cmd_id = 0x0D;
        } else {
            RCLCPP_WARN(this->get_logger(), "Invalid device_id: %u", device_id);
            return;
        }
        
        uint32_t frame_id = (device_id << 5) | cmd_id;
        uint8_t data[8] = {0};
        std::memcpy(data, &value, sizeof(value));
        
        odrive_custom_msg::msg::CANmsg can_msg;
        can_msg.frame_id = frame_id;
        std::copy(data, data + 8, can_msg.data.begin());
        can_msg.interface = "vcan0";
        
        can_pub_->publish(can_msg);
        RCLCPP_INFO(this->get_logger(), "Data sended: device_id=%u, frame_id=0x%X, data=[%s]",
                    device_id, frame_id, formatData(data).c_str());
    }
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
