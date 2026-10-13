// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pick_and_place_interfaces:srv/SetGripper.idl
// generated code does not contain a copyright notice
#include "pick_and_place_interfaces/srv/detail/set_gripper__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
pick_and_place_interfaces__srv__SetGripper_Request__init(pick_and_place_interfaces__srv__SetGripper_Request * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // max_effort
  return true;
}

void
pick_and_place_interfaces__srv__SetGripper_Request__fini(pick_and_place_interfaces__srv__SetGripper_Request * msg)
{
  if (!msg) {
    return;
  }
  // position
  // max_effort
}

bool
pick_and_place_interfaces__srv__SetGripper_Request__are_equal(const pick_and_place_interfaces__srv__SetGripper_Request * lhs, const pick_and_place_interfaces__srv__SetGripper_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // max_effort
  if (lhs->max_effort != rhs->max_effort) {
    return false;
  }
  return true;
}

bool
pick_and_place_interfaces__srv__SetGripper_Request__copy(
  const pick_and_place_interfaces__srv__SetGripper_Request * input,
  pick_and_place_interfaces__srv__SetGripper_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  output->position = input->position;
  // max_effort
  output->max_effort = input->max_effort;
  return true;
}

pick_and_place_interfaces__srv__SetGripper_Request *
pick_and_place_interfaces__srv__SetGripper_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_and_place_interfaces__srv__SetGripper_Request * msg = (pick_and_place_interfaces__srv__SetGripper_Request *)allocator.allocate(sizeof(pick_and_place_interfaces__srv__SetGripper_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pick_and_place_interfaces__srv__SetGripper_Request));
  bool success = pick_and_place_interfaces__srv__SetGripper_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pick_and_place_interfaces__srv__SetGripper_Request__destroy(pick_and_place_interfaces__srv__SetGripper_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pick_and_place_interfaces__srv__SetGripper_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pick_and_place_interfaces__srv__SetGripper_Request__Sequence__init(pick_and_place_interfaces__srv__SetGripper_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_and_place_interfaces__srv__SetGripper_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pick_and_place_interfaces__srv__SetGripper_Request)) {
      return false;
    }
    data = (pick_and_place_interfaces__srv__SetGripper_Request *)allocator.zero_allocate(size, sizeof(pick_and_place_interfaces__srv__SetGripper_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pick_and_place_interfaces__srv__SetGripper_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pick_and_place_interfaces__srv__SetGripper_Request__fini(&data[i - 1]);
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
pick_and_place_interfaces__srv__SetGripper_Request__Sequence__fini(pick_and_place_interfaces__srv__SetGripper_Request__Sequence * array)
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
      pick_and_place_interfaces__srv__SetGripper_Request__fini(&array->data[i]);
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

pick_and_place_interfaces__srv__SetGripper_Request__Sequence *
pick_and_place_interfaces__srv__SetGripper_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_and_place_interfaces__srv__SetGripper_Request__Sequence * array = (pick_and_place_interfaces__srv__SetGripper_Request__Sequence *)allocator.allocate(sizeof(pick_and_place_interfaces__srv__SetGripper_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pick_and_place_interfaces__srv__SetGripper_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pick_and_place_interfaces__srv__SetGripper_Request__Sequence__destroy(pick_and_place_interfaces__srv__SetGripper_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pick_and_place_interfaces__srv__SetGripper_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pick_and_place_interfaces__srv__SetGripper_Request__Sequence__are_equal(const pick_and_place_interfaces__srv__SetGripper_Request__Sequence * lhs, const pick_and_place_interfaces__srv__SetGripper_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pick_and_place_interfaces__srv__SetGripper_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pick_and_place_interfaces__srv__SetGripper_Request__Sequence__copy(
  const pick_and_place_interfaces__srv__SetGripper_Request__Sequence * input,
  pick_and_place_interfaces__srv__SetGripper_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pick_and_place_interfaces__srv__SetGripper_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pick_and_place_interfaces__srv__SetGripper_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pick_and_place_interfaces__srv__SetGripper_Request * data =
      (pick_and_place_interfaces__srv__SetGripper_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pick_and_place_interfaces__srv__SetGripper_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pick_and_place_interfaces__srv__SetGripper_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pick_and_place_interfaces__srv__SetGripper_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
pick_and_place_interfaces__srv__SetGripper_Response__init(pick_and_place_interfaces__srv__SetGripper_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    pick_and_place_interfaces__srv__SetGripper_Response__fini(msg);
    return false;
  }
  return true;
}

void
pick_and_place_interfaces__srv__SetGripper_Response__fini(pick_and_place_interfaces__srv__SetGripper_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
pick_and_place_interfaces__srv__SetGripper_Response__are_equal(const pick_and_place_interfaces__srv__SetGripper_Response * lhs, const pick_and_place_interfaces__srv__SetGripper_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
pick_and_place_interfaces__srv__SetGripper_Response__copy(
  const pick_and_place_interfaces__srv__SetGripper_Response * input,
  pick_and_place_interfaces__srv__SetGripper_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

pick_and_place_interfaces__srv__SetGripper_Response *
pick_and_place_interfaces__srv__SetGripper_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_and_place_interfaces__srv__SetGripper_Response * msg = (pick_and_place_interfaces__srv__SetGripper_Response *)allocator.allocate(sizeof(pick_and_place_interfaces__srv__SetGripper_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pick_and_place_interfaces__srv__SetGripper_Response));
  bool success = pick_and_place_interfaces__srv__SetGripper_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pick_and_place_interfaces__srv__SetGripper_Response__destroy(pick_and_place_interfaces__srv__SetGripper_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pick_and_place_interfaces__srv__SetGripper_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pick_and_place_interfaces__srv__SetGripper_Response__Sequence__init(pick_and_place_interfaces__srv__SetGripper_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_and_place_interfaces__srv__SetGripper_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pick_and_place_interfaces__srv__SetGripper_Response)) {
      return false;
    }
    data = (pick_and_place_interfaces__srv__SetGripper_Response *)allocator.zero_allocate(size, sizeof(pick_and_place_interfaces__srv__SetGripper_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pick_and_place_interfaces__srv__SetGripper_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pick_and_place_interfaces__srv__SetGripper_Response__fini(&data[i - 1]);
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
pick_and_place_interfaces__srv__SetGripper_Response__Sequence__fini(pick_and_place_interfaces__srv__SetGripper_Response__Sequence * array)
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
      pick_and_place_interfaces__srv__SetGripper_Response__fini(&array->data[i]);
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

pick_and_place_interfaces__srv__SetGripper_Response__Sequence *
pick_and_place_interfaces__srv__SetGripper_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_and_place_interfaces__srv__SetGripper_Response__Sequence * array = (pick_and_place_interfaces__srv__SetGripper_Response__Sequence *)allocator.allocate(sizeof(pick_and_place_interfaces__srv__SetGripper_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pick_and_place_interfaces__srv__SetGripper_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pick_and_place_interfaces__srv__SetGripper_Response__Sequence__destroy(pick_and_place_interfaces__srv__SetGripper_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pick_and_place_interfaces__srv__SetGripper_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pick_and_place_interfaces__srv__SetGripper_Response__Sequence__are_equal(const pick_and_place_interfaces__srv__SetGripper_Response__Sequence * lhs, const pick_and_place_interfaces__srv__SetGripper_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pick_and_place_interfaces__srv__SetGripper_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pick_and_place_interfaces__srv__SetGripper_Response__Sequence__copy(
  const pick_and_place_interfaces__srv__SetGripper_Response__Sequence * input,
  pick_and_place_interfaces__srv__SetGripper_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pick_and_place_interfaces__srv__SetGripper_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pick_and_place_interfaces__srv__SetGripper_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pick_and_place_interfaces__srv__SetGripper_Response * data =
      (pick_and_place_interfaces__srv__SetGripper_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pick_and_place_interfaces__srv__SetGripper_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pick_and_place_interfaces__srv__SetGripper_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pick_and_place_interfaces__srv__SetGripper_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "pick_and_place_interfaces/srv/detail/set_gripper__functions.h"

bool
pick_and_place_interfaces__srv__SetGripper_Event__init(pick_and_place_interfaces__srv__SetGripper_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    pick_and_place_interfaces__srv__SetGripper_Event__fini(msg);
    return false;
  }
  // request
  if (!pick_and_place_interfaces__srv__SetGripper_Request__Sequence__init(&msg->request, 0)) {
    pick_and_place_interfaces__srv__SetGripper_Event__fini(msg);
    return false;
  }
  // response
  if (!pick_and_place_interfaces__srv__SetGripper_Response__Sequence__init(&msg->response, 0)) {
    pick_and_place_interfaces__srv__SetGripper_Event__fini(msg);
    return false;
  }
  return true;
}

void
pick_and_place_interfaces__srv__SetGripper_Event__fini(pick_and_place_interfaces__srv__SetGripper_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  pick_and_place_interfaces__srv__SetGripper_Request__Sequence__fini(&msg->request);
  // response
  pick_and_place_interfaces__srv__SetGripper_Response__Sequence__fini(&msg->response);
}

bool
pick_and_place_interfaces__srv__SetGripper_Event__are_equal(const pick_and_place_interfaces__srv__SetGripper_Event * lhs, const pick_and_place_interfaces__srv__SetGripper_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!pick_and_place_interfaces__srv__SetGripper_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!pick_and_place_interfaces__srv__SetGripper_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
pick_and_place_interfaces__srv__SetGripper_Event__copy(
  const pick_and_place_interfaces__srv__SetGripper_Event * input,
  pick_and_place_interfaces__srv__SetGripper_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!pick_and_place_interfaces__srv__SetGripper_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!pick_and_place_interfaces__srv__SetGripper_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

pick_and_place_interfaces__srv__SetGripper_Event *
pick_and_place_interfaces__srv__SetGripper_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_and_place_interfaces__srv__SetGripper_Event * msg = (pick_and_place_interfaces__srv__SetGripper_Event *)allocator.allocate(sizeof(pick_and_place_interfaces__srv__SetGripper_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pick_and_place_interfaces__srv__SetGripper_Event));
  bool success = pick_and_place_interfaces__srv__SetGripper_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pick_and_place_interfaces__srv__SetGripper_Event__destroy(pick_and_place_interfaces__srv__SetGripper_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pick_and_place_interfaces__srv__SetGripper_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pick_and_place_interfaces__srv__SetGripper_Event__Sequence__init(pick_and_place_interfaces__srv__SetGripper_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_and_place_interfaces__srv__SetGripper_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(pick_and_place_interfaces__srv__SetGripper_Event)) {
      return false;
    }
    data = (pick_and_place_interfaces__srv__SetGripper_Event *)allocator.zero_allocate(size, sizeof(pick_and_place_interfaces__srv__SetGripper_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pick_and_place_interfaces__srv__SetGripper_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pick_and_place_interfaces__srv__SetGripper_Event__fini(&data[i - 1]);
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
pick_and_place_interfaces__srv__SetGripper_Event__Sequence__fini(pick_and_place_interfaces__srv__SetGripper_Event__Sequence * array)
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
      pick_and_place_interfaces__srv__SetGripper_Event__fini(&array->data[i]);
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

pick_and_place_interfaces__srv__SetGripper_Event__Sequence *
pick_and_place_interfaces__srv__SetGripper_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pick_and_place_interfaces__srv__SetGripper_Event__Sequence * array = (pick_and_place_interfaces__srv__SetGripper_Event__Sequence *)allocator.allocate(sizeof(pick_and_place_interfaces__srv__SetGripper_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pick_and_place_interfaces__srv__SetGripper_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pick_and_place_interfaces__srv__SetGripper_Event__Sequence__destroy(pick_and_place_interfaces__srv__SetGripper_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pick_and_place_interfaces__srv__SetGripper_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pick_and_place_interfaces__srv__SetGripper_Event__Sequence__are_equal(const pick_and_place_interfaces__srv__SetGripper_Event__Sequence * lhs, const pick_and_place_interfaces__srv__SetGripper_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pick_and_place_interfaces__srv__SetGripper_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pick_and_place_interfaces__srv__SetGripper_Event__Sequence__copy(
  const pick_and_place_interfaces__srv__SetGripper_Event__Sequence * input,
  pick_and_place_interfaces__srv__SetGripper_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(pick_and_place_interfaces__srv__SetGripper_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(pick_and_place_interfaces__srv__SetGripper_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pick_and_place_interfaces__srv__SetGripper_Event * data =
      (pick_and_place_interfaces__srv__SetGripper_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pick_and_place_interfaces__srv__SetGripper_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pick_and_place_interfaces__srv__SetGripper_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pick_and_place_interfaces__srv__SetGripper_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
