#include "rclcpp/rclcpp.hpp"
#include "Odrive_Controller/msg/control_data.hpp"

class TestPublisher : public rclcpp::Node {
public:
    TestPublisher() : Node("test_publisher") {
        publishers_[0] = this->create_publisher<Odrive_Controller::msg::ControlData>("control_data_0", 10);
        publishers_[1] = this->create_publisher<Odrive_Controller::msg::ControlData>("control_data_1", 10);
        publishers_[2] = this->create_publisher<Odrive_Controller::msg::ControlData>("control_data_2", 10);
        
        timer_ = this->create_wall_timer(
            std::chrono::seconds(1),
            std::bind(&TestPublisher::publishTestMessages, this)
        );
    }

private:
    void publishTestMessages() {
        for (int i = 0; i < 3; ++i) {
            auto msg = Odrive_Controller::msg::ControlData();
            msg.input_pos = 1.0f * (i + 1);
            msg.input_vel = 2.0f * (i + 1);
            msg.input_torque = 3.0f * (i + 1);
            publishers_[i]->publish(msg);
        }
    }

    std::array<rclcpp::Publisher<Odrive_Controller::msg::ControlData>::SharedPtr, 3> publishers_;
    rclcpp::TimerBase::SharedPtr timer_;
};