// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pick_and_place_interfaces:srv/SetGripper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pick_and_place_interfaces/srv/set_gripper.h"


#ifndef PICK_AND_PLACE_INTERFACES__SRV__DETAIL__SET_GRIPPER__STRUCT_H_
#define PICK_AND_PLACE_INTERFACES__SRV__DETAIL__SET_GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetGripper in the package pick_and_place_interfaces.
typedef struct pick_and_place_interfaces__srv__SetGripper_Request
{
  double position;
  double max_effort;
} pick_and_place_interfaces__srv__SetGripper_Request;

// Struct for a sequence of pick_and_place_interfaces__srv__SetGripper_Request.
typedef struct pick_and_place_interfaces__srv__SetGripper_Request__Sequence
{
  pick_and_place_interfaces__srv__SetGripper_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pick_and_place_interfaces__srv__SetGripper_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetGripper in the package pick_and_place_interfaces.
typedef struct pick_and_place_interfaces__srv__SetGripper_Response
{
  bool success;
  rosidl_runtime_c__String message;
} pick_and_place_interfaces__srv__SetGripper_Response;

// Struct for a sequence of pick_and_place_interfaces__srv__SetGripper_Response.
typedef struct pick_and_place_interfaces__srv__SetGripper_Response__Sequence
{
  pick_and_place_interfaces__srv__SetGripper_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pick_and_place_interfaces__srv__SetGripper_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pick_and_place_interfaces__srv__SetGripper_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pick_and_place_interfaces__srv__SetGripper_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetGripper in the package pick_and_place_interfaces.
typedef struct pick_and_place_interfaces__srv__SetGripper_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pick_and_place_interfaces__srv__SetGripper_Request__Sequence request;
  pick_and_place_interfaces__srv__SetGripper_Response__Sequence response;
} pick_and_place_interfaces__srv__SetGripper_Event;

// Struct for a sequence of pick_and_place_interfaces__srv__SetGripper_Event.
typedef struct pick_and_place_interfaces__srv__SetGripper_Event__Sequence
{
  pick_and_place_interfaces__srv__SetGripper_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pick_and_place_interfaces__srv__SetGripper_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PICK_AND_PLACE_INTERFACES__SRV__DETAIL__SET_GRIPPER__STRUCT_H_
