// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pick_and_place_interfaces:msg/JointControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pick_and_place_interfaces/msg/joint_control.h"


#ifndef PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__STRUCT_H_
#define PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'joint_names'
#include "rosidl_runtime_c/string.h"
// Member 'positions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointControl in the package pick_and_place_interfaces.
typedef struct pick_and_place_interfaces__msg__JointControl
{
  rosidl_runtime_c__String__Sequence joint_names;
  rosidl_runtime_c__double__Sequence positions;
  double hold_time;
} pick_and_place_interfaces__msg__JointControl;

// Struct for a sequence of pick_and_place_interfaces__msg__JointControl.
typedef struct pick_and_place_interfaces__msg__JointControl__Sequence
{
  pick_and_place_interfaces__msg__JointControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pick_and_place_interfaces__msg__JointControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__STRUCT_H_
