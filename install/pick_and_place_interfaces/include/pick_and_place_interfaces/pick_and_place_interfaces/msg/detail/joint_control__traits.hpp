// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pick_and_place_interfaces:msg/JointControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pick_and_place_interfaces/msg/joint_control.hpp"


#ifndef PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__TRAITS_HPP_
#define PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pick_and_place_interfaces/msg/detail/joint_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pick_and_place_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_names
  {
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []";
    } else {
      out << "joint_names: [";
      size_t pending_items = msg.joint_names.size();
      for (auto item : msg.joint_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: positions
  {
    if (msg.positions.size() == 0) {
      out << "positions: []";
    } else {
      out << "positions: [";
      size_t pending_items = msg.positions.size();
      for (auto item : msg.positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hold_time
  {
    out << "hold_time: ";
    rosidl_generator_traits::value_to_yaml(msg.hold_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []\n";
    } else {
      out << "joint_names:\n";
      for (auto item : msg.joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positions.size() == 0) {
      out << "positions: []\n";
    } else {
      out << "positions:\n";
      for (auto item : msg.positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: hold_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hold_time: ";
    rosidl_generator_traits::value_to_yaml(msg.hold_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointControl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace pick_and_place_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pick_and_place_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pick_and_place_interfaces::msg::JointControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  pick_and_place_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pick_and_place_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const pick_and_place_interfaces::msg::JointControl & msg)
{
  return pick_and_place_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pick_and_place_interfaces::msg::JointControl>()
{
  return "pick_and_place_interfaces::msg::JointControl";
}

template<>
inline const char * name<pick_and_place_interfaces::msg::JointControl>()
{
  return "pick_and_place_interfaces/msg/JointControl";
}

template<>
struct has_fixed_size<pick_and_place_interfaces::msg::JointControl>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pick_and_place_interfaces::msg::JointControl>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pick_and_place_interfaces::msg::JointControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PICK_AND_PLACE_INTERFACES__MSG__DETAIL__JOINT_CONTROL__TRAITS_HPP_
