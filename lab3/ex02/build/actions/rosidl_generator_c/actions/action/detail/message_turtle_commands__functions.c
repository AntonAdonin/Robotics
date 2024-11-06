// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from actions:action/MessageTurtleCommands.idl
// generated code does not contain a copyright notice
#include "actions/action/detail/message_turtle_commands__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
actions__action__MessageTurtleCommands_Goal__init(actions__action__MessageTurtleCommands_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    actions__action__MessageTurtleCommands_Goal__fini(msg);
    return false;
  }
  // s
  // angle
  return true;
}

void
actions__action__MessageTurtleCommands_Goal__fini(actions__action__MessageTurtleCommands_Goal * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // s
  // angle
}

bool
actions__action__MessageTurtleCommands_Goal__are_equal(const actions__action__MessageTurtleCommands_Goal * lhs, const actions__action__MessageTurtleCommands_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // s
  if (lhs->s != rhs->s) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_Goal__copy(
  const actions__action__MessageTurtleCommands_Goal * input,
  actions__action__MessageTurtleCommands_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // s
  output->s = input->s;
  // angle
  output->angle = input->angle;
  return true;
}

actions__action__MessageTurtleCommands_Goal *
actions__action__MessageTurtleCommands_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_Goal * msg = (actions__action__MessageTurtleCommands_Goal *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(actions__action__MessageTurtleCommands_Goal));
  bool success = actions__action__MessageTurtleCommands_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
actions__action__MessageTurtleCommands_Goal__destroy(actions__action__MessageTurtleCommands_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    actions__action__MessageTurtleCommands_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
actions__action__MessageTurtleCommands_Goal__Sequence__init(actions__action__MessageTurtleCommands_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_Goal * data = NULL;

  if (size) {
    data = (actions__action__MessageTurtleCommands_Goal *)allocator.zero_allocate(size, sizeof(actions__action__MessageTurtleCommands_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = actions__action__MessageTurtleCommands_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        actions__action__MessageTurtleCommands_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
actions__action__MessageTurtleCommands_Goal__Sequence__fini(actions__action__MessageTurtleCommands_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      actions__action__MessageTurtleCommands_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

actions__action__MessageTurtleCommands_Goal__Sequence *
actions__action__MessageTurtleCommands_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_Goal__Sequence * array = (actions__action__MessageTurtleCommands_Goal__Sequence *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = actions__action__MessageTurtleCommands_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
actions__action__MessageTurtleCommands_Goal__Sequence__destroy(actions__action__MessageTurtleCommands_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    actions__action__MessageTurtleCommands_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
actions__action__MessageTurtleCommands_Goal__Sequence__are_equal(const actions__action__MessageTurtleCommands_Goal__Sequence * lhs, const actions__action__MessageTurtleCommands_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!actions__action__MessageTurtleCommands_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_Goal__Sequence__copy(
  const actions__action__MessageTurtleCommands_Goal__Sequence * input,
  actions__action__MessageTurtleCommands_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(actions__action__MessageTurtleCommands_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    actions__action__MessageTurtleCommands_Goal * data =
      (actions__action__MessageTurtleCommands_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!actions__action__MessageTurtleCommands_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          actions__action__MessageTurtleCommands_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!actions__action__MessageTurtleCommands_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
actions__action__MessageTurtleCommands_Result__init(actions__action__MessageTurtleCommands_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
actions__action__MessageTurtleCommands_Result__fini(actions__action__MessageTurtleCommands_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
actions__action__MessageTurtleCommands_Result__are_equal(const actions__action__MessageTurtleCommands_Result * lhs, const actions__action__MessageTurtleCommands_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_Result__copy(
  const actions__action__MessageTurtleCommands_Result * input,
  actions__action__MessageTurtleCommands_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

actions__action__MessageTurtleCommands_Result *
actions__action__MessageTurtleCommands_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_Result * msg = (actions__action__MessageTurtleCommands_Result *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(actions__action__MessageTurtleCommands_Result));
  bool success = actions__action__MessageTurtleCommands_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
actions__action__MessageTurtleCommands_Result__destroy(actions__action__MessageTurtleCommands_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    actions__action__MessageTurtleCommands_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
actions__action__MessageTurtleCommands_Result__Sequence__init(actions__action__MessageTurtleCommands_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_Result * data = NULL;

  if (size) {
    data = (actions__action__MessageTurtleCommands_Result *)allocator.zero_allocate(size, sizeof(actions__action__MessageTurtleCommands_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = actions__action__MessageTurtleCommands_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        actions__action__MessageTurtleCommands_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
actions__action__MessageTurtleCommands_Result__Sequence__fini(actions__action__MessageTurtleCommands_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      actions__action__MessageTurtleCommands_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

actions__action__MessageTurtleCommands_Result__Sequence *
actions__action__MessageTurtleCommands_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_Result__Sequence * array = (actions__action__MessageTurtleCommands_Result__Sequence *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = actions__action__MessageTurtleCommands_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
actions__action__MessageTurtleCommands_Result__Sequence__destroy(actions__action__MessageTurtleCommands_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    actions__action__MessageTurtleCommands_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
actions__action__MessageTurtleCommands_Result__Sequence__are_equal(const actions__action__MessageTurtleCommands_Result__Sequence * lhs, const actions__action__MessageTurtleCommands_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!actions__action__MessageTurtleCommands_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_Result__Sequence__copy(
  const actions__action__MessageTurtleCommands_Result__Sequence * input,
  actions__action__MessageTurtleCommands_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(actions__action__MessageTurtleCommands_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    actions__action__MessageTurtleCommands_Result * data =
      (actions__action__MessageTurtleCommands_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!actions__action__MessageTurtleCommands_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          actions__action__MessageTurtleCommands_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!actions__action__MessageTurtleCommands_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
actions__action__MessageTurtleCommands_Feedback__init(actions__action__MessageTurtleCommands_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // odom
  return true;
}

void
actions__action__MessageTurtleCommands_Feedback__fini(actions__action__MessageTurtleCommands_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // odom
}

bool
actions__action__MessageTurtleCommands_Feedback__are_equal(const actions__action__MessageTurtleCommands_Feedback * lhs, const actions__action__MessageTurtleCommands_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // odom
  if (lhs->odom != rhs->odom) {
    return false;
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_Feedback__copy(
  const actions__action__MessageTurtleCommands_Feedback * input,
  actions__action__MessageTurtleCommands_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // odom
  output->odom = input->odom;
  return true;
}

actions__action__MessageTurtleCommands_Feedback *
actions__action__MessageTurtleCommands_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_Feedback * msg = (actions__action__MessageTurtleCommands_Feedback *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(actions__action__MessageTurtleCommands_Feedback));
  bool success = actions__action__MessageTurtleCommands_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
actions__action__MessageTurtleCommands_Feedback__destroy(actions__action__MessageTurtleCommands_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    actions__action__MessageTurtleCommands_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
actions__action__MessageTurtleCommands_Feedback__Sequence__init(actions__action__MessageTurtleCommands_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_Feedback * data = NULL;

  if (size) {
    data = (actions__action__MessageTurtleCommands_Feedback *)allocator.zero_allocate(size, sizeof(actions__action__MessageTurtleCommands_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = actions__action__MessageTurtleCommands_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        actions__action__MessageTurtleCommands_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
actions__action__MessageTurtleCommands_Feedback__Sequence__fini(actions__action__MessageTurtleCommands_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      actions__action__MessageTurtleCommands_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

actions__action__MessageTurtleCommands_Feedback__Sequence *
actions__action__MessageTurtleCommands_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_Feedback__Sequence * array = (actions__action__MessageTurtleCommands_Feedback__Sequence *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = actions__action__MessageTurtleCommands_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
actions__action__MessageTurtleCommands_Feedback__Sequence__destroy(actions__action__MessageTurtleCommands_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    actions__action__MessageTurtleCommands_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
actions__action__MessageTurtleCommands_Feedback__Sequence__are_equal(const actions__action__MessageTurtleCommands_Feedback__Sequence * lhs, const actions__action__MessageTurtleCommands_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!actions__action__MessageTurtleCommands_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_Feedback__Sequence__copy(
  const actions__action__MessageTurtleCommands_Feedback__Sequence * input,
  actions__action__MessageTurtleCommands_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(actions__action__MessageTurtleCommands_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    actions__action__MessageTurtleCommands_Feedback * data =
      (actions__action__MessageTurtleCommands_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!actions__action__MessageTurtleCommands_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          actions__action__MessageTurtleCommands_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!actions__action__MessageTurtleCommands_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "actions/action/detail/message_turtle_commands__functions.h"

bool
actions__action__MessageTurtleCommands_SendGoal_Request__init(actions__action__MessageTurtleCommands_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    actions__action__MessageTurtleCommands_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!actions__action__MessageTurtleCommands_Goal__init(&msg->goal)) {
    actions__action__MessageTurtleCommands_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
actions__action__MessageTurtleCommands_SendGoal_Request__fini(actions__action__MessageTurtleCommands_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  actions__action__MessageTurtleCommands_Goal__fini(&msg->goal);
}

bool
actions__action__MessageTurtleCommands_SendGoal_Request__are_equal(const actions__action__MessageTurtleCommands_SendGoal_Request * lhs, const actions__action__MessageTurtleCommands_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!actions__action__MessageTurtleCommands_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_SendGoal_Request__copy(
  const actions__action__MessageTurtleCommands_SendGoal_Request * input,
  actions__action__MessageTurtleCommands_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!actions__action__MessageTurtleCommands_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

actions__action__MessageTurtleCommands_SendGoal_Request *
actions__action__MessageTurtleCommands_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_SendGoal_Request * msg = (actions__action__MessageTurtleCommands_SendGoal_Request *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(actions__action__MessageTurtleCommands_SendGoal_Request));
  bool success = actions__action__MessageTurtleCommands_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
actions__action__MessageTurtleCommands_SendGoal_Request__destroy(actions__action__MessageTurtleCommands_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    actions__action__MessageTurtleCommands_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
actions__action__MessageTurtleCommands_SendGoal_Request__Sequence__init(actions__action__MessageTurtleCommands_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_SendGoal_Request * data = NULL;

  if (size) {
    data = (actions__action__MessageTurtleCommands_SendGoal_Request *)allocator.zero_allocate(size, sizeof(actions__action__MessageTurtleCommands_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = actions__action__MessageTurtleCommands_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        actions__action__MessageTurtleCommands_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
actions__action__MessageTurtleCommands_SendGoal_Request__Sequence__fini(actions__action__MessageTurtleCommands_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      actions__action__MessageTurtleCommands_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

actions__action__MessageTurtleCommands_SendGoal_Request__Sequence *
actions__action__MessageTurtleCommands_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_SendGoal_Request__Sequence * array = (actions__action__MessageTurtleCommands_SendGoal_Request__Sequence *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = actions__action__MessageTurtleCommands_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
actions__action__MessageTurtleCommands_SendGoal_Request__Sequence__destroy(actions__action__MessageTurtleCommands_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    actions__action__MessageTurtleCommands_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
actions__action__MessageTurtleCommands_SendGoal_Request__Sequence__are_equal(const actions__action__MessageTurtleCommands_SendGoal_Request__Sequence * lhs, const actions__action__MessageTurtleCommands_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!actions__action__MessageTurtleCommands_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_SendGoal_Request__Sequence__copy(
  const actions__action__MessageTurtleCommands_SendGoal_Request__Sequence * input,
  actions__action__MessageTurtleCommands_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(actions__action__MessageTurtleCommands_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    actions__action__MessageTurtleCommands_SendGoal_Request * data =
      (actions__action__MessageTurtleCommands_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!actions__action__MessageTurtleCommands_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          actions__action__MessageTurtleCommands_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!actions__action__MessageTurtleCommands_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
actions__action__MessageTurtleCommands_SendGoal_Response__init(actions__action__MessageTurtleCommands_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    actions__action__MessageTurtleCommands_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
actions__action__MessageTurtleCommands_SendGoal_Response__fini(actions__action__MessageTurtleCommands_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
actions__action__MessageTurtleCommands_SendGoal_Response__are_equal(const actions__action__MessageTurtleCommands_SendGoal_Response * lhs, const actions__action__MessageTurtleCommands_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_SendGoal_Response__copy(
  const actions__action__MessageTurtleCommands_SendGoal_Response * input,
  actions__action__MessageTurtleCommands_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

actions__action__MessageTurtleCommands_SendGoal_Response *
actions__action__MessageTurtleCommands_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_SendGoal_Response * msg = (actions__action__MessageTurtleCommands_SendGoal_Response *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(actions__action__MessageTurtleCommands_SendGoal_Response));
  bool success = actions__action__MessageTurtleCommands_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
actions__action__MessageTurtleCommands_SendGoal_Response__destroy(actions__action__MessageTurtleCommands_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    actions__action__MessageTurtleCommands_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
actions__action__MessageTurtleCommands_SendGoal_Response__Sequence__init(actions__action__MessageTurtleCommands_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_SendGoal_Response * data = NULL;

  if (size) {
    data = (actions__action__MessageTurtleCommands_SendGoal_Response *)allocator.zero_allocate(size, sizeof(actions__action__MessageTurtleCommands_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = actions__action__MessageTurtleCommands_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        actions__action__MessageTurtleCommands_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
actions__action__MessageTurtleCommands_SendGoal_Response__Sequence__fini(actions__action__MessageTurtleCommands_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      actions__action__MessageTurtleCommands_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

actions__action__MessageTurtleCommands_SendGoal_Response__Sequence *
actions__action__MessageTurtleCommands_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_SendGoal_Response__Sequence * array = (actions__action__MessageTurtleCommands_SendGoal_Response__Sequence *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = actions__action__MessageTurtleCommands_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
actions__action__MessageTurtleCommands_SendGoal_Response__Sequence__destroy(actions__action__MessageTurtleCommands_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    actions__action__MessageTurtleCommands_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
actions__action__MessageTurtleCommands_SendGoal_Response__Sequence__are_equal(const actions__action__MessageTurtleCommands_SendGoal_Response__Sequence * lhs, const actions__action__MessageTurtleCommands_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!actions__action__MessageTurtleCommands_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_SendGoal_Response__Sequence__copy(
  const actions__action__MessageTurtleCommands_SendGoal_Response__Sequence * input,
  actions__action__MessageTurtleCommands_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(actions__action__MessageTurtleCommands_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    actions__action__MessageTurtleCommands_SendGoal_Response * data =
      (actions__action__MessageTurtleCommands_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!actions__action__MessageTurtleCommands_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          actions__action__MessageTurtleCommands_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!actions__action__MessageTurtleCommands_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "actions/action/detail/message_turtle_commands__functions.h"

bool
actions__action__MessageTurtleCommands_SendGoal_Event__init(actions__action__MessageTurtleCommands_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    actions__action__MessageTurtleCommands_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!actions__action__MessageTurtleCommands_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    actions__action__MessageTurtleCommands_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!actions__action__MessageTurtleCommands_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    actions__action__MessageTurtleCommands_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
actions__action__MessageTurtleCommands_SendGoal_Event__fini(actions__action__MessageTurtleCommands_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  actions__action__MessageTurtleCommands_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  actions__action__MessageTurtleCommands_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
actions__action__MessageTurtleCommands_SendGoal_Event__are_equal(const actions__action__MessageTurtleCommands_SendGoal_Event * lhs, const actions__action__MessageTurtleCommands_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!actions__action__MessageTurtleCommands_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!actions__action__MessageTurtleCommands_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_SendGoal_Event__copy(
  const actions__action__MessageTurtleCommands_SendGoal_Event * input,
  actions__action__MessageTurtleCommands_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!actions__action__MessageTurtleCommands_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!actions__action__MessageTurtleCommands_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

actions__action__MessageTurtleCommands_SendGoal_Event *
actions__action__MessageTurtleCommands_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_SendGoal_Event * msg = (actions__action__MessageTurtleCommands_SendGoal_Event *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(actions__action__MessageTurtleCommands_SendGoal_Event));
  bool success = actions__action__MessageTurtleCommands_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
actions__action__MessageTurtleCommands_SendGoal_Event__destroy(actions__action__MessageTurtleCommands_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    actions__action__MessageTurtleCommands_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
actions__action__MessageTurtleCommands_SendGoal_Event__Sequence__init(actions__action__MessageTurtleCommands_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_SendGoal_Event * data = NULL;

  if (size) {
    data = (actions__action__MessageTurtleCommands_SendGoal_Event *)allocator.zero_allocate(size, sizeof(actions__action__MessageTurtleCommands_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = actions__action__MessageTurtleCommands_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        actions__action__MessageTurtleCommands_SendGoal_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
actions__action__MessageTurtleCommands_SendGoal_Event__Sequence__fini(actions__action__MessageTurtleCommands_SendGoal_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      actions__action__MessageTurtleCommands_SendGoal_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

actions__action__MessageTurtleCommands_SendGoal_Event__Sequence *
actions__action__MessageTurtleCommands_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_SendGoal_Event__Sequence * array = (actions__action__MessageTurtleCommands_SendGoal_Event__Sequence *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = actions__action__MessageTurtleCommands_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
actions__action__MessageTurtleCommands_SendGoal_Event__Sequence__destroy(actions__action__MessageTurtleCommands_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    actions__action__MessageTurtleCommands_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
actions__action__MessageTurtleCommands_SendGoal_Event__Sequence__are_equal(const actions__action__MessageTurtleCommands_SendGoal_Event__Sequence * lhs, const actions__action__MessageTurtleCommands_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!actions__action__MessageTurtleCommands_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_SendGoal_Event__Sequence__copy(
  const actions__action__MessageTurtleCommands_SendGoal_Event__Sequence * input,
  actions__action__MessageTurtleCommands_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(actions__action__MessageTurtleCommands_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    actions__action__MessageTurtleCommands_SendGoal_Event * data =
      (actions__action__MessageTurtleCommands_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!actions__action__MessageTurtleCommands_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          actions__action__MessageTurtleCommands_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!actions__action__MessageTurtleCommands_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
actions__action__MessageTurtleCommands_GetResult_Request__init(actions__action__MessageTurtleCommands_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    actions__action__MessageTurtleCommands_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
actions__action__MessageTurtleCommands_GetResult_Request__fini(actions__action__MessageTurtleCommands_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
actions__action__MessageTurtleCommands_GetResult_Request__are_equal(const actions__action__MessageTurtleCommands_GetResult_Request * lhs, const actions__action__MessageTurtleCommands_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_GetResult_Request__copy(
  const actions__action__MessageTurtleCommands_GetResult_Request * input,
  actions__action__MessageTurtleCommands_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

actions__action__MessageTurtleCommands_GetResult_Request *
actions__action__MessageTurtleCommands_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_GetResult_Request * msg = (actions__action__MessageTurtleCommands_GetResult_Request *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(actions__action__MessageTurtleCommands_GetResult_Request));
  bool success = actions__action__MessageTurtleCommands_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
actions__action__MessageTurtleCommands_GetResult_Request__destroy(actions__action__MessageTurtleCommands_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    actions__action__MessageTurtleCommands_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
actions__action__MessageTurtleCommands_GetResult_Request__Sequence__init(actions__action__MessageTurtleCommands_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_GetResult_Request * data = NULL;

  if (size) {
    data = (actions__action__MessageTurtleCommands_GetResult_Request *)allocator.zero_allocate(size, sizeof(actions__action__MessageTurtleCommands_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = actions__action__MessageTurtleCommands_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        actions__action__MessageTurtleCommands_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
actions__action__MessageTurtleCommands_GetResult_Request__Sequence__fini(actions__action__MessageTurtleCommands_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      actions__action__MessageTurtleCommands_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

actions__action__MessageTurtleCommands_GetResult_Request__Sequence *
actions__action__MessageTurtleCommands_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_GetResult_Request__Sequence * array = (actions__action__MessageTurtleCommands_GetResult_Request__Sequence *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = actions__action__MessageTurtleCommands_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
actions__action__MessageTurtleCommands_GetResult_Request__Sequence__destroy(actions__action__MessageTurtleCommands_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    actions__action__MessageTurtleCommands_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
actions__action__MessageTurtleCommands_GetResult_Request__Sequence__are_equal(const actions__action__MessageTurtleCommands_GetResult_Request__Sequence * lhs, const actions__action__MessageTurtleCommands_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!actions__action__MessageTurtleCommands_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_GetResult_Request__Sequence__copy(
  const actions__action__MessageTurtleCommands_GetResult_Request__Sequence * input,
  actions__action__MessageTurtleCommands_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(actions__action__MessageTurtleCommands_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    actions__action__MessageTurtleCommands_GetResult_Request * data =
      (actions__action__MessageTurtleCommands_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!actions__action__MessageTurtleCommands_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          actions__action__MessageTurtleCommands_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!actions__action__MessageTurtleCommands_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "actions/action/detail/message_turtle_commands__functions.h"

bool
actions__action__MessageTurtleCommands_GetResult_Response__init(actions__action__MessageTurtleCommands_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!actions__action__MessageTurtleCommands_Result__init(&msg->result)) {
    actions__action__MessageTurtleCommands_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
actions__action__MessageTurtleCommands_GetResult_Response__fini(actions__action__MessageTurtleCommands_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  actions__action__MessageTurtleCommands_Result__fini(&msg->result);
}

bool
actions__action__MessageTurtleCommands_GetResult_Response__are_equal(const actions__action__MessageTurtleCommands_GetResult_Response * lhs, const actions__action__MessageTurtleCommands_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!actions__action__MessageTurtleCommands_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_GetResult_Response__copy(
  const actions__action__MessageTurtleCommands_GetResult_Response * input,
  actions__action__MessageTurtleCommands_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!actions__action__MessageTurtleCommands_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

actions__action__MessageTurtleCommands_GetResult_Response *
actions__action__MessageTurtleCommands_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_GetResult_Response * msg = (actions__action__MessageTurtleCommands_GetResult_Response *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(actions__action__MessageTurtleCommands_GetResult_Response));
  bool success = actions__action__MessageTurtleCommands_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
actions__action__MessageTurtleCommands_GetResult_Response__destroy(actions__action__MessageTurtleCommands_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    actions__action__MessageTurtleCommands_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
actions__action__MessageTurtleCommands_GetResult_Response__Sequence__init(actions__action__MessageTurtleCommands_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_GetResult_Response * data = NULL;

  if (size) {
    data = (actions__action__MessageTurtleCommands_GetResult_Response *)allocator.zero_allocate(size, sizeof(actions__action__MessageTurtleCommands_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = actions__action__MessageTurtleCommands_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        actions__action__MessageTurtleCommands_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
actions__action__MessageTurtleCommands_GetResult_Response__Sequence__fini(actions__action__MessageTurtleCommands_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      actions__action__MessageTurtleCommands_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

actions__action__MessageTurtleCommands_GetResult_Response__Sequence *
actions__action__MessageTurtleCommands_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_GetResult_Response__Sequence * array = (actions__action__MessageTurtleCommands_GetResult_Response__Sequence *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = actions__action__MessageTurtleCommands_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
actions__action__MessageTurtleCommands_GetResult_Response__Sequence__destroy(actions__action__MessageTurtleCommands_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    actions__action__MessageTurtleCommands_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
actions__action__MessageTurtleCommands_GetResult_Response__Sequence__are_equal(const actions__action__MessageTurtleCommands_GetResult_Response__Sequence * lhs, const actions__action__MessageTurtleCommands_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!actions__action__MessageTurtleCommands_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_GetResult_Response__Sequence__copy(
  const actions__action__MessageTurtleCommands_GetResult_Response__Sequence * input,
  actions__action__MessageTurtleCommands_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(actions__action__MessageTurtleCommands_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    actions__action__MessageTurtleCommands_GetResult_Response * data =
      (actions__action__MessageTurtleCommands_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!actions__action__MessageTurtleCommands_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          actions__action__MessageTurtleCommands_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!actions__action__MessageTurtleCommands_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "actions/action/detail/message_turtle_commands__functions.h"

bool
actions__action__MessageTurtleCommands_GetResult_Event__init(actions__action__MessageTurtleCommands_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    actions__action__MessageTurtleCommands_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!actions__action__MessageTurtleCommands_GetResult_Request__Sequence__init(&msg->request, 0)) {
    actions__action__MessageTurtleCommands_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!actions__action__MessageTurtleCommands_GetResult_Response__Sequence__init(&msg->response, 0)) {
    actions__action__MessageTurtleCommands_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
actions__action__MessageTurtleCommands_GetResult_Event__fini(actions__action__MessageTurtleCommands_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  actions__action__MessageTurtleCommands_GetResult_Request__Sequence__fini(&msg->request);
  // response
  actions__action__MessageTurtleCommands_GetResult_Response__Sequence__fini(&msg->response);
}

bool
actions__action__MessageTurtleCommands_GetResult_Event__are_equal(const actions__action__MessageTurtleCommands_GetResult_Event * lhs, const actions__action__MessageTurtleCommands_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!actions__action__MessageTurtleCommands_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!actions__action__MessageTurtleCommands_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_GetResult_Event__copy(
  const actions__action__MessageTurtleCommands_GetResult_Event * input,
  actions__action__MessageTurtleCommands_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!actions__action__MessageTurtleCommands_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!actions__action__MessageTurtleCommands_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

actions__action__MessageTurtleCommands_GetResult_Event *
actions__action__MessageTurtleCommands_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_GetResult_Event * msg = (actions__action__MessageTurtleCommands_GetResult_Event *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(actions__action__MessageTurtleCommands_GetResult_Event));
  bool success = actions__action__MessageTurtleCommands_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
actions__action__MessageTurtleCommands_GetResult_Event__destroy(actions__action__MessageTurtleCommands_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    actions__action__MessageTurtleCommands_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
actions__action__MessageTurtleCommands_GetResult_Event__Sequence__init(actions__action__MessageTurtleCommands_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_GetResult_Event * data = NULL;

  if (size) {
    data = (actions__action__MessageTurtleCommands_GetResult_Event *)allocator.zero_allocate(size, sizeof(actions__action__MessageTurtleCommands_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = actions__action__MessageTurtleCommands_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        actions__action__MessageTurtleCommands_GetResult_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
actions__action__MessageTurtleCommands_GetResult_Event__Sequence__fini(actions__action__MessageTurtleCommands_GetResult_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      actions__action__MessageTurtleCommands_GetResult_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

actions__action__MessageTurtleCommands_GetResult_Event__Sequence *
actions__action__MessageTurtleCommands_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_GetResult_Event__Sequence * array = (actions__action__MessageTurtleCommands_GetResult_Event__Sequence *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = actions__action__MessageTurtleCommands_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
actions__action__MessageTurtleCommands_GetResult_Event__Sequence__destroy(actions__action__MessageTurtleCommands_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    actions__action__MessageTurtleCommands_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
actions__action__MessageTurtleCommands_GetResult_Event__Sequence__are_equal(const actions__action__MessageTurtleCommands_GetResult_Event__Sequence * lhs, const actions__action__MessageTurtleCommands_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!actions__action__MessageTurtleCommands_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_GetResult_Event__Sequence__copy(
  const actions__action__MessageTurtleCommands_GetResult_Event__Sequence * input,
  actions__action__MessageTurtleCommands_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(actions__action__MessageTurtleCommands_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    actions__action__MessageTurtleCommands_GetResult_Event * data =
      (actions__action__MessageTurtleCommands_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!actions__action__MessageTurtleCommands_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          actions__action__MessageTurtleCommands_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!actions__action__MessageTurtleCommands_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "actions/action/detail/message_turtle_commands__functions.h"

bool
actions__action__MessageTurtleCommands_FeedbackMessage__init(actions__action__MessageTurtleCommands_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    actions__action__MessageTurtleCommands_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!actions__action__MessageTurtleCommands_Feedback__init(&msg->feedback)) {
    actions__action__MessageTurtleCommands_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
actions__action__MessageTurtleCommands_FeedbackMessage__fini(actions__action__MessageTurtleCommands_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  actions__action__MessageTurtleCommands_Feedback__fini(&msg->feedback);
}

bool
actions__action__MessageTurtleCommands_FeedbackMessage__are_equal(const actions__action__MessageTurtleCommands_FeedbackMessage * lhs, const actions__action__MessageTurtleCommands_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!actions__action__MessageTurtleCommands_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_FeedbackMessage__copy(
  const actions__action__MessageTurtleCommands_FeedbackMessage * input,
  actions__action__MessageTurtleCommands_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!actions__action__MessageTurtleCommands_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

actions__action__MessageTurtleCommands_FeedbackMessage *
actions__action__MessageTurtleCommands_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_FeedbackMessage * msg = (actions__action__MessageTurtleCommands_FeedbackMessage *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(actions__action__MessageTurtleCommands_FeedbackMessage));
  bool success = actions__action__MessageTurtleCommands_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
actions__action__MessageTurtleCommands_FeedbackMessage__destroy(actions__action__MessageTurtleCommands_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    actions__action__MessageTurtleCommands_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
actions__action__MessageTurtleCommands_FeedbackMessage__Sequence__init(actions__action__MessageTurtleCommands_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_FeedbackMessage * data = NULL;

  if (size) {
    data = (actions__action__MessageTurtleCommands_FeedbackMessage *)allocator.zero_allocate(size, sizeof(actions__action__MessageTurtleCommands_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = actions__action__MessageTurtleCommands_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        actions__action__MessageTurtleCommands_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
actions__action__MessageTurtleCommands_FeedbackMessage__Sequence__fini(actions__action__MessageTurtleCommands_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      actions__action__MessageTurtleCommands_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

actions__action__MessageTurtleCommands_FeedbackMessage__Sequence *
actions__action__MessageTurtleCommands_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  actions__action__MessageTurtleCommands_FeedbackMessage__Sequence * array = (actions__action__MessageTurtleCommands_FeedbackMessage__Sequence *)allocator.allocate(sizeof(actions__action__MessageTurtleCommands_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = actions__action__MessageTurtleCommands_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
actions__action__MessageTurtleCommands_FeedbackMessage__Sequence__destroy(actions__action__MessageTurtleCommands_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    actions__action__MessageTurtleCommands_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
actions__action__MessageTurtleCommands_FeedbackMessage__Sequence__are_equal(const actions__action__MessageTurtleCommands_FeedbackMessage__Sequence * lhs, const actions__action__MessageTurtleCommands_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!actions__action__MessageTurtleCommands_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
actions__action__MessageTurtleCommands_FeedbackMessage__Sequence__copy(
  const actions__action__MessageTurtleCommands_FeedbackMessage__Sequence * input,
  actions__action__MessageTurtleCommands_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(actions__action__MessageTurtleCommands_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    actions__action__MessageTurtleCommands_FeedbackMessage * data =
      (actions__action__MessageTurtleCommands_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!actions__action__MessageTurtleCommands_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          actions__action__MessageTurtleCommands_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!actions__action__MessageTurtleCommands_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
