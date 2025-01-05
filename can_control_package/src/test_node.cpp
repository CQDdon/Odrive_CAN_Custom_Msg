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
        std::cout << "Enter data (device_id input_pos input_vel input_torque): ";
        std::getline(std::cin, input);

        std::istringstream iss(input);
        uint8_t device_id;
        float input_pos, input_vel, input_torque;

        if (!(iss >> device_id >> input_pos >> input_vel >> input_torque)) {
            RCLCPP_ERROR(this->get_logger(), "Invalid input. Please enter: device_id input_pos input_vel input_torque");
            return;
        }

        // Create and publish Control message
        auto msg = odrive_custom_msg::msg::Control();
        msg.device_id = device_id - 48;
        msg.input_pos = input_pos;
        msg.input_vel = input_vel;
        msg.input_torque = input_torque;

        publisher_->publish(msg);

        RCLCPP_INFO(this->get_logger(), "Published: device_id=%u, input_pos=%.2f, input_vel=%.2f, input_torque=%.2f",
                    (device_id - 48), input_pos, input_vel, input_torque);
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TestNode>());
    rclcpp::shutdown();
    return 0;
}
