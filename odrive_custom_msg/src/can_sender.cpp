#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <sstream>
#include <iomanip>
#include <linux/can.h>
#include <linux/can/raw.h>
#include <sys/socket.h>
#include <net/if.h>
#include <cstring>
#include <unistd.h>

class CANSender : public rclcpp::Node {
public:
    CANSender(const std::string& interface)
    : Node("can_sender"), interface_(interface) {
        // Subscriber to receive messages from OdriveController
        subscription_ = this->create_subscription<std_msgs::msg::String>(
            "can_send",
            10,
            std::bind(&CANSender::canSendCallback, this, std::placeholders::_1)
        );

        // Publisher to send feedback to OdriveController
        feedback_publisher_ = this->create_publisher<std_msgs::msg::String>("can_feedback", 10);

        // Initialize CAN socket
        if ((socket_ = socket(PF_CAN, SOCK_RAW, CAN_RAW)) < 0) {
            RCLCPP_ERROR(this->get_logger(), "Error while opening socket");
            throw std::runtime_error("CAN socket initialization failed");
        }

        struct ifreq ifr;
        std::strncpy(ifr.ifr_name, interface_.c_str(), IFNAMSIZ - 1);
        if (ioctl(socket_, SIOCGIFINDEX, &ifr) < 0) {
            RCLCPP_ERROR(this->get_logger(), "Error retrieving interface index");
            throw std::runtime_error("CAN interface initialization failed");
        }

        struct sockaddr_can addr = {};
        addr.can_family = AF_CAN;
        addr.can_ifindex = ifr.ifr_ifindex;

        if (bind(socket_, (struct sockaddr*)&addr, sizeof(addr)) < 0) {
            RCLCPP_ERROR(this->get_logger(), "Error in socket bind");
            throw std::runtime_error("CAN socket binding failed");
        }

        RCLCPP_INFO(this->get_logger(), "CANSender initialized on interface %s", interface_.c_str());
    }

    ~CANSender() {
        close(socket_);
    }

private:
    void canSendCallback(const std_msgs::msg::String::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received CAN message: %s", msg->data.c_str());
        try {
            sendCANMessage(msg->data);

            // Publish feedback message
            std_msgs::msg::String feedback_msg;
            feedback_msg.data = "Message sent successfully: " + msg->data;
            feedback_publisher_->publish(feedback_msg);

        } catch (const std::exception& e) {
            RCLCPP_ERROR(this->get_logger(), "Error sending CAN message: %s", e.what());

            // Publish feedback message indicating failure
            std_msgs::msg::String feedback_msg;
            feedback_msg.data = "Error sending message: " + std::string(e.what());
            feedback_publisher_->publish(feedback_msg);
        }
    }

    void sendCANMessage(const std::string& can_message) {
        // Parse the message format: "frame_id,interface,data1,data2,...,data8"
        std::istringstream iss(can_message);
        std::string token;
        std::getline(iss, token, ',');
        uint8_t frame_id = static_cast<uint8_t>(std::stoi(token, nullptr, 16));
        std::getline(iss, token, ',');

        struct can_frame frame = {};
        frame.can_id = frame_id;
        frame.can_dlc = 8;

        for (int i = 0; i < 8; ++i) {
            if (std::getline(iss, token, ',')) {
                frame.data[i] = static_cast<uint8_t>(std::stoi(token));
            }
        }

        if (write(socket_, &frame, sizeof(frame)) != sizeof(frame)) {
            throw std::runtime_error("Failed to send CAN frame");
        }

        RCLCPP_INFO(this->get_logger(), "CAN frame sent: ID=0x%02X", frame_id);
    }

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr feedback_publisher_;
    int socket_;
    std::string interface_;
};

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);

    auto node = std::make_shared<CANSender>("can0"); // Replace "can0" with your CAN interface name
    rclcpp::spin(node);

    rclcpp::shutdown();
    return 0;
}
