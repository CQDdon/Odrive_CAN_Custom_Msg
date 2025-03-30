// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from odrive_custom_msg:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef ODRIVE_CUSTOM_MSG__MSG__DETAIL__CONTROL__BUILDER_HPP_
#define ODRIVE_CUSTOM_MSG__MSG__DETAIL__CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "odrive_custom_msg/msg/detail/control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace odrive_custom_msg
{

namespace msg
{

namespace builder
{

class Init_Control_input_torque
{
public:
  explicit Init_Control_input_torque(::odrive_custom_msg::msg::Control & msg)
  : msg_(msg)
  {}
  ::odrive_custom_msg::msg::Control input_torque(::odrive_custom_msg::msg::Control::_input_torque_type arg)
  {
    msg_.input_torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::odrive_custom_msg::msg::Control msg_;
};

class Init_Control_input_vel
{
public:
  explicit Init_Control_input_vel(::odrive_custom_msg::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_input_torque input_vel(::odrive_custom_msg::msg::Control::_input_vel_type arg)
  {
    msg_.input_vel = std::move(arg);
    return Init_Control_input_torque(msg_);
  }

private:
  ::odrive_custom_msg::msg::Control msg_;
};

class Init_Control_input_pos
{
public:
  explicit Init_Control_input_pos(::odrive_custom_msg::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_input_vel input_pos(::odrive_custom_msg::msg::Control::_input_pos_type arg)
  {
    msg_.input_pos = std::move(arg);
    return Init_Control_input_vel(msg_);
  }

private:
  ::odrive_custom_msg::msg::Control msg_;
};

class Init_Control_device_id
{
public:
  Init_Control_device_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_input_pos device_id(::odrive_custom_msg::msg::Control::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_Control_input_pos(msg_);
  }

private:
  ::odrive_custom_msg::msg::Control msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::odrive_custom_msg::msg::Control>()
{
  return odrive_custom_msg::msg::builder::Init_Control_device_id();
}

}  // namespace odrive_custom_msg

#endif  // ODRIVE_CUSTOM_MSG__MSG__DETAIL__CONTROL__BUILDER_HPP_
