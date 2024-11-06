// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from task9_pkg:msg/FullNameMessage.idl
// generated code does not contain a copyright notice
#ifndef TASK9_PKG__MSG__DETAIL__FULL_NAME_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define TASK9_PKG__MSG__DETAIL__FULL_NAME_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "task9_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "task9_pkg/msg/detail/full_name_message__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_task9_pkg
bool cdr_serialize_task9_pkg__msg__FullNameMessage(
  const task9_pkg__msg__FullNameMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_task9_pkg
bool cdr_deserialize_task9_pkg__msg__FullNameMessage(
  eprosima::fastcdr::Cdr &,
  task9_pkg__msg__FullNameMessage * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_task9_pkg
size_t get_serialized_size_task9_pkg__msg__FullNameMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_task9_pkg
size_t max_serialized_size_task9_pkg__msg__FullNameMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_task9_pkg
bool cdr_serialize_key_task9_pkg__msg__FullNameMessage(
  const task9_pkg__msg__FullNameMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_task9_pkg
size_t get_serialized_size_key_task9_pkg__msg__FullNameMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_task9_pkg
size_t max_serialized_size_key_task9_pkg__msg__FullNameMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_task9_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, task9_pkg, msg, FullNameMessage)();

#ifdef __cplusplus
}
#endif

#endif  // TASK9_PKG__MSG__DETAIL__FULL_NAME_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
