#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/u_int8.hpp>
#include <iostream>

class CalibrationPublisher : public rclcpp::Node {
public:
    CalibrationPublisher() : Node("calibration_publisher") {
        // Publisher for calibration_topic
        calib_pub_ = this->create_publisher<std_msgs::msg::UInt8>("calibration_topic", 10);

        RCLCPP_INFO(this->get_logger(), "Calibration Publisher Node started.");
        runPublisher();
    }

private:
    void runPublisher() {
        while (rclcpp::ok()) {
            // Read device_id from user input
            std::cout << "Enter device_id for calibration (or -1 to exit): ";
            int device_id;
            std::cin >> device_id;

            if (device_id == -1) {
                RCLCPP_INFO(this->get_logger(), "Exiting Calibration Publisher...");
                break;
            }

            if (device_id < 0 || device_id > 63) {
                RCLCPP_WARN(this->get_logger(), "Invalid device_id. Please enter a value between 0 and 63.");
                continue;
            }

            // Publish device_id
            auto msg = std_msgs::msg::UInt8();
            msg.data = static_cast<uint8_t>(device_id);
            calib_pub_->publish(msg);

            RCLCPP_INFO(this->get_logger(), "Sent calibration command for device_id: %d", device_id);
        }
    }

    rclcpp::Publisher<std_msgs::msg::UInt8>::SharedPtr calib_pub_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<CalibrationPublisher>());
    rclcpp::shutdown();
    return 0;
}
