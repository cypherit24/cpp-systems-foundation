// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pick_and_place_interfaces:srv/SetGripper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pick_and_place_interfaces/srv/set_gripper.hpp"


#ifndef PICK_AND_PLACE_INTERFACES__SRV__DETAIL__SET_GRIPPER__BUILDER_HPP_
#define PICK_AND_PLACE_INTERFACES__SRV__DETAIL__SET_GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pick_and_place_interfaces/srv/detail/set_gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pick_and_place_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetGripper_Request_max_effort
{
public:
  explicit Init_SetGripper_Request_max_effort(::pick_and_place_interfaces::srv::SetGripper_Request & msg)
  : msg_(msg)
  {}
  ::pick_and_place_interfaces::srv::SetGripper_Request max_effort(::pick_and_place_interfaces::srv::SetGripper_Request::_max_effort_type arg)
  {
    msg_.max_effort = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pick_and_place_interfaces::srv::SetGripper_Request msg_;
};

class Init_SetGripper_Request_position
{
public:
  Init_SetGripper_Request_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGripper_Request_max_effort position(::pick_and_place_interfaces::srv::SetGripper_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SetGripper_Request_max_effort(msg_);
  }

private:
  ::pick_and_place_interfaces::srv::SetGripper_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pick_and_place_interfaces::srv::SetGripper_Request>()
{
  return pick_and_place_interfaces::srv::builder::Init_SetGripper_Request_position();
}

}  // namespace pick_and_place_interfaces


namespace pick_and_place_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetGripper_Response_message
{
public:
  explicit Init_SetGripper_Response_message(::pick_and_place_interfaces::srv::SetGripper_Response & msg)
  : msg_(msg)
  {}
  ::pick_and_place_interfaces::srv::SetGripper_Response message(::pick_and_place_interfaces::srv::SetGripper_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pick_and_place_interfaces::srv::SetGripper_Response msg_;
};

class Init_SetGripper_Response_success
{
public:
  Init_SetGripper_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGripper_Response_message success(::pick_and_place_interfaces::srv::SetGripper_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetGripper_Response_message(msg_);
  }

private:
  ::pick_and_place_interfaces::srv::SetGripper_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pick_and_place_interfaces::srv::SetGripper_Response>()
{
  return pick_and_place_interfaces::srv::builder::Init_SetGripper_Response_success();
}

}  // namespace pick_and_place_interfaces


namespace pick_and_place_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetGripper_Event_response
{
public:
  explicit Init_SetGripper_Event_response(::pick_and_place_interfaces::srv::SetGripper_Event & msg)
  : msg_(msg)
  {}
  ::pick_and_place_interfaces::srv::SetGripper_Event response(::pick_and_place_interfaces::srv::SetGripper_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pick_and_place_interfaces::srv::SetGripper_Event msg_;
};

class Init_SetGripper_Event_request
{
public:
  explicit Init_SetGripper_Event_request(::pick_and_place_interfaces::srv::SetGripper_Event & msg)
  : msg_(msg)
  {}
  Init_SetGripper_Event_response request(::pick_and_place_interfaces::srv::SetGripper_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetGripper_Event_response(msg_);
  }

private:
  ::pick_and_place_interfaces::srv::SetGripper_Event msg_;
};

class Init_SetGripper_Event_info
{
public:
  Init_SetGripper_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGripper_Event_request info(::pick_and_place_interfaces::srv::SetGripper_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetGripper_Event_request(msg_);
  }

private:
  ::pick_and_place_interfaces::srv::SetGripper_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pick_and_place_interfaces::srv::SetGripper_Event>()
{
  return pick_and_place_interfaces::srv::builder::Init_SetGripper_Event_info();
}

}  // namespace pick_and_place_interfaces

#endif  // PICK_AND_PLACE_INTERFACES__SRV__DETAIL__SET_GRIPPER__BUILDER_HPP_
