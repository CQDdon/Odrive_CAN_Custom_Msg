// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from odrive_custom_msg:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef ODRIVE_CUSTOM_MSG__MSG__DETAIL__CONTROL__STRUCT_H_
#define ODRIVE_CUSTOM_MSG__MSG__DETAIL__CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Control in the package odrive_custom_msg.
typedef struct odrive_custom_msg__msg__Control
{
  int8_t device_id;
  float input_pos;
  float input_vel;
  float input_torque;
} odrive_custom_msg__msg__Control;

// Struct for a sequence of odrive_custom_msg__msg__Control.
typedef struct odrive_custom_msg__msg__Control__Sequence
{
  odrive_custom_msg__msg__Control * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} odrive_custom_msg__msg__Control__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ODRIVE_CUSTOM_MSG__MSG__DETAIL__CONTROL__STRUCT_H_
