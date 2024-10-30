// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from task9_pkg:srv/FullNameSumService.idl
// generated code does not contain a copyright notice

#include "task9_pkg/srv/detail/full_name_sum_service__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_task9_pkg
const rosidl_type_hash_t *
task9_pkg__srv__FullNameSumService__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x49, 0x54, 0xe9, 0x92, 0x12, 0x0f, 0xb6, 0xb2,
      0x20, 0x54, 0xab, 0x25, 0x58, 0xd8, 0x93, 0x46,
      0xee, 0xb0, 0x9e, 0xb0, 0xba, 0xc7, 0xa7, 0x54,
      0xd6, 0x0b, 0x23, 0x3e, 0xad, 0xf2, 0xaa, 0xfa,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_task9_pkg
const rosidl_type_hash_t *
task9_pkg__srv__FullNameSumService_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf0, 0xa4, 0x02, 0x9d, 0x3f, 0x6f, 0x1d, 0xeb,
      0xa7, 0xbb, 0x61, 0x19, 0x83, 0xf9, 0x1d, 0x9a,
      0x8f, 0xa9, 0xbf, 0xcb, 0x1f, 0x4f, 0x72, 0xb6,
      0xe6, 0xfc, 0xd7, 0x42, 0x6d, 0xbb, 0x4e, 0x02,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_task9_pkg
const rosidl_type_hash_t *
task9_pkg__srv__FullNameSumService_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x31, 0xd6, 0xdb, 0xbe, 0x23, 0xd3, 0xc6, 0xd7,
      0x7d, 0xf8, 0xd6, 0xac, 0xca, 0x7f, 0x78, 0xd7,
      0x8e, 0x0c, 0x78, 0x47, 0xdb, 0x29, 0x44, 0xeb,
      0x64, 0x37, 0xd9, 0x2b, 0x62, 0x49, 0xfc, 0x4c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_task9_pkg
const rosidl_type_hash_t *
task9_pkg__srv__FullNameSumService_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0x64, 0xb8, 0x26, 0x9f, 0xd9, 0x4c, 0xd9,
      0x5b, 0xc9, 0xff, 0xd7, 0x2d, 0xc6, 0x32, 0xa5,
      0xeb, 0xba, 0x47, 0xb0, 0x26, 0x63, 0x94, 0xbf,
      0xf0, 0xc1, 0x12, 0x1c, 0x33, 0x2d, 0x19, 0x8f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char task9_pkg__srv__FullNameSumService__TYPE_NAME[] = "task9_pkg/srv/FullNameSumService";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char task9_pkg__srv__FullNameSumService_Event__TYPE_NAME[] = "task9_pkg/srv/FullNameSumService_Event";
static char task9_pkg__srv__FullNameSumService_Request__TYPE_NAME[] = "task9_pkg/srv/FullNameSumService_Request";
static char task9_pkg__srv__FullNameSumService_Response__TYPE_NAME[] = "task9_pkg/srv/FullNameSumService_Response";

