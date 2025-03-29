#include <rclcpp/rclcpp.hpp>
#include "odrive_custom_msg/msg/control.hpp"
#include "odrive_custom_msg/msg/ca_nmsg.hpp"
#include <chrono>
#include <thread>
#include <string>
#include <iostream>

using namespace std::chrono_literals;

class TestNode : public rclcpp::Node {
public:
    TestNode() : Node("test_node") {
        // Publisher to control_topic
        publisher_ = this->create_publisher<odrive_custom_msg::msg::Control>("control_topic", 10);

        // Timer to prompt user input periodically
        timer_ = this->create_wall_timer(
            1000ms, std::bind(&TestNode::promptUserInput, this));

        RCLCPP_INFO(this->get_logger(), "Test Node started. Enter input as 'device_id value1 value2 value3'");
    }

private:
    rclcpp::Publisher<odrive_custom_msg::msg::Control>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    void promptUserInput() {
        std::string input;
        std::cout << "Input (motor control: \"device_id input_pos input_vel input_torque\", special command: \"s device_id special_cmd\"): ";
        std::getline(std::cin, input);
        std::istringstream iss(input);
        std::string token;
        iss >> token;
    
        // Nếu lệnh đặc biệt
        if (token == "s") {
            std::string devStr, cmdStr;
            iss >> devStr >> cmdStr;
            int8_t device_id;
            // Nếu nhập dấu ".", set device_id = 0xFF (để chọn tất cả)
            if (devStr == ".") {
                device_id = 0xFF;
            } else {
                // Chuyển đổi sang số và gửi dưới dạng số âm để đánh dấu lệnh đặc biệt
                device_id = -std::stoi(devStr);
            }
            // Mapping special command
            uint8_t special_cmd = 0xFF; // khởi tạo giá trị không hợp lệ
            if (cmdStr == "calib") {
                special_cmd = 0x00;
            } else if (cmdStr == "stop") {
                special_cmd = 0x01;
            } else if (cmdStr == "idle") {
                special_cmd = 0x02;
            } else if (cmdStr == "clrerr") {
                special_cmd = 0x03;
            } else if (cmdStr == "clc") {
                special_cmd = 0x04;
            } else {
                RCLCPP_ERROR(this->get_logger(), "Invalid special command.");
                return;
            }
            // Tạo thông điệp Control với lệnh đặc biệt: sử dụng input_pos để chứa mã lệnh
            auto msg = odrive_custom_msg::msg::Control();
            msg.device_id = device_id;  
            msg.input_pos = static_cast<float>(special_cmd);
            msg.input_vel = 0.0f;
            msg.input_torque = 0.0f;
            publisher_->publish(msg);
            RCLCPP_INFO(this->get_logger(), "Special command sended: device_id=%d, special_cmd=%s", device_id, cmdStr.c_str());
        }
        else {
            // Xử lý lệnh bình thường như cũ
            uint8_t device_id;
            float input_pos, input_vel, input_torque;
            // token đã đọc là device_id dạng string, cần chuyển đổi
            device_id = static_cast<uint8_t>(std::stoi(token));
            if (!(iss >> input_pos >> input_vel >> input_torque)) {
                RCLCPP_ERROR(this->get_logger(), "Invalid data. Motor control: \"device_id input_pos input_vel input_torque\"");
                return;
            }
            auto msg = odrive_custom_msg::msg::Control();
            msg.device_id = device_id;
            msg.input_pos = input_pos;
            msg.input_vel = input_vel;
            msg.input_torque = input_torque;
            publisher_->publish(msg);
            RCLCPP_INFO(this->get_logger(), "Motor control sended device_id=%u, input_pos=%.2f, input_vel=%.2f, input_torque=%.2f", device_id, input_pos, input_vel, input_torque);
        }
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TestNode>());
    rclcpp::shutdown();
    return 0;
}
