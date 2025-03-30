#include <rclcpp/rclcpp.hpp>
#include "odrive_custom_msg/msg/control.hpp"
#include <chrono>
#include <thread>
#include <string>
#include <iostream>
#include <sstream>

// Define enum for Control mode
enum ControlMode : uint8_t
{
    SPECIAL = 0,
    NORMAL = 1
};

using namespace std::chrono_literals;

class TestNode : public rclcpp::Node
{
public:
    TestNode() : Node("test_node")
    {
        publisher_ = this->create_publisher<odrive_custom_msg::msg::Control>("control_topic", 10);
        timer_ = this->create_wall_timer(
            1000ms, std::bind(&TestNode::promptUserInput, this));
        RCLCPP_INFO(this->get_logger(),
                    "Test Node started.\nEnter commands as follows:\n  - Normal command: <device_id> <input_pos> <input_vel> <input_torque>\n  - Special command: s <device_id> <special_cmd> (use '.' for device_id to broadcast)");
    }

private:
    rclcpp::Publisher<odrive_custom_msg::msg::Control>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    void promptUserInput()
    {
        std::string input;
        std::cout << "Enter command: ";
        std::getline(std::cin, input);
        std::istringstream iss(input);
        std::string token;
        iss >> token;

        auto msg = odrive_custom_msg::msg::Control();

        // Special command
        if (token == "s")
        {
            msg.mode = SPECIAL; // Special command mode
            std::string devStr, cmdStr;
            iss >> devStr >> cmdStr;
            uint8_t device_id;
            if (devStr == ".")
            {
                // Use 0xFF to indicate broadcast
                device_id = 0xFF;
            }
            else
            {
                device_id = static_cast<uint8_t>(std::stoi(devStr));
            }
            msg.device_id = device_id;
            // Map special command string to a numeric code
            uint8_t special_cmd = 0xFF; // initial invalid value
            if (cmdStr == "calib")
            {
                special_cmd = 0x00;
            }
            else if (cmdStr == "stop")
            {
                special_cmd = 0x01;
            }
            else if (cmdStr == "idle")
            {
                special_cmd = 0x02;
            }
            else if (cmdStr == "clrerr")
            {
                special_cmd = 0x03;
            }
            else if (cmdStr == "clc")
            {
                special_cmd = 0x04;
            }
            else
            {
                RCLCPP_ERROR(this->get_logger(), "Invalid special command.");
                return;
            }
            msg.input_pos = static_cast<float>(special_cmd);
            msg.input_vel = 0.0f;
            msg.input_torque = 0.0f;
            publisher_->publish(msg);
            RCLCPP_INFO(this->get_logger(), "Published special command: device_id=%u, command=%s",
                        device_id, cmdStr.c_str());
        }
        else
        {
            // Normal command
            msg.mode = NORMAL;
            try
            {
                uint8_t device_id = static_cast<uint8_t>(std::stoi(token));
                msg.device_id = device_id;
            }
            catch (...)
            {
                RCLCPP_ERROR(this->get_logger(), "Invalid device_id.");
                return;
            }
            float input_pos, input_vel, input_torque;
            if (!(iss >> input_pos >> input_vel >> input_torque))
            {
                RCLCPP_ERROR(this->get_logger(), "Invalid input. Please enter: <device_id> <input_pos> <input_vel> <input_torque>");
                return;
            }
            msg.input_pos = input_pos;
            msg.input_vel = input_vel;
            msg.input_torque = input_torque;
            publisher_->publish(msg);
            RCLCPP_INFO(this->get_logger(), "Published normal command: device_id=%u, input_pos=%.2f, input_vel=%.2f, input_torque=%.2f",
                        msg.device_id, input_pos, input_vel, input_torque);
        }
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TestNode>());
    rclcpp::shutdown();
    return 0;
}
