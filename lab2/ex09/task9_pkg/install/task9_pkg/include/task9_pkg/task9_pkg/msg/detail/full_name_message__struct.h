// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from task9_pkg:msg/FullNameMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "task9_pkg/msg/full_name_message.h"


#ifndef TASK9_PKG__MSG__DETAIL__FULL_NAME_MESSAGE__STRUCT_H_
#define TASK9_PKG__MSG__DETAIL__FULL_NAME_MESSAGE__STRUCT_H_

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

/// Struct defined in msg/FullNameMessage in the package task9_pkg.
typedef struct task9_pkg__msg__FullNameMessage
{
  rosidl_runtime_c__String last_name;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String first_name;
} task9_pkg__msg__FullNameMessage;

// Struct for a sequence of task9_pkg__msg__FullNameMessage.
typedef struct task9_pkg__msg__FullNameMessage__Sequence
{
  task9_pkg__msg__FullNameMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task9_pkg__msg__FullNameMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TASK9_PKG__MSG__DETAIL__FULL_NAME_MESSAGE__STRUCT_H_
