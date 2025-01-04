#include <rclcpp/rclcpp.hpp>
#include "odrive_custom_msg/robocon_msg/CAN_msg.hpp"
#include <linux/can.h>
#include <linux/can/raw.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <cstring>
#include <vector>
#include <iostream>
#include <iomanip>

class CANSenderNode : public rclcpp::Node {
public:
    CANSenderNode() : Node("can_sender") {
        // Initialize socket to -1
        can_socket_ = -1;

        // Subscription to CAN_msg topic
        subscriber_ = this->create_subscription<odrive_custom_msg::robocon_msg::CAN_msg>(
            "can_topic",
            10,
            std::bind(&CANSenderNode::canMessageCallback, this, std::placeholders::_1));

        RCLCPP_INFO(this->get_logger(), "CAN Sender Node started.");
    }

    ~CANSenderNode() {
        if (can_socket_ >= 0) {
            close(can_socket_);
        }
    }

private:
    int can_socket_;
    rclcpp::Subscription<odrive_custom_msg::robocon_msg::CAN_msg>::SharedPtr subscriber_;

    void setupSocket(const std::string &interface) {
        if (can_socket_ >= 0) {
            close(can_socket_);
        }

        can_socket_ = socket(PF_CAN, SOCK_RAW, CAN_RAW);
        if (can_socket_ < 0) {
            RCLCPP_ERROR(this->get_logger(), "Error creating CAN socket");
            return;
        }

        struct ifreq ifr;
        strncpy(ifr.ifr_name, interface.c_str(), IFNAMSIZ);
        if (ioctl(can_socket_, SIOCGIFINDEX, &ifr) < 0) {
            RCLCPP_ERROR(this->get_logger(), "Error binding to CAN interface: %s", interface.c_str());
            return;
        }

        struct sockaddr_can addr;
        memset(&addr, 0, sizeof(addr));
        addr.can_family = AF_CAN;
        addr.can_ifindex = ifr.ifr_ifindex;
        if (bind(can_socket_, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
            RCLCPP_ERROR(this->get_logger(), "Error binding CAN socket to interface: %s", interface.c_str());
            return;
        }

        RCLCPP_INFO(this->get_logger(), "Socket bound to interface: %s", interface.c_str());
    }

    void canMessageCallback(const odrive_custom_msg::robocon_msg::CAN_msg::SharedPtr msg) {
        // Setup socket for the specified interface
        setupSocket(msg->interface);

        if (can_socket_ < 0) {
            RCLCPP_ERROR(this->get_logger(), "Socket not initialized for interface: %s", msg->interface.c_str());
            return;
        }

        struct can_frame frame;

        // Set frame ID
        frame.can_id = msg->frame_id;

        // Set data length and data bytes
        frame.can_dlc = msg->data.size();
        std::memcpy(frame.data, msg->data.data(), msg->data.size());

        // Send the CAN frame
        if (write(can_socket_, &frame, sizeof(frame)) != sizeof(frame)) {
            RCLCPP_ERROR(this->get_logger(), "Failed to send CAN frame on interface: %s", msg->interface.c_str());
        } else {
            RCLCPP_INFO(this->get_logger(), "Sent CAN frame: ID=0x%X, Data=[%s], Interface=%s", 
                        frame.can_id, formatData(frame.data, frame.can_dlc).c_str(), msg->interface.c_str());
        }
    }

    std::string formatData(const uint8_t *data, size_t len) {
        std::ostringstream oss;
        for (size_t i = 0; i < len; ++i) {
            oss << "0x" << std::hex << std::setw(2) << std::setfill('0') << (int)data[i];
            if (i < len - 1) oss << ", ";
        }
        return oss.str();
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<CANSenderNode>());
    rclcpp::shutdown();
    return 0;
}
