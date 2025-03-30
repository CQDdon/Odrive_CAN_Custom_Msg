// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from odrive_custom_msg:msg/CANmsg.idl
// generated code does not contain a copyright notice

#ifndef ODRIVE_CUSTOM_MSG__MSG__DETAIL__CA_NMSG__STRUCT_HPP_
#define ODRIVE_CUSTOM_MSG__MSG__DETAIL__CA_NMSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__odrive_custom_msg__msg__CANmsg __attribute__((deprecated))
#else
# define DEPRECATED__odrive_custom_msg__msg__CANmsg __declspec(deprecated)
#endif

namespace odrive_custom_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CANmsg_
{
  using Type = CANmsg_<ContainerAllocator>;

  explicit CANmsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = 0ul;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
      this->interface = "";
    }
  }

  explicit CANmsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc),
    interface(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = 0ul;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
      this->interface = "";
    }
  }

  // field types and members
  using _frame_id_type =
    uint32_t;
  _frame_id_type frame_id;
  using _data_type =
    std::array<uint8_t, 8>;
  _data_type data;
  using _interface_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _interface_type interface;

  // setters for named parameter idiom
  Type & set__frame_id(
    const uint32_t & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 8> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__interface(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->interface = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    odrive_custom_msg::msg::CANmsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const odrive_custom_msg::msg::CANmsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<odrive_custom_msg::msg::CANmsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<odrive_custom_msg::msg::CANmsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      odrive_custom_msg::msg::CANmsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<odrive_custom_msg::msg::CANmsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      odrive_custom_msg::msg::CANmsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<odrive_custom_msg::msg::CANmsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<odrive_custom_msg::msg::CANmsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<odrive_custom_msg::msg::CANmsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__odrive_custom_msg__msg__CANmsg
    std::shared_ptr<odrive_custom_msg::msg::CANmsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__odrive_custom_msg__msg__CANmsg
    std::shared_ptr<odrive_custom_msg::msg::CANmsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CANmsg_ & other) const
  {
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->interface != other.interface) {
      return false;
    }
    return true;
  }
  bool operator!=(const CANmsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CANmsg_

// alias to use template instance with default allocator
using CANmsg =
  odrive_custom_msg::msg::CANmsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace odrive_custom_msg

#endif  // ODRIVE_CUSTOM_MSG__MSG__DETAIL__CA_NMSG__STRUCT_HPP_
