// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from task9_pkg:srv/FullNameSumService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "task9_pkg/srv/full_name_sum_service.h"


#ifndef TASK9_PKG__SRV__DETAIL__FULL_NAME_SUM_SERVICE__STRUCT_H_
#define TASK9_PKG__SRV__DETAIL__FULL_NAME_SUM_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'last_name'
// Member 'name'
// Member 'first_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FullNameSumService in the package task9_pkg.
typedef struct task9_pkg__srv__FullNameSumService_Request
{
  rosidl_runtime_c__String last_name;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String first_name;
} task9_pkg__srv__FullNameSumService_Request;

// Struct for a sequence of task9_pkg__srv__FullNameSumService_Request.
typedef struct task9_pkg__srv__FullNameSumService_Request__Sequence
{
  task9_pkg__srv__FullNameSumService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task9_pkg__srv__FullNameSumService_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'full_name'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FullNameSumService in the package task9_pkg.
typedef struct task9_pkg__srv__FullNameSumService_Response
{
  rosidl_runtime_c__String full_name;
} task9_pkg__srv__FullNameSumService_Response;

// Struct for a sequence of task9_pkg__srv__FullNameSumService_Response.
typedef struct task9_pkg__srv__FullNameSumService_Response__Sequence
{
  task9_pkg__srv__FullNameSumService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task9_pkg__srv__FullNameSumService_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  task9_pkg__srv__FullNameSumService_Event__request__MAX_SIZE = 1
};
// response
enum
{
  task9_pkg__srv__FullNameSumService_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/FullNameSumService in the package task9_pkg.
typedef struct task9_pkg__srv__FullNameSumService_Event
{
  service_msgs__msg__ServiceEventInfo info;
  task9_pkg__srv__FullNameSumService_Request__Sequence request;
  task9_pkg__srv__FullNameSumService_Response__Sequence response;
} task9_pkg__srv__FullNameSumService_Event;

// Struct for a sequence of task9_pkg__srv__FullNameSumService_Event.
typedef struct task9_pkg__srv__FullNameSumService_Event__Sequence
{
  task9_pkg__srv__FullNameSumService_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task9_pkg__srv__FullNameSumService_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TASK9_PKG__SRV__DETAIL__FULL_NAME_SUM_SERVICE__STRUCT_H_
