// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from pick_and_place_interfaces:msg/JointControl.idl
// generated code does not contain a copyright notice

#ifndef PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pick_and_place_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "pick_and_place_interfaces/msg/detail/joint_control__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace pick_and_place_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pick_and_place_interfaces
cdr_serialize(
  const pick_and_place_interfaces::msg::JointControl & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pick_and_place_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pick_and_place_interfaces::msg::JointControl & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pick_and_place_interfaces
get_serialized_size(
  const pick_and_place_interfaces::msg::JointControl & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pick_and_place_interfaces
max_serialized_size_JointControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pick_and_place_interfaces
cdr_serialize_key(
  const pick_and_place_interfaces::msg::JointControl & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pick_and_place_interfaces
get_serialized_size_key(
  const pick_and_place_interfaces::msg::JointControl & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pick_and_place_interfaces
max_serialized_size_key_JointControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pick_and_place_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pick_and_place_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pick_and_place_interfaces, msg, JointControl)();

#ifdef __cplusplus
}
#endif

#endif  // PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
