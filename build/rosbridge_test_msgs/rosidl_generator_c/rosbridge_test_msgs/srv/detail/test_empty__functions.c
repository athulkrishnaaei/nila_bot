// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosbridge_test_msgs:srv/TestEmpty.idl
// generated code does not contain a copyright notice
#include "rosbridge_test_msgs/srv/detail/test_empty__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
rosbridge_test_msgs__srv__TestEmpty_Request__init(rosbridge_test_msgs__srv__TestEmpty_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rosbridge_test_msgs__srv__TestEmpty_Request__fini(rosbridge_test_msgs__srv__TestEmpty_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
rosbridge_test_msgs__srv__TestEmpty_Request__are_equal(const rosbridge_test_msgs__srv__TestEmpty_Request * lhs, const rosbridge_test_msgs__srv__TestEmpty_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
rosbridge_test_msgs__srv__TestEmpty_Request__copy(
  const rosbridge_test_msgs__srv__TestEmpty_Request * input,
  rosbridge_test_msgs__srv__TestEmpty_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

rosbridge_test_msgs__srv__TestEmpty_Request *
rosbridge_test_msgs__srv__TestEmpty_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__srv__TestEmpty_Request * msg = (rosbridge_test_msgs__srv__TestEmpty_Request *)allocator.allocate(sizeof(rosbridge_test_msgs__srv__TestEmpty_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__srv__TestEmpty_Request));
  bool success = rosbridge_test_msgs__srv__TestEmpty_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__srv__TestEmpty_Request__destroy(rosbridge_test_msgs__srv__TestEmpty_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosbridge_test_msgs__srv__TestEmpty_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosbridge_test_msgs__srv__TestEmpty_Request__Sequence__init(rosbridge_test_msgs__srv__TestEmpty_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__srv__TestEmpty_Request * data = NULL;

  if (size) {
    data = (rosbridge_test_msgs__srv__TestEmpty_Request *)allocator.zero_allocate(size, sizeof(rosbridge_test_msgs__srv__TestEmpty_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__srv__TestEmpty_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__srv__TestEmpty_Request__fini(&data[i - 1]);
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
rosbridge_test_msgs__srv__TestEmpty_Request__Sequence__fini(rosbridge_test_msgs__srv__TestEmpty_Request__Sequence * array)
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
      rosbridge_test_msgs__srv__TestEmpty_Request__fini(&array->data[i]);
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

rosbridge_test_msgs__srv__TestEmpty_Request__Sequence *
rosbridge_test_msgs__srv__TestEmpty_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__srv__TestEmpty_Request__Sequence * array = (rosbridge_test_msgs__srv__TestEmpty_Request__Sequence *)allocator.allocate(sizeof(rosbridge_test_msgs__srv__TestEmpty_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__srv__TestEmpty_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__srv__TestEmpty_Request__Sequence__destroy(rosbridge_test_msgs__srv__TestEmpty_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosbridge_test_msgs__srv__TestEmpty_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosbridge_test_msgs__srv__TestEmpty_Request__Sequence__are_equal(const rosbridge_test_msgs__srv__TestEmpty_Request__Sequence * lhs, const rosbridge_test_msgs__srv__TestEmpty_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosbridge_test_msgs__srv__TestEmpty_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosbridge_test_msgs__srv__TestEmpty_Request__Sequence__copy(
  const rosbridge_test_msgs__srv__TestEmpty_Request__Sequence * input,
  rosbridge_test_msgs__srv__TestEmpty_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosbridge_test_msgs__srv__TestEmpty_Request);
    rosbridge_test_msgs__srv__TestEmpty_Request * data =
      (rosbridge_test_msgs__srv__TestEmpty_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosbridge_test_msgs__srv__TestEmpty_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rosbridge_test_msgs__srv__TestEmpty_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosbridge_test_msgs__srv__TestEmpty_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rosbridge_test_msgs__srv__TestEmpty_Response__init(rosbridge_test_msgs__srv__TestEmpty_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rosbridge_test_msgs__srv__TestEmpty_Response__fini(rosbridge_test_msgs__srv__TestEmpty_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
rosbridge_test_msgs__srv__TestEmpty_Response__are_equal(const rosbridge_test_msgs__srv__TestEmpty_Response * lhs, const rosbridge_test_msgs__srv__TestEmpty_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
rosbridge_test_msgs__srv__TestEmpty_Response__copy(
  const rosbridge_test_msgs__srv__TestEmpty_Response * input,
  rosbridge_test_msgs__srv__TestEmpty_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

rosbridge_test_msgs__srv__TestEmpty_Response *
rosbridge_test_msgs__srv__TestEmpty_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__srv__TestEmpty_Response * msg = (rosbridge_test_msgs__srv__TestEmpty_Response *)allocator.allocate(sizeof(rosbridge_test_msgs__srv__TestEmpty_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__srv__TestEmpty_Response));
  bool success = rosbridge_test_msgs__srv__TestEmpty_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__srv__TestEmpty_Response__destroy(rosbridge_test_msgs__srv__TestEmpty_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosbridge_test_msgs__srv__TestEmpty_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosbridge_test_msgs__srv__TestEmpty_Response__Sequence__init(rosbridge_test_msgs__srv__TestEmpty_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__srv__TestEmpty_Response * data = NULL;

  if (size) {
    data = (rosbridge_test_msgs__srv__TestEmpty_Response *)allocator.zero_allocate(size, sizeof(rosbridge_test_msgs__srv__TestEmpty_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__srv__TestEmpty_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__srv__TestEmpty_Response__fini(&data[i - 1]);
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
rosbridge_test_msgs__srv__TestEmpty_Response__Sequence__fini(rosbridge_test_msgs__srv__TestEmpty_Response__Sequence * array)
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
      rosbridge_test_msgs__srv__TestEmpty_Response__fini(&array->data[i]);
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

rosbridge_test_msgs__srv__TestEmpty_Response__Sequence *
rosbridge_test_msgs__srv__TestEmpty_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__srv__TestEmpty_Response__Sequence * array = (rosbridge_test_msgs__srv__TestEmpty_Response__Sequence *)allocator.allocate(sizeof(rosbridge_test_msgs__srv__TestEmpty_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__srv__TestEmpty_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__srv__TestEmpty_Response__Sequence__destroy(rosbridge_test_msgs__srv__TestEmpty_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosbridge_test_msgs__srv__TestEmpty_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosbridge_test_msgs__srv__TestEmpty_Response__Sequence__are_equal(const rosbridge_test_msgs__srv__TestEmpty_Response__Sequence * lhs, const rosbridge_test_msgs__srv__TestEmpty_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosbridge_test_msgs__srv__TestEmpty_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosbridge_test_msgs__srv__TestEmpty_Response__Sequence__copy(
  const rosbridge_test_msgs__srv__TestEmpty_Response__Sequence * input,
  rosbridge_test_msgs__srv__TestEmpty_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosbridge_test_msgs__srv__TestEmpty_Response);
    rosbridge_test_msgs__srv__TestEmpty_Response * data =
      (rosbridge_test_msgs__srv__TestEmpty_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosbridge_test_msgs__srv__TestEmpty_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rosbridge_test_msgs__srv__TestEmpty_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosbridge_test_msgs__srv__TestEmpty_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
