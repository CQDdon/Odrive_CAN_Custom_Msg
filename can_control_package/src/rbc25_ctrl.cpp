#include <rclcpp/rclcpp.hpp>
#include "odrive_custom_msg/msg/control.hpp"
#include "odrive_custom_msg/msg/ca_nmsg.hpp"
#include <iomanip>
#include <sstream>
#include <vector>
#include <cstring>

// Define enum for Control mode
enum ControlMode : uint8_t
{
    SPECIAL = 0,
    NORMAL = 1
};

class RBC25CtrlNode : public rclcpp::Node
{
public:
    RBC25CtrlNode() : Node("rbc25_ctrl")
    {
        control_sub_ = this->create_subscription<odrive_custom_msg::msg::Control>(
            "control_topic", 10,
            std::bind(&RBC25CtrlNode::controlCallback, this, std::placeholders::_1));
        can_pub_ = this->create_publisher<odrive_custom_msg::msg::CANmsg>("can_topic", 10);
        RCLCPP_INFO(this->get_logger(), "RBC25 Control Node started.");
    }

private:
    rclcpp::Subscription<odrive_custom_msg::msg::Control>::SharedPtr control_sub_;
    rclcpp::Publisher<odrive_custom_msg::msg::CANmsg>::SharedPtr can_pub_;

    std::string formatData(const uint8_t *data)
    {
        std::ostringstream oss;
        for (int i = 0; i < 8; ++i)
        {
            oss << "0x" << std::hex << std::setw(2) << std::setfill('0') << (int)data[i];
            if (i < 7)
                oss << ", ";
        }
        return oss.str();
    }

    void controlCallback(const odrive_custom_msg::msg::Control::SharedPtr msg)
    {
        // Use the mode field to determine if the command is special or normal
        if (msg->mode == SPECIAL)
        {
            // Special command
            if (msg->device_id == 0xFF)
            {
                processSpecialCommandBroadcast(msg);
            }
            else
            {
                processSpecialCommandSingle(msg);
            }
        }
        else if (msg->mode == NORMAL)
        {
            processNormalCommand(msg);
        }
        else
        {
            RCLCPP_WARN(this->get_logger(), "Invalid mode received: %u", msg->mode);
        }
    }

    void processSpecialCommandBroadcast(const odrive_custom_msg::msg::Control::SharedPtr msg)
    {
        uint8_t special_cmd_code = static_cast<uint8_t>(msg->input_pos);
        uint8_t can_cmd = 0;
        uint8_t data[8] = {0};
        size_t data_len = 8;

        // Map the special command code to the appropriate CAN command and payload
        switch (special_cmd_code)
        {
        case 0x00: // calib: Full Calibration Sequence
            can_cmd = 0x07;
            {
                uint32_t state = 3;
                std::memcpy(data, &state, sizeof(state));
            }
            break;
        case 0x01: // stop: Set velocity = 0
            can_cmd = 0x0D;
            {
                float vel = 0.0f, torque_ff = 0.0f;
                std::memcpy(data, &vel, sizeof(vel));
                std::memcpy(data + sizeof(vel), &torque_ff, sizeof(torque_ff));
            }
            break;
        case 0x02: // idle: Set axis to Idle
            can_cmd = 0x07;
            {
                uint32_t state = 1;
                std::memcpy(data, &state, sizeof(state));
            }
            break;
        case 0x03: // clrerr: Clear Errors
            can_cmd = 0x18;
            break;
        case 0x04: // clc: Closed Loop Control
            can_cmd = 0x07;
            {
                uint32_t state = 8;
                std::memcpy(data, &state, sizeof(state));
            }
            break;
        default:
            RCLCPP_ERROR(this->get_logger(), "Invalid special command code: 0x%X", special_cmd_code);
            return;
        }
        // Broadcast to multiple devices (e.g., device IDs {1, 2, 3})
        std::vector<uint8_t> broadcast_ids = {1, 2, 3};
        for (uint8_t id : broadcast_ids)
        {
            uint32_t frame_id = (id << 5) | can_cmd;
            odrive_custom_msg::msg::CANmsg can_msg;
            can_msg.frame_id = frame_id;
            std::copy(data, data + data_len, can_msg.data.begin());
            can_msg.interface = "vcan0";
            can_pub_->publish(can_msg);
            RCLCPP_INFO(this->get_logger(),
                        "Broadcast special command sent: device_id=%u, frame_id=0x%X, CAN command=0x%X, command_code=0x%X",
                        id, frame_id, can_cmd, special_cmd_code);
        }
    }

    void processSpecialCommandSingle(const odrive_custom_msg::msg::Control::SharedPtr msg)
    {
        uint8_t special_cmd_code = static_cast<uint8_t>(msg->input_pos);
        uint8_t can_cmd = 0;
        uint8_t data[8] = {0};
        size_t data_len = 8;
        uint8_t dev_id = msg->device_id; // Single device command

        switch (special_cmd_code)
        {
        case 0x00: // calib
            can_cmd = 0x07;
            {
                uint32_t state = 3;
                std::memcpy(data, &state, sizeof(state));
            }
            break;
        case 0x01: // stop
            can_cmd = 0x0D;
            {
                float vel = 0.0f, torque_ff = 0.0f;
                std::memcpy(data, &vel, sizeof(vel));
                std::memcpy(data + sizeof(vel), &torque_ff, sizeof(torque_ff));
            }
            break;
        case 0x02: // idle
            can_cmd = 0x07;
            {
                uint32_t state = 1;
                std::memcpy(data, &state, sizeof(state));
            }
            break;
        case 0x03: // clrerr
            can_cmd = 0x18;
            break;
        case 0x04: // clc
            can_cmd = 0x07;
            {
                uint32_t state = 8;
                std::memcpy(data, &state, sizeof(state));
            }
            break;
        default:
            RCLCPP_ERROR(this->get_logger(), "Invalid special command code: 0x%X", special_cmd_code);
            return;
        }
        uint32_t frame_id = (dev_id << 5) | can_cmd;
        odrive_custom_msg::msg::CANmsg can_msg;
        can_msg.frame_id = frame_id;
        std::copy(data, data + data_len, can_msg.data.begin());
        can_msg.interface = "vcan0";
        can_pub_->publish(can_msg);
        RCLCPP_INFO(this->get_logger(),
                    "Special command sent: device_id=%u, frame_id=0x%X, CAN command=0x%X, command_code=0x%X",
                    dev_id, frame_id, can_cmd, special_cmd_code);
    }

    void processNormalCommand(const odrive_custom_msg::msg::Control::SharedPtr msg)
    {
        uint8_t device_id = msg->device_id;
        float value;
        uint8_t cmd_id;
        if (device_id == 0)
        {
            value = msg->input_pos;
            cmd_id = 0x0C;
        }
        else if (device_id == 1)
        {
            value = msg->input_vel;
            cmd_id = 0x0D;
        }
        else if (device_id == 2)
        {
            value = msg->input_torque;
            cmd_id = 0x0E;
        }
        else
        {
            RCLCPP_WARN(this->get_logger(), "Invalid device_id received: %u", device_id);
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
        RCLCPP_INFO(this->get_logger(),
                    "Normal command sent: device_id=%u, frame_id=0x%X, data=[%s]",
                    device_id, frame_id, formatData(data).c_str());
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<RBC25CtrlNode>());
    rclcpp::shutdown();
    return 0;
}
