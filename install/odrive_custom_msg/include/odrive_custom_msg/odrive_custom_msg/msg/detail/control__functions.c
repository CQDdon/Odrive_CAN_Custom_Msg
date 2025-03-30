// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from odrive_custom_msg:msg/Control.idl
// generated code does not contain a copyright notice
#include "odrive_custom_msg/msg/detail/control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
odrive_custom_msg__msg__Control__init(odrive_custom_msg__msg__Control * msg)
{
  if (!msg) {
    return false;
  }
  // device_id
  // input_pos
  // input_vel
  // input_torque
  return true;
}

void
odrive_custom_msg__msg__Control__fini(odrive_custom_msg__msg__Control * msg)
{
  if (!msg) {
    return;
  }
  // device_id
  // input_pos
  // input_vel
  // input_torque
}

bool
odrive_custom_msg__msg__Control__are_equal(const odrive_custom_msg__msg__Control * lhs, const odrive_custom_msg__msg__Control * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // input_pos
  if (lhs->input_pos != rhs->input_pos) {
    return false;
  }
  // input_vel
  if (lhs->input_vel != rhs->input_vel) {
    return false;
  }
  // input_torque
  if (lhs->input_torque != rhs->input_torque) {
    return false;
  }
  return true;
}

bool
odrive_custom_msg__msg__Control__copy(
  const odrive_custom_msg__msg__Control * input,
  odrive_custom_msg__msg__Control * output)
{
  if (!input || !output) {
    return false;
  }
  // device_id
  output->device_id = input->device_id;
  // input_pos
  output->input_pos = input->input_pos;
  // input_vel
  output->input_vel = input->input_vel;
  // input_torque
  output->input_torque = input->input_torque;
  return true;
}

odrive_custom_msg__msg__Control *
odrive_custom_msg__msg__Control__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  odrive_custom_msg__msg__Control * msg = (odrive_custom_msg__msg__Control *)allocator.allocate(sizeof(odrive_custom_msg__msg__Control), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(odrive_custom_msg__msg__Control));
  bool success = odrive_custom_msg__msg__Control__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
odrive_custom_msg__msg__Control__destroy(odrive_custom_msg__msg__Control * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    odrive_custom_msg__msg__Control__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
odrive_custom_msg__msg__Control__Sequence__init(odrive_custom_msg__msg__Control__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  odrive_custom_msg__msg__Control * data = NULL;

  if (size) {
    data = (odrive_custom_msg__msg__Control *)allocator.zero_allocate(size, sizeof(odrive_custom_msg__msg__Control), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = odrive_custom_msg__msg__Control__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        odrive_custom_msg__msg__Control__fini(&data[i - 1]);
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
odrive_custom_msg__msg__Control__Sequence__fini(odrive_custom_msg__msg__Control__Sequence * array)
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
      odrive_custom_msg__msg__Control__fini(&array->data[i]);
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

odrive_custom_msg__msg__Control__Sequence *
odrive_custom_msg__msg__Control__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  odrive_custom_msg__msg__Control__Sequence * array = (odrive_custom_msg__msg__Control__Sequence *)allocator.allocate(sizeof(odrive_custom_msg__msg__Control__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = odrive_custom_msg__msg__Control__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
odrive_custom_msg__msg__Control__Sequence__destroy(odrive_custom_msg__msg__Control__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    odrive_custom_msg__msg__Control__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
odrive_custom_msg__msg__Control__Sequence__are_equal(const odrive_custom_msg__msg__Control__Sequence * lhs, const odrive_custom_msg__msg__Control__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!odrive_custom_msg__msg__Control__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
odrive_custom_msg__msg__Control__Sequence__copy(
  const odrive_custom_msg__msg__Control__Sequence * input,
  odrive_custom_msg__msg__Control__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(odrive_custom_msg__msg__Control);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    odrive_custom_msg__msg__Control * data =
      (odrive_custom_msg__msg__Control *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!odrive_custom_msg__msg__Control__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          odrive_custom_msg__msg__Control__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!odrive_custom_msg__msg__Control__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
