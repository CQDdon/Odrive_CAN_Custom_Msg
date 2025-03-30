// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from odrive_custom_msg:msg/CANmsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "odrive_custom_msg/msg/detail/ca_nmsg__rosidl_typesupport_introspection_c.h"
#include "odrive_custom_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "odrive_custom_msg/msg/detail/ca_nmsg__functions.h"
#include "odrive_custom_msg/msg/detail/ca_nmsg__struct.h"


// Include directives for member types
// Member `interface`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__CANmsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  odrive_custom_msg__msg__CANmsg__init(message_memory);
}

void odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__CANmsg_fini_function(void * message_memory)
{
  odrive_custom_msg__msg__CANmsg__fini(message_memory);
}

size_t odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__size_function__CANmsg__data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__get_const_function__CANmsg__data(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__get_function__CANmsg__data(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__fetch_function__CANmsg__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__get_const_function__CANmsg__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__assign_function__CANmsg__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__get_function__CANmsg__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__CANmsg_message_member_array[3] = {
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odrive_custom_msg__msg__CANmsg, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(odrive_custom_msg__msg__CANmsg, data),  // bytes offset in struct
    NULL,  // default value
    odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__size_function__CANmsg__data,  // size() function pointer
    odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__get_const_function__CANmsg__data,  // get_const(index) function pointer
    odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__get_function__CANmsg__data,  // get(index) function pointer
    odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__fetch_function__CANmsg__data,  // fetch(index, &value) function pointer
    odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__assign_function__CANmsg__data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "interface",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odrive_custom_msg__msg__CANmsg, interface),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__CANmsg_message_members = {
  "odrive_custom_msg__msg",  // message namespace
  "CANmsg",  // message name
  3,  // number of fields
  sizeof(odrive_custom_msg__msg__CANmsg),
  odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__CANmsg_message_member_array,  // message members
  odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__CANmsg_init_function,  // function to initialize message memory (memory has to be allocated)
  odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__CANmsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__CANmsg_message_type_support_handle = {
  0,
  &odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__CANmsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_odrive_custom_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, odrive_custom_msg, msg, CANmsg)() {
  if (!odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__CANmsg_message_type_support_handle.typesupport_identifier) {
    odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__CANmsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &odrive_custom_msg__msg__CANmsg__rosidl_typesupport_introspection_c__CANmsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
