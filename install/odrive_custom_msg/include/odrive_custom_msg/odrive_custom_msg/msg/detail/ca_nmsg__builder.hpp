// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from odrive_custom_msg:msg/CANmsg.idl
// generated code does not contain a copyright notice

#ifndef ODRIVE_CUSTOM_MSG__MSG__DETAIL__CA_NMSG__BUILDER_HPP_
#define ODRIVE_CUSTOM_MSG__MSG__DETAIL__CA_NMSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "odrive_custom_msg/msg/detail/ca_nmsg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace odrive_custom_msg
{

namespace msg
{

namespace builder
{

class Init_CANmsg_interface
{
public:
  explicit Init_CANmsg_interface(::odrive_custom_msg::msg::CANmsg & msg)
  : msg_(msg)
  {}
  ::odrive_custom_msg::msg::CANmsg interface(::odrive_custom_msg::msg::CANmsg::_interface_type arg)
  {
    msg_.interface = std::move(arg);
    return std::move(msg_);
  }

private:
  ::odrive_custom_msg::msg::CANmsg msg_;
};

class Init_CANmsg_data
{
public:
  explicit Init_CANmsg_data(::odrive_custom_msg::msg::CANmsg & msg)
  : msg_(msg)
  {}
  Init_CANmsg_interface data(::odrive_custom_msg::msg::CANmsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_CANmsg_interface(msg_);
  }

private:
  ::odrive_custom_msg::msg::CANmsg msg_;
};

class Init_CANmsg_frame_id
{
public:
  Init_CANmsg_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CANmsg_data frame_id(::odrive_custom_msg::msg::CANmsg::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_CANmsg_data(msg_);
  }

private:
  ::odrive_custom_msg::msg::CANmsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::odrive_custom_msg::msg::CANmsg>()
{
  return odrive_custom_msg::msg::builder::Init_CANmsg_frame_id();
}

}  // namespace odrive_custom_msg

#endif  // ODRIVE_CUSTOM_MSG__MSG__DETAIL__CA_NMSG__BUILDER_HPP_
