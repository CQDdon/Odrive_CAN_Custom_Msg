#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class CANSender : public rclcpp::Node {
public:
    CANSender() : Node("can_sender") {
        subscriber_ = this->create_subscription<std_msgs::msg::String>(
            "can_send",
            10,
            std::bind(&CANSender::sendCANFrame, this, std::placeholders::_1)
        );
        feedback_publisher_ = this->create_publisher<std_msgs::msg::String>("can_feedback", 10);
    }

private:
    void sendCANFrame(const std_msgs::msg::String::SharedPtr msg) {
        // Logic to send the CAN frame (e.g., using a CAN library)
        bool success = sendCAN(msg->data);

        // Publish feedback
        std_msgs::msg::String feedback;
        feedback.data = success ? "Frame sent successfully" : "Frame failed to send";
        feedback_publisher_->publish(feedback);
    }

    bool sendCAN(const std::string& frame_data) {
        // Placeholder for actual CAN transmission logic
        RCLCPP_INFO(this->get_logger(), "Sending CAN frame: %s", frame_data.c_str());
        return true;  // Assume success for testing
    }

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscriber_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr feedback_publisher_;
};