// Define type names, field names, and default values
static char task9_pkg__srv__FullNameSumService__FIELD_NAME__request_message[] = "request_message";
static char task9_pkg__srv__FullNameSumService__FIELD_NAME__response_message[] = "response_message";
static char task9_pkg__srv__FullNameSumService__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field task9_pkg__srv__FullNameSumService__FIELDS[] = {
  {
    {task9_pkg__srv__FullNameSumService__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {task9_pkg__srv__FullNameSumService_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {task9_pkg__srv__FullNameSumService__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {task9_pkg__srv__FullNameSumService_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {task9_pkg__srv__FullNameSumService__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {task9_pkg__srv__FullNameSumService_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription task9_pkg__srv__FullNameSumService__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {task9_pkg__srv__FullNameSumService_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {task9_pkg__srv__FullNameSumService_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {task9_pkg__srv__FullNameSumService_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
task9_pkg__srv__FullNameSumService__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {task9_pkg__srv__FullNameSumService__TYPE_NAME, 32, 32},
      {task9_pkg__srv__FullNameSumService__FIELDS, 3, 3},
    },
    {task9_pkg__srv__FullNameSumService__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = task9_pkg__srv__FullNameSumService_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = task9_pkg__srv__FullNameSumService_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = task9_pkg__srv__FullNameSumService_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char task9_pkg__srv__FullNameSumService_Request__FIELD_NAME__last_name[] = "last_name";
static char task9_pkg__srv__FullNameSumService_Request__FIELD_NAME__name[] = "name";
static char task9_pkg__srv__FullNameSumService_Request__FIELD_NAME__first_name[] = "first_name";

static rosidl_runtime_c__type_description__Field task9_pkg__srv__FullNameSumService_Request__FIELDS[] = {
  {
    {task9_pkg__srv__FullNameSumService_Request__FIELD_NAME__last_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {task9_pkg__srv__FullNameSumService_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {task9_pkg__srv__FullNameSumService_Request__FIELD_NAME__first_name, 10, 10},
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
task9_pkg__srv__FullNameSumService_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {task9_pkg__srv__FullNameSumService_Request__TYPE_NAME, 40, 40},
      {task9_pkg__srv__FullNameSumService_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char task9_pkg__srv__FullNameSumService_Response__FIELD_NAME__full_name[] = "full_name";

static rosidl_runtime_c__type_description__Field task9_pkg__srv__FullNameSumService_Response__FIELDS[] = {
  {
    {task9_pkg__srv__FullNameSumService_Response__FIELD_NAME__full_name, 9, 9},
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
task9_pkg__srv__FullNameSumService_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {task9_pkg__srv__FullNameSumService_Response__TYPE_NAME, 41, 41},
      {task9_pkg__srv__FullNameSumService_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char task9_pkg__srv__FullNameSumService_Event__FIELD_NAME__info[] = "info";
static char task9_pkg__srv__FullNameSumService_Event__FIELD_NAME__request[] = "request";
static char task9_pkg__srv__FullNameSumService_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field task9_pkg__srv__FullNameSumService_Event__FIELDS[] = {
  {
    {task9_pkg__srv__FullNameSumService_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {task9_pkg__srv__FullNameSumService_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {task9_pkg__srv__FullNameSumService_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {task9_pkg__srv__FullNameSumService_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {task9_pkg__srv__FullNameSumService_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription task9_pkg__srv__FullNameSumService_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {task9_pkg__srv__FullNameSumService_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {task9_pkg__srv__FullNameSumService_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
task9_pkg__srv__FullNameSumService_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {task9_pkg__srv__FullNameSumService_Event__TYPE_NAME, 38, 38},
      {task9_pkg__srv__FullNameSumService_Event__FIELDS, 3, 3},
    },
    {task9_pkg__srv__FullNameSumService_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = task9_pkg__srv__FullNameSumService_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = task9_pkg__srv__FullNameSumService_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string last_name\n"
  "string name\n"
  "string first_name\n"
  "---\n"
  "string full_name";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
task9_pkg__srv__FullNameSumService__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {task9_pkg__srv__FullNameSumService__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 68, 68},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
task9_pkg__srv__FullNameSumService_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {task9_pkg__srv__FullNameSumService_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
task9_pkg__srv__FullNameSumService_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {task9_pkg__srv__FullNameSumService_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
task9_pkg__srv__FullNameSumService_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {task9_pkg__srv__FullNameSumService_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
task9_pkg__srv__FullNameSumService__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *task9_pkg__srv__FullNameSumService__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *task9_pkg__srv__FullNameSumService_Event__get_individual_type_description_source(NULL);
    sources[4] = *task9_pkg__srv__FullNameSumService_Request__get_individual_type_description_source(NULL);
    sources[5] = *task9_pkg__srv__FullNameSumService_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
task9_pkg__srv__FullNameSumService_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *task9_pkg__srv__FullNameSumService_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
task9_pkg__srv__FullNameSumService_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *task9_pkg__srv__FullNameSumService_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
task9_pkg__srv__FullNameSumService_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *task9_pkg__srv__FullNameSumService_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *task9_pkg__srv__FullNameSumService_Request__get_individual_type_description_source(NULL);
    sources[4] = *task9_pkg__srv__FullNameSumService_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
