// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from odrive_custom_msg:msg/CANmsg.idl
// generated code does not contain a copyright notice

#ifndef ODRIVE_CUSTOM_MSG__MSG__DETAIL__CA_NMSG__TRAITS_HPP_
#define ODRIVE_CUSTOM_MSG__MSG__DETAIL__CA_NMSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "odrive_custom_msg/msg/detail/ca_nmsg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace odrive_custom_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const CANmsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: interface
  {
    out << "interface: ";
    rosidl_generator_traits::value_to_yaml(msg.interface, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CANmsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interface: ";
    rosidl_generator_traits::value_to_yaml(msg.interface, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CANmsg & msg, bool use_flow_style = false)
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
  const odrive_custom_msg::msg::CANmsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  odrive_custom_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use odrive_custom_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const odrive_custom_msg::msg::CANmsg & msg)
{
  return odrive_custom_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<odrive_custom_msg::msg::CANmsg>()
{
  return "odrive_custom_msg::msg::CANmsg";
}

template<>
inline const char * name<odrive_custom_msg::msg::CANmsg>()
{
  return "odrive_custom_msg/msg/CANmsg";
}

template<>
struct has_fixed_size<odrive_custom_msg::msg::CANmsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<odrive_custom_msg::msg::CANmsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<odrive_custom_msg::msg::CANmsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ODRIVE_CUSTOM_MSG__MSG__DETAIL__CA_NMSG__TRAITS_HPP_
