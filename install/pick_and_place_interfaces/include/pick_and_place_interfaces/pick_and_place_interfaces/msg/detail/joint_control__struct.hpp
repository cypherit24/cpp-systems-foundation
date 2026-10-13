// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pick_and_place_interfaces:msg/JointControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pick_and_place_interfaces/msg/joint_control.hpp"


#ifndef PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__STRUCT_HPP_
#define PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pick_and_place_interfaces__msg__JointControl __attribute__((deprecated))
#else
# define DEPRECATED__pick_and_place_interfaces__msg__JointControl __declspec(deprecated)
#endif

namespace pick_and_place_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointControl_
{
  using Type = JointControl_<ContainerAllocator>;

  explicit JointControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hold_time = 0.0;
    }
  }

  explicit JointControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hold_time = 0.0;
    }
  }

  // field types and members
  using _joint_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joint_names_type joint_names;
  using _positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _positions_type positions;
  using _hold_time_type =
    double;
  _hold_time_type hold_time;

  // setters for named parameter idiom
  Type & set__joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joint_names = _arg;
    return *this;
  }
  Type & set__positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->positions = _arg;
    return *this;
  }
  Type & set__hold_time(
    const double & _arg)
  {
    this->hold_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pick_and_place_interfaces::msg::JointControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const pick_and_place_interfaces::msg::JointControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pick_and_place_interfaces::msg::JointControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pick_and_place_interfaces::msg::JointControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pick_and_place_interfaces::msg::JointControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pick_and_place_interfaces::msg::JointControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pick_and_place_interfaces::msg::JointControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pick_and_place_interfaces::msg::JointControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pick_and_place_interfaces::msg::JointControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pick_and_place_interfaces::msg::JointControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pick_and_place_interfaces__msg__JointControl
    std::shared_ptr<pick_and_place_interfaces::msg::JointControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pick_and_place_interfaces__msg__JointControl
    std::shared_ptr<pick_and_place_interfaces::msg::JointControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointControl_ & other) const
  {
    if (this->joint_names != other.joint_names) {
      return false;
    }
    if (this->positions != other.positions) {
      return false;
    }
    if (this->hold_time != other.hold_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointControl_

// alias to use template instance with default allocator
using JointControl =
  pick_and_place_interfaces::msg::JointControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pick_and_place_interfaces

#endif  // PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__STRUCT_HPP_
