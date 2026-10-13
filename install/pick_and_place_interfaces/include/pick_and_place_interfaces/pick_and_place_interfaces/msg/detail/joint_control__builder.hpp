// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pick_and_place_interfaces:msg/JointControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pick_and_place_interfaces/msg/joint_control.hpp"


#ifndef PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__BUILDER_HPP_
#define PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pick_and_place_interfaces/msg/detail/joint_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pick_and_place_interfaces
{

namespace msg
{

namespace builder
{

class Init_JointControl_hold_time
{
public:
  explicit Init_JointControl_hold_time(::pick_and_place_interfaces::msg::JointControl & msg)
  : msg_(msg)
  {}
  ::pick_and_place_interfaces::msg::JointControl hold_time(::pick_and_place_interfaces::msg::JointControl::_hold_time_type arg)
  {
    msg_.hold_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pick_and_place_interfaces::msg::JointControl msg_;
};

class Init_JointControl_positions
{
public:
  explicit Init_JointControl_positions(::pick_and_place_interfaces::msg::JointControl & msg)
  : msg_(msg)
  {}
  Init_JointControl_hold_time positions(::pick_and_place_interfaces::msg::JointControl::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_JointControl_hold_time(msg_);
  }

private:
  ::pick_and_place_interfaces::msg::JointControl msg_;
};

class Init_JointControl_joint_names
{
public:
  Init_JointControl_joint_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointControl_positions joint_names(::pick_and_place_interfaces::msg::JointControl::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_JointControl_positions(msg_);
  }

private:
  ::pick_and_place_interfaces::msg::JointControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pick_and_place_interfaces::msg::JointControl>()
{
  return pick_and_place_interfaces::msg::builder::Init_JointControl_joint_names();
}

}  // namespace pick_and_place_interfaces

#endif  // PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__BUILDER_HPP_
