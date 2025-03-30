// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from odrive_custom_msg:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef ODRIVE_CUSTOM_MSG__MSG__DETAIL__CONTROL__TRAITS_HPP_
#define ODRIVE_CUSTOM_MSG__MSG__DETAIL__CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "odrive_custom_msg/msg/detail/control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace odrive_custom_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Control & msg,
  std::ostream & out)
{
  out << "{";
  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

  // member: input_pos
  {
    out << "input_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.input_pos, out);
    out << ", ";
  }

  // member: input_vel
  {
    out << "input_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.input_vel, out);
    out << ", ";
  }

  // member: input_torque
  {
    out << "input_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.input_torque, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Control & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: input_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.input_pos, out);
    out << "\n";
  }

  // member: input_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.input_vel, out);
    out << "\n";
  }

  // member: input_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.input_torque, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Control & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace odrive_custom_msg

namespace rosidl_generator_traits
{

[[deprecated("use odrive_custom_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const odrive_custom_msg::msg::Control & msg,
  std::ostream & out, size_t indentation = 0)
{
  odrive_custom_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use odrive_custom_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const odrive_custom_msg::msg::Control & msg)
{
  return odrive_custom_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<odrive_custom_msg::msg::Control>()
{
  return "odrive_custom_msg::msg::Control";
}

template<>
inline const char * name<odrive_custom_msg::msg::Control>()
{
  return "odrive_custom_msg/msg/Control";
}

template<>
struct has_fixed_size<odrive_custom_msg::msg::Control>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<odrive_custom_msg::msg::Control>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<odrive_custom_msg::msg::Control>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ODRIVE_CUSTOM_MSG__MSG__DETAIL__CONTROL__TRAITS_HPP_
