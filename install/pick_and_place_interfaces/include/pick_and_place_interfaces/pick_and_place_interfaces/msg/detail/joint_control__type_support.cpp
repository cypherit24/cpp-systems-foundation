// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pick_and_place_interfaces:msg/JointControl.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pick_and_place_interfaces/msg/detail/joint_control__functions.h"
#include "pick_and_place_interfaces/msg/detail/joint_control__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pick_and_place_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointControl_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pick_and_place_interfaces::msg::JointControl(_init);
}

void JointControl_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pick_and_place_interfaces::msg::JointControl *>(message_memory);
  typed_message->~JointControl();
}

size_t size_function__JointControl__joint_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointControl__joint_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__JointControl__joint_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointControl__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__JointControl__joint_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__JointControl__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__JointControl__joint_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__JointControl__joint_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointControl__positions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointControl__positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointControl__positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointControl__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointControl__positions(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointControl__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointControl__positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointControl__positions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointControl_message_member_array[3] = {
  {
    "joint_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pick_and_place_interfaces::msg::JointControl, joint_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointControl__joint_names,  // size() function pointer
    get_const_function__JointControl__joint_names,  // get_const(index) function pointer
    get_function__JointControl__joint_names,  // get(index) function pointer
    fetch_function__JointControl__joint_names,  // fetch(index, &value) function pointer
    assign_function__JointControl__joint_names,  // assign(index, value) function pointer
    resize_function__JointControl__joint_names  // resize(index) function pointer
  },
  {
    "positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pick_and_place_interfaces::msg::JointControl, positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointControl__positions,  // size() function pointer
    get_const_function__JointControl__positions,  // get_const(index) function pointer
    get_function__JointControl__positions,  // get(index) function pointer
    fetch_function__JointControl__positions,  // fetch(index, &value) function pointer
    assign_function__JointControl__positions,  // assign(index, value) function pointer
    resize_function__JointControl__positions  // resize(index) function pointer
  },
  {
    "hold_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pick_and_place_interfaces::msg::JointControl, hold_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointControl_message_members = {
  "pick_and_place_interfaces::msg",  // message namespace
  "JointControl",  // message name
  3,  // number of fields
  sizeof(pick_and_place_interfaces::msg::JointControl),
  false,  // has_any_key_member_
  JointControl_message_member_array,  // message members
  JointControl_init_function,  // function to initialize message memory (memory has to be allocated)
  JointControl_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointControl_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointControl_message_members,
  get_message_typesupport_handle_function,
  &pick_and_place_interfaces__msg__JointControl__get_type_hash,
  &pick_and_place_interfaces__msg__JointControl__get_type_description,
  &pick_and_place_interfaces__msg__JointControl__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pick_and_place_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pick_and_place_interfaces::msg::JointControl>()
{
  return &::pick_and_place_interfaces::msg::rosidl_typesupport_introspection_cpp::JointControl_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pick_and_place_interfaces, msg, JointControl)() {
  return &::pick_and_place_interfaces::msg::rosidl_typesupport_introspection_cpp::JointControl_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
