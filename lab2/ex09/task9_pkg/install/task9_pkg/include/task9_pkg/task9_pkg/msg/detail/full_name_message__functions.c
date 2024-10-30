// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from task9_pkg:msg/FullNameMessage.idl
// generated code does not contain a copyright notice
#include "task9_pkg/msg/detail/full_name_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `last_name`
// Member `name`
// Member `first_name`
#include "rosidl_runtime_c/string_functions.h"

bool
task9_pkg__msg__FullNameMessage__init(task9_pkg__msg__FullNameMessage * msg)
{
  if (!msg) {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__init(&msg->last_name)) {
    task9_pkg__msg__FullNameMessage__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    task9_pkg__msg__FullNameMessage__fini(msg);
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__init(&msg->first_name)) {
    task9_pkg__msg__FullNameMessage__fini(msg);
    return false;
  }
  return true;
}

void
task9_pkg__msg__FullNameMessage__fini(task9_pkg__msg__FullNameMessage * msg)
{
  if (!msg) {
    return;
  }
  // last_name
  rosidl_runtime_c__String__fini(&msg->last_name);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // first_name
  rosidl_runtime_c__String__fini(&msg->first_name);
}

bool
task9_pkg__msg__FullNameMessage__are_equal(const task9_pkg__msg__FullNameMessage * lhs, const task9_pkg__msg__FullNameMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->last_name), &(rhs->last_name)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->first_name), &(rhs->first_name)))
  {
    return false;
  }
  return true;
}

bool
task9_pkg__msg__FullNameMessage__copy(
  const task9_pkg__msg__FullNameMessage * input,
  task9_pkg__msg__FullNameMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__copy(
      &(input->last_name), &(output->last_name)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__copy(
      &(input->first_name), &(output->first_name)))
  {
    return false;
  }
  return true;
}

task9_pkg__msg__FullNameMessage *
task9_pkg__msg__FullNameMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task9_pkg__msg__FullNameMessage * msg = (task9_pkg__msg__FullNameMessage *)allocator.allocate(sizeof(task9_pkg__msg__FullNameMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task9_pkg__msg__FullNameMessage));
  bool success = task9_pkg__msg__FullNameMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task9_pkg__msg__FullNameMessage__destroy(task9_pkg__msg__FullNameMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task9_pkg__msg__FullNameMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task9_pkg__msg__FullNameMessage__Sequence__init(task9_pkg__msg__FullNameMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task9_pkg__msg__FullNameMessage * data = NULL;

  if (size) {
    data = (task9_pkg__msg__FullNameMessage *)allocator.zero_allocate(size, sizeof(task9_pkg__msg__FullNameMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task9_pkg__msg__FullNameMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task9_pkg__msg__FullNameMessage__fini(&data[i - 1]);
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
task9_pkg__msg__FullNameMessage__Sequence__fini(task9_pkg__msg__FullNameMessage__Sequence * array)
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
      task9_pkg__msg__FullNameMessage__fini(&array->data[i]);
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

task9_pkg__msg__FullNameMessage__Sequence *
task9_pkg__msg__FullNameMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task9_pkg__msg__FullNameMessage__Sequence * array = (task9_pkg__msg__FullNameMessage__Sequence *)allocator.allocate(sizeof(task9_pkg__msg__FullNameMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task9_pkg__msg__FullNameMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task9_pkg__msg__FullNameMessage__Sequence__destroy(task9_pkg__msg__FullNameMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task9_pkg__msg__FullNameMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task9_pkg__msg__FullNameMessage__Sequence__are_equal(const task9_pkg__msg__FullNameMessage__Sequence * lhs, const task9_pkg__msg__FullNameMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task9_pkg__msg__FullNameMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task9_pkg__msg__FullNameMessage__Sequence__copy(
  const task9_pkg__msg__FullNameMessage__Sequence * input,
  task9_pkg__msg__FullNameMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task9_pkg__msg__FullNameMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task9_pkg__msg__FullNameMessage * data =
      (task9_pkg__msg__FullNameMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task9_pkg__msg__FullNameMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task9_pkg__msg__FullNameMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task9_pkg__msg__FullNameMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
