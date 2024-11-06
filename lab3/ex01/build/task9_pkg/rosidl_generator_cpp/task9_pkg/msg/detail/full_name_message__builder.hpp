// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task9_pkg:msg/FullNameMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "task9_pkg/msg/full_name_message.hpp"


#ifndef TASK9_PKG__MSG__DETAIL__FULL_NAME_MESSAGE__BUILDER_HPP_
#define TASK9_PKG__MSG__DETAIL__FULL_NAME_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "task9_pkg/msg/detail/full_name_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace task9_pkg
{

namespace msg
{

namespace builder
{

class Init_FullNameMessage_first_name
{
public:
  explicit Init_FullNameMessage_first_name(::task9_pkg::msg::FullNameMessage & msg)
  : msg_(msg)
  {}
  ::task9_pkg::msg::FullNameMessage first_name(::task9_pkg::msg::FullNameMessage::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task9_pkg::msg::FullNameMessage msg_;
};

class Init_FullNameMessage_name
{
public:
  explicit Init_FullNameMessage_name(::task9_pkg::msg::FullNameMessage & msg)
  : msg_(msg)
  {}
  Init_FullNameMessage_first_name name(::task9_pkg::msg::FullNameMessage::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_FullNameMessage_first_name(msg_);
  }

private:
  ::task9_pkg::msg::FullNameMessage msg_;
};

class Init_FullNameMessage_last_name
{
public:
  Init_FullNameMessage_last_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FullNameMessage_name last_name(::task9_pkg::msg::FullNameMessage::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_FullNameMessage_name(msg_);
  }

private:
  ::task9_pkg::msg::FullNameMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::task9_pkg::msg::FullNameMessage>()
{
  return task9_pkg::msg::builder::Init_FullNameMessage_last_name();
}

}  // namespace task9_pkg

#endif  // TASK9_PKG__MSG__DETAIL__FULL_NAME_MESSAGE__BUILDER_HPP_
