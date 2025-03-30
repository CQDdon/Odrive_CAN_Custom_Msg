// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from odrive_custom_msg:msg/Control.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "odrive_custom_msg/msg/detail/control__rosidl_typesupport_introspection_c.h"
#include "odrive_custom_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "odrive_custom_msg/msg/detail/control__functions.h"
#include "odrive_custom_msg/msg/detail/control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void odrive_custom_msg__msg__Control__rosidl_typesupport_introspection_c__Control_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  odrive_custom_msg__msg__Control__init(message_memory);
}

void odrive_custom_msg__msg__Control__rosidl_typesupport_introspection_c__Control_fini_function(void * message_memory)
{
  odrive_custom_msg__msg__Control__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember odrive_custom_msg__msg__Control__rosidl_typesupport_introspection_c__Control_message_member_array[4] = {
  {
    "device_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odrive_custom_msg__msg__Control, device_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odrive_custom_msg__msg__Control, input_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odrive_custom_msg__msg__Control, input_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(odrive_custom_msg__msg__Control, input_torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers odrive_custom_msg__msg__Control__rosidl_typesupport_introspection_c__Control_message_members = {
  "odrive_custom_msg__msg",  // message namespace
  "Control",  // message name
  4,  // number of fields
  sizeof(odrive_custom_msg__msg__Control),
  odrive_custom_msg__msg__Control__rosidl_typesupport_introspection_c__Control_message_member_array,  // message members
  odrive_custom_msg__msg__Control__rosidl_typesupport_introspection_c__Control_init_function,  // function to initialize message memory (memory has to be allocated)
  odrive_custom_msg__msg__Control__rosidl_typesupport_introspection_c__Control_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t odrive_custom_msg__msg__Control__rosidl_typesupport_introspection_c__Control_message_type_support_handle = {
  0,
  &odrive_custom_msg__msg__Control__rosidl_typesupport_introspection_c__Control_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_odrive_custom_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, odrive_custom_msg, msg, Control)() {
  if (!odrive_custom_msg__msg__Control__rosidl_typesupport_introspection_c__Control_message_type_support_handle.typesupport_identifier) {
    odrive_custom_msg__msg__Control__rosidl_typesupport_introspection_c__Control_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &odrive_custom_msg__msg__Control__rosidl_typesupport_introspection_c__Control_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
