// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from odrive_custom_msg:msg/CANmsg.idl
// generated code does not contain a copyright notice

#ifndef ODRIVE_CUSTOM_MSG__MSG__DETAIL__CA_NMSG__FUNCTIONS_H_
#define ODRIVE_CUSTOM_MSG__MSG__DETAIL__CA_NMSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "odrive_custom_msg/msg/rosidl_generator_c__visibility_control.h"

#include "odrive_custom_msg/msg/detail/ca_nmsg__struct.h"

/// Initialize msg/CANmsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * odrive_custom_msg__msg__CANmsg
 * )) before or use
 * odrive_custom_msg__msg__CANmsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_odrive_custom_msg
bool
odrive_custom_msg__msg__CANmsg__init(odrive_custom_msg__msg__CANmsg * msg);

/// Finalize msg/CANmsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_odrive_custom_msg
void
odrive_custom_msg__msg__CANmsg__fini(odrive_custom_msg__msg__CANmsg * msg);

/// Create msg/CANmsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * odrive_custom_msg__msg__CANmsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_odrive_custom_msg
odrive_custom_msg__msg__CANmsg *
odrive_custom_msg__msg__CANmsg__create();

/// Destroy msg/CANmsg message.
/**
 * It calls
 * odrive_custom_msg__msg__CANmsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_odrive_custom_msg
void
odrive_custom_msg__msg__CANmsg__destroy(odrive_custom_msg__msg__CANmsg * msg);

/// Check for msg/CANmsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_odrive_custom_msg
bool
odrive_custom_msg__msg__CANmsg__are_equal(const odrive_custom_msg__msg__CANmsg * lhs, const odrive_custom_msg__msg__CANmsg * rhs);

/// Copy a msg/CANmsg message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_odrive_custom_msg
bool
odrive_custom_msg__msg__CANmsg__copy(
  const odrive_custom_msg__msg__CANmsg * input,
  odrive_custom_msg__msg__CANmsg * output);

/// Initialize array of msg/CANmsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * odrive_custom_msg__msg__CANmsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_odrive_custom_msg
bool
odrive_custom_msg__msg__CANmsg__Sequence__init(odrive_custom_msg__msg__CANmsg__Sequence * array, size_t size);

/// Finalize array of msg/CANmsg messages.
/**
 * It calls
 * odrive_custom_msg__msg__CANmsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_odrive_custom_msg
void
odrive_custom_msg__msg__CANmsg__Sequence__fini(odrive_custom_msg__msg__CANmsg__Sequence * array);

/// Create array of msg/CANmsg messages.
/**
 * It allocates the memory for the array and calls
 * odrive_custom_msg__msg__CANmsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_odrive_custom_msg
odrive_custom_msg__msg__CANmsg__Sequence *
odrive_custom_msg__msg__CANmsg__Sequence__create(size_t size);

/// Destroy array of msg/CANmsg messages.
/**
 * It calls
 * odrive_custom_msg__msg__CANmsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_odrive_custom_msg
void
odrive_custom_msg__msg__CANmsg__Sequence__destroy(odrive_custom_msg__msg__CANmsg__Sequence * array);

/// Check for msg/CANmsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_odrive_custom_msg
bool
odrive_custom_msg__msg__CANmsg__Sequence__are_equal(const odrive_custom_msg__msg__CANmsg__Sequence * lhs, const odrive_custom_msg__msg__CANmsg__Sequence * rhs);

/// Copy an array of msg/CANmsg messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_odrive_custom_msg
bool
odrive_custom_msg__msg__CANmsg__Sequence__copy(
  const odrive_custom_msg__msg__CANmsg__Sequence * input,
  odrive_custom_msg__msg__CANmsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ODRIVE_CUSTOM_MSG__MSG__DETAIL__CA_NMSG__FUNCTIONS_H_
