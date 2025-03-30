// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from odrive_custom_msg:msg/CANmsg.idl
// generated code does not contain a copyright notice

#ifndef ODRIVE_CUSTOM_MSG__MSG__DETAIL__CA_NMSG__STRUCT_H_
#define ODRIVE_CUSTOM_MSG__MSG__DETAIL__CA_NMSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'interface'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CANmsg in the package odrive_custom_msg.
typedef struct odrive_custom_msg__msg__CANmsg
{
  uint32_t frame_id;
  uint8_t data[8];
  rosidl_runtime_c__String interface;
} odrive_custom_msg__msg__CANmsg;

// Struct for a sequence of odrive_custom_msg__msg__CANmsg.
typedef struct odrive_custom_msg__msg__CANmsg__Sequence
{
  odrive_custom_msg__msg__CANmsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} odrive_custom_msg__msg__CANmsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ODRIVE_CUSTOM_MSG__MSG__DETAIL__CA_NMSG__STRUCT_H_
