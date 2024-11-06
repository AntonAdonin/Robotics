// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from task9_pkg:srv/FullNameSumService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "task9_pkg/srv/full_name_sum_service.hpp"


#ifndef TASK9_PKG__SRV__DETAIL__FULL_NAME_SUM_SERVICE__TRAITS_HPP_
#define TASK9_PKG__SRV__DETAIL__FULL_NAME_SUM_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "task9_pkg/srv/detail/full_name_sum_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace task9_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const FullNameSumService_Request & msg,
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
  const FullNameSumService_Request & msg,
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

inline std::string to_yaml(const FullNameSumService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace task9_pkg

namespace rosidl_generator_traits
{

[[deprecated("use task9_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task9_pkg::srv::FullNameSumService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  task9_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task9_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const task9_pkg::srv::FullNameSumService_Request & msg)
{
  return task9_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<task9_pkg::srv::FullNameSumService_Request>()
{
  return "task9_pkg::srv::FullNameSumService_Request";
}

template<>
inline const char * name<task9_pkg::srv::FullNameSumService_Request>()
{
  return "task9_pkg/srv/FullNameSumService_Request";
}

template<>
struct has_fixed_size<task9_pkg::srv::FullNameSumService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<task9_pkg::srv::FullNameSumService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<task9_pkg::srv::FullNameSumService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace task9_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const FullNameSumService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: full_name
  {
    out << "full_name: ";
    rosidl_generator_traits::value_to_yaml(msg.full_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FullNameSumService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: full_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_name: ";
    rosidl_generator_traits::value_to_yaml(msg.full_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FullNameSumService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace task9_pkg

namespace rosidl_generator_traits
{

[[deprecated("use task9_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task9_pkg::srv::FullNameSumService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  task9_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task9_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const task9_pkg::srv::FullNameSumService_Response & msg)
{
  return task9_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<task9_pkg::srv::FullNameSumService_Response>()
{
  return "task9_pkg::srv::FullNameSumService_Response";
}

template<>
inline const char * name<task9_pkg::srv::FullNameSumService_Response>()
{
  return "task9_pkg/srv/FullNameSumService_Response";
}

template<>
struct has_fixed_size<task9_pkg::srv::FullNameSumService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<task9_pkg::srv::FullNameSumService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<task9_pkg::srv::FullNameSumService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace task9_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const FullNameSumService_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FullNameSumService_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FullNameSumService_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace task9_pkg

namespace rosidl_generator_traits
{

[[deprecated("use task9_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task9_pkg::srv::FullNameSumService_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  task9_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task9_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const task9_pkg::srv::FullNameSumService_Event & msg)
{
  return task9_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<task9_pkg::srv::FullNameSumService_Event>()
{
  return "task9_pkg::srv::FullNameSumService_Event";
}

template<>
inline const char * name<task9_pkg::srv::FullNameSumService_Event>()
{
  return "task9_pkg/srv/FullNameSumService_Event";
}

template<>
struct has_fixed_size<task9_pkg::srv::FullNameSumService_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<task9_pkg::srv::FullNameSumService_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<task9_pkg::srv::FullNameSumService_Request>::value && has_bounded_size<task9_pkg::srv::FullNameSumService_Response>::value> {};

template<>
struct is_message<task9_pkg::srv::FullNameSumService_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<task9_pkg::srv::FullNameSumService>()
{
  return "task9_pkg::srv::FullNameSumService";
}

template<>
inline const char * name<task9_pkg::srv::FullNameSumService>()
{
  return "task9_pkg/srv/FullNameSumService";
}

template<>
struct has_fixed_size<task9_pkg::srv::FullNameSumService>
  : std::integral_constant<
    bool,
    has_fixed_size<task9_pkg::srv::FullNameSumService_Request>::value &&
    has_fixed_size<task9_pkg::srv::FullNameSumService_Response>::value
  >
{
};

template<>
struct has_bounded_size<task9_pkg::srv::FullNameSumService>
  : std::integral_constant<
    bool,
    has_bounded_size<task9_pkg::srv::FullNameSumService_Request>::value &&
    has_bounded_size<task9_pkg::srv::FullNameSumService_Response>::value
  >
{
};

template<>
struct is_service<task9_pkg::srv::FullNameSumService>
  : std::true_type
{
};

template<>
struct is_service_request<task9_pkg::srv::FullNameSumService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<task9_pkg::srv::FullNameSumService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TASK9_PKG__SRV__DETAIL__FULL_NAME_SUM_SERVICE__TRAITS_HPP_
