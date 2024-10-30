// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from task9_pkg:msg/FullNameMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "task9_pkg/msg/full_name_message.hpp"


#ifndef TASK9_PKG__MSG__DETAIL__FULL_NAME_MESSAGE__TRAITS_HPP_
#define TASK9_PKG__MSG__DETAIL__FULL_NAME_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "task9_pkg/msg/detail/full_name_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace task9_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const FullNameMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: last_name
  {
    out << "last_name: ";
    rosidl_generator_traits::value_to_yaml(msg.last_name, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: first_name
  {
    out << "first_name: ";
    rosidl_generator_traits::value_to_yaml(msg.first_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FullNameMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: last_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_name: ";
    rosidl_generator_traits::value_to_yaml(msg.last_name, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: first_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_name: ";
    rosidl_generator_traits::value_to_yaml(msg.first_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FullNameMessage & msg, bool use_flow_style = false)
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

}  // namespace task9_pkg

namespace rosidl_generator_traits
{

[[deprecated("use task9_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task9_pkg::msg::FullNameMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  task9_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task9_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const task9_pkg::msg::FullNameMessage & msg)
{
  return task9_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<task9_pkg::msg::FullNameMessage>()
{
  return "task9_pkg::msg::FullNameMessage";
}

template<>
inline const char * name<task9_pkg::msg::FullNameMessage>()
{
  return "task9_pkg/msg/FullNameMessage";
}

template<>
struct has_fixed_size<task9_pkg::msg::FullNameMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<task9_pkg::msg::FullNameMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<task9_pkg::msg::FullNameMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TASK9_PKG__MSG__DETAIL__FULL_NAME_MESSAGE__TRAITS_HPP_
