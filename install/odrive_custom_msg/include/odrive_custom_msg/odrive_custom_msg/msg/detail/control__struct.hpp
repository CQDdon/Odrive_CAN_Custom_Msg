// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from odrive_custom_msg:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef ODRIVE_CUSTOM_MSG__MSG__DETAIL__CONTROL__STRUCT_HPP_
#define ODRIVE_CUSTOM_MSG__MSG__DETAIL__CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__odrive_custom_msg__msg__Control __attribute__((deprecated))
#else
# define DEPRECATED__odrive_custom_msg__msg__Control __declspec(deprecated)
#endif

namespace odrive_custom_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Control_
{
  using Type = Control_<ContainerAllocator>;

  explicit Control_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0;
      this->input_pos = 0.0f;
      this->input_vel = 0.0f;
      this->input_torque = 0.0f;
    }
  }

  explicit Control_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0;
      this->input_pos = 0.0f;
      this->input_vel = 0.0f;
      this->input_torque = 0.0f;
    }
  }

  // field types and members
  using _device_id_type =
    int8_t;
  _device_id_type device_id;
  using _input_pos_type =
    float;
  _input_pos_type input_pos;
  using _input_vel_type =
    float;
  _input_vel_type input_vel;
  using _input_torque_type =
    float;
  _input_torque_type input_torque;

  // setters for named parameter idiom
  Type & set__device_id(
    const int8_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__input_pos(
    const float & _arg)
  {
    this->input_pos = _arg;
    return *this;
  }
  Type & set__input_vel(
    const float & _arg)
  {
    this->input_vel = _arg;
    return *this;
  }
  Type & set__input_torque(
    const float & _arg)
  {
    this->input_torque = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    odrive_custom_msg::msg::Control_<ContainerAllocator> *;
  using ConstRawPtr =
    const odrive_custom_msg::msg::Control_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<odrive_custom_msg::msg::Control_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<odrive_custom_msg::msg::Control_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      odrive_custom_msg::msg::Control_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<odrive_custom_msg::msg::Control_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      odrive_custom_msg::msg::Control_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<odrive_custom_msg::msg::Control_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<odrive_custom_msg::msg::Control_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<odrive_custom_msg::msg::Control_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__odrive_custom_msg__msg__Control
    std::shared_ptr<odrive_custom_msg::msg::Control_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__odrive_custom_msg__msg__Control
    std::shared_ptr<odrive_custom_msg::msg::Control_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Control_ & other) const
  {
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->input_pos != other.input_pos) {
      return false;
    }
    if (this->input_vel != other.input_vel) {
      return false;
    }
    if (this->input_torque != other.input_torque) {
      return false;
    }
    return true;
  }
  bool operator!=(const Control_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Control_

// alias to use template instance with default allocator
using Control =
  odrive_custom_msg::msg::Control_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace odrive_custom_msg

#endif  // ODRIVE_CUSTOM_MSG__MSG__DETAIL__CONTROL__STRUCT_HPP_
