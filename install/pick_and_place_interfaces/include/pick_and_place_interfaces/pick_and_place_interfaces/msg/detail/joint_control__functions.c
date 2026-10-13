// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pick_and_place_interfaces:msg/JointControl.idl
// generated code does not contain a copyright notice
#include "pick_and_place_interfaces/msg/detail/joint_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
pick_and_place_interfaces__msg__JointControl__init(pick_and_place_interfaces__msg__JointControl * msg)
{
  if (!msg) {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 0)) {
    pick_and_place_interfaces__msg__JointControl__fini(msg);
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__init(&msg->positions, 0)) {
    pick_and_place_interfaces__msg__JointControl__fini(msg);
    return false;
  }
  // hold_time
  return true;
}

void
pick_and_place_interfaces__msg__JointControl__fini(pick_and_place_interfaces__msg__JointControl * msg)
{
  if (!msg) {
    return;
  }
  // joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_names);
  // positions
  rosidl_runtime_c__double__Sequence__fini(&msg->positions);
  // hold_time
}

bool
pick_and_place_interfaces__msg__JointControl__are_equal(const pick_and_place_interfaces__msg__JointControl * lhs, const pick_and_place_interfaces__msg__JointControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->joint_names), &(rhs->joint_names)))
  {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->positions), &(rhs->positions)))
  {
    return false;
  }
  // hold_time
  if (lhs->hold_time != rhs->hold_time) {
    return false;
  }
  return true;
}

bool
pick_and_place_interfaces__msg__JointControl__copy(
  const pick_and_place_interfaces__msg__JointControl * input,
  pick_and_place_interfaces__msg__JointControl * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->joint_names), &(output->joint_names)))
  {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->positions), &(output->positions)))
  {
    return false;
  }
  // hold_time
  output->hold_time = input->hold_time;
  return true;
}

pick_and_place_interfaces__msg__JointControl *
pick_and_place_interfaces__msg__JointControl__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_and_place_interfaces__msg__JointControl * msg = (pick_and_place_interfaces__msg__JointControl *)allocator.allocate(sizeof(pick_and_place_interfaces__msg__JointControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pick_and_place_interfaces__msg__JointControl));
  bool success = pick_and_place_interfaces__msg__JointControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pick_and_place_interfaces__msg__JointControl__destroy(pick_and_place_interfaces__msg__JointControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pick_and_place_interfaces__msg__JointControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pick_and_place_interfaces__msg__JointControl__Sequence__init(pick_and_place_interfaces__msg__JointControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_and_place_interfaces__msg__JointControl * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pick_and_place_interfaces__msg__JointControl)) {
      return false;
    }
    data = (pick_and_place_interfaces__msg__JointControl *)allocator.zero_allocate(size, sizeof(pick_and_place_interfaces__msg__JointControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pick_and_place_interfaces__msg__JointControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pick_and_place_interfaces__msg__JointControl__fini(&data[i - 1]);
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
pick_and_place_interfaces__msg__JointControl__Sequence__fini(pick_and_place_interfaces__msg__JointControl__Sequence * array)
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
      pick_and_place_interfaces__msg__JointControl__fini(&array->data[i]);
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

pick_and_place_interfaces__msg__JointControl__Sequence *
pick_and_place_interfaces__msg__JointControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_and_place_interfaces__msg__JointControl__Sequence * array = (pick_and_place_interfaces__msg__JointControl__Sequence *)allocator.allocate(sizeof(pick_and_place_interfaces__msg__JointControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pick_and_place_interfaces__msg__JointControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pick_and_place_interfaces__msg__JointControl__Sequence__destroy(pick_and_place_interfaces__msg__JointControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pick_and_place_interfaces__msg__JointControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pick_and_place_interfaces__msg__JointControl__Sequence__are_equal(const pick_and_place_interfaces__msg__JointControl__Sequence * lhs, const pick_and_place_interfaces__msg__JointControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pick_and_place_interfaces__msg__JointControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pick_and_place_interfaces__msg__JointControl__Sequence__copy(
  const pick_and_place_interfaces__msg__JointControl__Sequence * input,
  pick_and_place_interfaces__msg__JointControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pick_and_place_interfaces__msg__JointControl)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pick_and_place_interfaces__msg__JointControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pick_and_place_interfaces__msg__JointControl * data =
      (pick_and_place_interfaces__msg__JointControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pick_and_place_interfaces__msg__JointControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pick_and_place_interfaces__msg__JointControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pick_and_place_interfaces__msg__JointControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
