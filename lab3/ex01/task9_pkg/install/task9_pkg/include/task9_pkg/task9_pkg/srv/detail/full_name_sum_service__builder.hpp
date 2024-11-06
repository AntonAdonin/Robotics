// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task9_pkg:srv/FullNameSumService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "task9_pkg/srv/full_name_sum_service.hpp"


#ifndef TASK9_PKG__SRV__DETAIL__FULL_NAME_SUM_SERVICE__BUILDER_HPP_
#define TASK9_PKG__SRV__DETAIL__FULL_NAME_SUM_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "task9_pkg/srv/detail/full_name_sum_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace task9_pkg
{

namespace srv
{

namespace builder
{

class Init_FullNameSumService_Request_first_name
{
public:
  explicit Init_FullNameSumService_Request_first_name(::task9_pkg::srv::FullNameSumService_Request & msg)
  : msg_(msg)
  {}
  ::task9_pkg::srv::FullNameSumService_Request first_name(::task9_pkg::srv::FullNameSumService_Request::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task9_pkg::srv::FullNameSumService_Request msg_;
};

class Init_FullNameSumService_Request_name
{
public:
  explicit Init_FullNameSumService_Request_name(::task9_pkg::srv::FullNameSumService_Request & msg)
  : msg_(msg)
  {}
  Init_FullNameSumService_Request_first_name name(::task9_pkg::srv::FullNameSumService_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_FullNameSumService_Request_first_name(msg_);
  }

private:
  ::task9_pkg::srv::FullNameSumService_Request msg_;
};

class Init_FullNameSumService_Request_last_name
{
public:
  Init_FullNameSumService_Request_last_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FullNameSumService_Request_name last_name(::task9_pkg::srv::FullNameSumService_Request::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_FullNameSumService_Request_name(msg_);
  }

private:
  ::task9_pkg::srv::FullNameSumService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::task9_pkg::srv::FullNameSumService_Request>()
{
  return task9_pkg::srv::builder::Init_FullNameSumService_Request_last_name();
}

}  // namespace task9_pkg


namespace task9_pkg
{

namespace srv
{

namespace builder
{

class Init_FullNameSumService_Response_full_name
{
public:
  Init_FullNameSumService_Response_full_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::task9_pkg::srv::FullNameSumService_Response full_name(::task9_pkg::srv::FullNameSumService_Response::_full_name_type arg)
  {
    msg_.full_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task9_pkg::srv::FullNameSumService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::task9_pkg::srv::FullNameSumService_Response>()
{
  return task9_pkg::srv::builder::Init_FullNameSumService_Response_full_name();
}

}  // namespace task9_pkg


namespace task9_pkg
{

namespace srv
{

namespace builder
{

class Init_FullNameSumService_Event_response
{
public:
  explicit Init_FullNameSumService_Event_response(::task9_pkg::srv::FullNameSumService_Event & msg)
  : msg_(msg)
  {}
  ::task9_pkg::srv::FullNameSumService_Event response(::task9_pkg::srv::FullNameSumService_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task9_pkg::srv::FullNameSumService_Event msg_;
};

class Init_FullNameSumService_Event_request
{
public:
  explicit Init_FullNameSumService_Event_request(::task9_pkg::srv::FullNameSumService_Event & msg)
  : msg_(msg)
  {}
  Init_FullNameSumService_Event_response request(::task9_pkg::srv::FullNameSumService_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_FullNameSumService_Event_response(msg_);
  }

private:
  ::task9_pkg::srv::FullNameSumService_Event msg_;
};

class Init_FullNameSumService_Event_info
{
public:
  Init_FullNameSumService_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FullNameSumService_Event_request info(::task9_pkg::srv::FullNameSumService_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_FullNameSumService_Event_request(msg_);
  }

private:
  ::task9_pkg::srv::FullNameSumService_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::task9_pkg::srv::FullNameSumService_Event>()
{
  return task9_pkg::srv::builder::Init_FullNameSumService_Event_info();
}

}  // namespace task9_pkg

#endif  // TASK9_PKG__SRV__DETAIL__FULL_NAME_SUM_SERVICE__BUILDER_HPP_
