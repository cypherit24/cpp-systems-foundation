// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pick_and_place_interfaces:msg/JointControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pick_and_place_interfaces/msg/detail/joint_control__rosidl_typesupport_introspection_c.h"
#include "pick_and_place_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pick_and_place_interfaces/msg/detail/joint_control__functions.h"
#include "pick_and_place_interfaces/msg/detail/joint_control__struct.h"


// Include directives for member types
// Member `joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__JointControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pick_and_place_interfaces__msg__JointControl__init(message_memory);
}

void pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__JointControl_fini_function(void * message_memory)
{
  pick_and_place_interfaces__msg__JointControl__fini(message_memory);
}

size_t pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__size_function__JointControl__joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__get_const_function__JointControl__joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__get_function__JointControl__joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__fetch_function__JointControl__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__get_const_function__JointControl__joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__assign_function__JointControl__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__get_function__JointControl__joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__resize_function__JointControl__joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__size_function__JointControl__positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__get_const_function__JointControl__positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__get_function__JointControl__positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__fetch_function__JointControl__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__get_const_function__JointControl__positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__assign_function__JointControl__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__get_function__JointControl__positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__resize_function__JointControl__positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__JointControl_message_member_array[3] = {
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pick_and_place_interfaces__msg__JointControl, joint_names),  // bytes offset in struct
    NULL,  // default value
    pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__size_function__JointControl__joint_names,  // size() function pointer
    pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__get_const_function__JointControl__joint_names,  // get_const(index) function pointer
    pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__get_function__JointControl__joint_names,  // get(index) function pointer
    pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__fetch_function__JointControl__joint_names,  // fetch(index, &value) function pointer
    pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__assign_function__JointControl__joint_names,  // assign(index, value) function pointer
    pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__resize_function__JointControl__joint_names  // resize(index) function pointer
  },
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pick_and_place_interfaces__msg__JointControl, positions),  // bytes offset in struct
    NULL,  // default value
    pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__size_function__JointControl__positions,  // size() function pointer
    pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__get_const_function__JointControl__positions,  // get_const(index) function pointer
    pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__get_function__JointControl__positions,  // get(index) function pointer
    pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__fetch_function__JointControl__positions,  // fetch(index, &value) function pointer
    pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__assign_function__JointControl__positions,  // assign(index, value) function pointer
    pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__resize_function__JointControl__positions  // resize(index) function pointer
  },
  {
    "hold_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pick_and_place_interfaces__msg__JointControl, hold_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__JointControl_message_members = {
  "pick_and_place_interfaces__msg",  // message namespace
  "JointControl",  // message name
  3,  // number of fields
  sizeof(pick_and_place_interfaces__msg__JointControl),
  false,  // has_any_key_member_
  pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__JointControl_message_member_array,  // message members
  pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__JointControl_init_function,  // function to initialize message memory (memory has to be allocated)
  pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__JointControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__JointControl_message_type_support_handle = {
  0,
  &pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__JointControl_message_members,
  get_message_typesupport_handle_function,
  &pick_and_place_interfaces__msg__JointControl__get_type_hash,
  &pick_and_place_interfaces__msg__JointControl__get_type_description,
  &pick_and_place_interfaces__msg__JointControl__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pick_and_place_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pick_and_place_interfaces, msg, JointControl)() {
  if (!pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__JointControl_message_type_support_handle.typesupport_identifier) {
    pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__JointControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pick_and_place_interfaces__msg__JointControl__rosidl_typesupport_introspection_c__JointControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
