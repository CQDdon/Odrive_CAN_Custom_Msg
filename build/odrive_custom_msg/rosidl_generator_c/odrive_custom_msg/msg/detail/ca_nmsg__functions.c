// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from odrive_custom_msg:msg/CANmsg.idl
// generated code does not contain a copyright notice
#include "odrive_custom_msg/msg/detail/ca_nmsg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `interface`
#include "rosidl_runtime_c/string_functions.h"

bool
odrive_custom_msg__msg__CANmsg__init(odrive_custom_msg__msg__CANmsg * msg)
{
  if (!msg) {
    return false;
  }
  // frame_id
  // data
  // interface
  if (!rosidl_runtime_c__String__init(&msg->interface)) {
    odrive_custom_msg__msg__CANmsg__fini(msg);
    return false;
  }
  return true;
}

void
odrive_custom_msg__msg__CANmsg__fini(odrive_custom_msg__msg__CANmsg * msg)
{
  if (!msg) {
    return;
  }
  // frame_id
  // data
  // interface
  rosidl_runtime_c__String__fini(&msg->interface);
}

bool
odrive_custom_msg__msg__CANmsg__are_equal(const odrive_custom_msg__msg__CANmsg * lhs, const odrive_custom_msg__msg__CANmsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame_id
  if (lhs->frame_id != rhs->frame_id) {
    return false;
  }
  // data
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  // interface
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->interface), &(rhs->interface)))
  {
    return false;
  }
  return true;
}

bool
odrive_custom_msg__msg__CANmsg__copy(
  const odrive_custom_msg__msg__CANmsg * input,
  odrive_custom_msg__msg__CANmsg * output)
{
  if (!input || !output) {
    return false;
  }
  // frame_id
  output->frame_id = input->frame_id;
  // data
  for (size_t i = 0; i < 8; ++i) {
    output->data[i] = input->data[i];
  }
  // interface
  if (!rosidl_runtime_c__String__copy(
      &(input->interface), &(output->interface)))
  {
    return false;
  }
  return true;
}

odrive_custom_msg__msg__CANmsg *
odrive_custom_msg__msg__CANmsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  odrive_custom_msg__msg__CANmsg * msg = (odrive_custom_msg__msg__CANmsg *)allocator.allocate(sizeof(odrive_custom_msg__msg__CANmsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(odrive_custom_msg__msg__CANmsg));
  bool success = odrive_custom_msg__msg__CANmsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
odrive_custom_msg__msg__CANmsg__destroy(odrive_custom_msg__msg__CANmsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    odrive_custom_msg__msg__CANmsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
odrive_custom_msg__msg__CANmsg__Sequence__init(odrive_custom_msg__msg__CANmsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  odrive_custom_msg__msg__CANmsg * data = NULL;

  if (size) {
    data = (odrive_custom_msg__msg__CANmsg *)allocator.zero_allocate(size, sizeof(odrive_custom_msg__msg__CANmsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = odrive_custom_msg__msg__CANmsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        odrive_custom_msg__msg__CANmsg__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
odrive_custom_msg__msg__CANmsg__Sequence__fini(odrive_custom_msg__msg__CANmsg__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      odrive_custom_msg__msg__CANmsg__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

odrive_custom_msg__msg__CANmsg__Sequence *
odrive_custom_msg__msg__CANmsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  odrive_custom_msg__msg__CANmsg__Sequence * array = (odrive_custom_msg__msg__CANmsg__Sequence *)allocator.allocate(sizeof(odrive_custom_msg__msg__CANmsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = odrive_custom_msg__msg__CANmsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
odrive_custom_msg__msg__CANmsg__Sequence__destroy(odrive_custom_msg__msg__CANmsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    odrive_custom_msg__msg__CANmsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
odrive_custom_msg__msg__CANmsg__Sequence__are_equal(const odrive_custom_msg__msg__CANmsg__Sequence * lhs, const odrive_custom_msg__msg__CANmsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!odrive_custom_msg__msg__CANmsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
odrive_custom_msg__msg__CANmsg__Sequence__copy(
  const odrive_custom_msg__msg__CANmsg__Sequence * input,
  odrive_custom_msg__msg__CANmsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(odrive_custom_msg__msg__CANmsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    odrive_custom_msg__msg__CANmsg * data =
      (odrive_custom_msg__msg__CANmsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!odrive_custom_msg__msg__CANmsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          odrive_custom_msg__msg__CANmsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!odrive_custom_msg__msg__CANmsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
