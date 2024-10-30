// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from task9_pkg:msg/FullNameMessage.idl
// generated code does not contain a copyright notice

#include "task9_pkg/msg/detail/full_name_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_task9_pkg
const rosidl_type_hash_t *
task9_pkg__msg__FullNameMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd2, 0x71, 0x5e, 0x43, 0x7c, 0x69, 0x44, 0x57,
      0x23, 0x42, 0x64, 0xe4, 0xc2, 0xa0, 0xcb, 0x56,
      0x79, 0xf2, 0x34, 0xef, 0xe7, 0xb4, 0x08, 0x26,
      0x84, 0xb7, 0x34, 0xb6, 0x4b, 0x70, 0x69, 0x41,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char task9_pkg__msg__FullNameMessage__TYPE_NAME[] = "task9_pkg/msg/FullNameMessage";

// Define type names, field names, and default values
static char task9_pkg__msg__FullNameMessage__FIELD_NAME__last_name[] = "last_name";
static char task9_pkg__msg__FullNameMessage__FIELD_NAME__name[] = "name";
static char task9_pkg__msg__FullNameMessage__FIELD_NAME__first_name[] = "first_name";

static rosidl_runtime_c__type_description__Field task9_pkg__msg__FullNameMessage__FIELDS[] = {
  {
    {task9_pkg__msg__FullNameMessage__FIELD_NAME__last_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {task9_pkg__msg__FullNameMessage__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {task9_pkg__msg__FullNameMessage__FIELD_NAME__first_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
task9_pkg__msg__FullNameMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {task9_pkg__msg__FullNameMessage__TYPE_NAME, 29, 29},
      {task9_pkg__msg__FullNameMessage__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string last_name\n"
  "string name\n"
  "string first_name\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
task9_pkg__msg__FullNameMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {task9_pkg__msg__FullNameMessage__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 48, 48},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
task9_pkg__msg__FullNameMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *task9_pkg__msg__FullNameMessage__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
