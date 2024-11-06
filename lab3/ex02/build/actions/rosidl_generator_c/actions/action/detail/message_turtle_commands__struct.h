// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from actions:action/MessageTurtleCommands.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "actions/action/message_turtle_commands.h"


#ifndef ACTIONS__ACTION__DETAIL__MESSAGE_TURTLE_COMMANDS__STRUCT_H_
#define ACTIONS__ACTION__DETAIL__MESSAGE_TURTLE_COMMANDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MessageTurtleCommands in the package actions.
typedef struct actions__action__MessageTurtleCommands_Goal
{
  /// “forward”,”turn_left”, “turn_right”
  rosidl_runtime_c__String command;
  /// расстояние в метрах которое должна проехать черепаха
  int32_t s;
  /// угол в градусах на который должна повернуть черепаха
  int32_t angle;
} actions__action__MessageTurtleCommands_Goal;

// Struct for a sequence of actions__action__MessageTurtleCommands_Goal.
typedef struct actions__action__MessageTurtleCommands_Goal__Sequence
{
  actions__action__MessageTurtleCommands_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__MessageTurtleCommands_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/MessageTurtleCommands in the package actions.
typedef struct actions__action__MessageTurtleCommands_Result
{
  /// true - черепаха выполнила команду, false - черепаха не смогла выполнить команду, например потому что выполнение команды прервали
  bool result;
} actions__action__MessageTurtleCommands_Result;

// Struct for a sequence of actions__action__MessageTurtleCommands_Result.
typedef struct actions__action__MessageTurtleCommands_Result__Sequence
{
  actions__action__MessageTurtleCommands_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__MessageTurtleCommands_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/MessageTurtleCommands in the package actions.
typedef struct actions__action__MessageTurtleCommands_Feedback
{
  /// пройденное черепахой расстояние в метрах с момента начала выполнения команды
  float odom;
} actions__action__MessageTurtleCommands_Feedback;

// Struct for a sequence of actions__action__MessageTurtleCommands_Feedback.
typedef struct actions__action__MessageTurtleCommands_Feedback__Sequence
{
  actions__action__MessageTurtleCommands_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__MessageTurtleCommands_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "actions/action/detail/message_turtle_commands__struct.h"

/// Struct defined in action/MessageTurtleCommands in the package actions.
typedef struct actions__action__MessageTurtleCommands_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  actions__action__MessageTurtleCommands_Goal goal;
} actions__action__MessageTurtleCommands_SendGoal_Request;

// Struct for a sequence of actions__action__MessageTurtleCommands_SendGoal_Request.
typedef struct actions__action__MessageTurtleCommands_SendGoal_Request__Sequence
{
  actions__action__MessageTurtleCommands_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__MessageTurtleCommands_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MessageTurtleCommands in the package actions.
typedef struct actions__action__MessageTurtleCommands_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} actions__action__MessageTurtleCommands_SendGoal_Response;

// Struct for a sequence of actions__action__MessageTurtleCommands_SendGoal_Response.
typedef struct actions__action__MessageTurtleCommands_SendGoal_Response__Sequence
{
  actions__action__MessageTurtleCommands_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__MessageTurtleCommands_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  actions__action__MessageTurtleCommands_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  actions__action__MessageTurtleCommands_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MessageTurtleCommands in the package actions.
typedef struct actions__action__MessageTurtleCommands_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  actions__action__MessageTurtleCommands_SendGoal_Request__Sequence request;
  actions__action__MessageTurtleCommands_SendGoal_Response__Sequence response;
} actions__action__MessageTurtleCommands_SendGoal_Event;

// Struct for a sequence of actions__action__MessageTurtleCommands_SendGoal_Event.
typedef struct actions__action__MessageTurtleCommands_SendGoal_Event__Sequence
{
  actions__action__MessageTurtleCommands_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__MessageTurtleCommands_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MessageTurtleCommands in the package actions.
typedef struct actions__action__MessageTurtleCommands_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} actions__action__MessageTurtleCommands_GetResult_Request;

// Struct for a sequence of actions__action__MessageTurtleCommands_GetResult_Request.
typedef struct actions__action__MessageTurtleCommands_GetResult_Request__Sequence
{
  actions__action__MessageTurtleCommands_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__MessageTurtleCommands_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "actions/action/detail/message_turtle_commands__struct.h"

/// Struct defined in action/MessageTurtleCommands in the package actions.
typedef struct actions__action__MessageTurtleCommands_GetResult_Response
{
  int8_t status;
  actions__action__MessageTurtleCommands_Result result;
} actions__action__MessageTurtleCommands_GetResult_Response;

// Struct for a sequence of actions__action__MessageTurtleCommands_GetResult_Response.
typedef struct actions__action__MessageTurtleCommands_GetResult_Response__Sequence
{
  actions__action__MessageTurtleCommands_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__MessageTurtleCommands_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  actions__action__MessageTurtleCommands_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  actions__action__MessageTurtleCommands_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MessageTurtleCommands in the package actions.
typedef struct actions__action__MessageTurtleCommands_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  actions__action__MessageTurtleCommands_GetResult_Request__Sequence request;
  actions__action__MessageTurtleCommands_GetResult_Response__Sequence response;
} actions__action__MessageTurtleCommands_GetResult_Event;

// Struct for a sequence of actions__action__MessageTurtleCommands_GetResult_Event.
typedef struct actions__action__MessageTurtleCommands_GetResult_Event__Sequence
{
  actions__action__MessageTurtleCommands_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__MessageTurtleCommands_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "actions/action/detail/message_turtle_commands__struct.h"

/// Struct defined in action/MessageTurtleCommands in the package actions.
typedef struct actions__action__MessageTurtleCommands_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  actions__action__MessageTurtleCommands_Feedback feedback;
} actions__action__MessageTurtleCommands_FeedbackMessage;

// Struct for a sequence of actions__action__MessageTurtleCommands_FeedbackMessage.
typedef struct actions__action__MessageTurtleCommands_FeedbackMessage__Sequence
{
  actions__action__MessageTurtleCommands_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__MessageTurtleCommands_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTIONS__ACTION__DETAIL__MESSAGE_TURTLE_COMMANDS__STRUCT_H_
