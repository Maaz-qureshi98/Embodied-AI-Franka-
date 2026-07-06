// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from franka_msgs:msg/FrankaRobotState.idl
// generated code does not contain a copyright notice
#include "franka_msgs/msg/detail/franka_robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `current_errors`
// Member `last_motion_errors`
#include "franka_msgs/msg/detail/errors__functions.h"

bool
franka_msgs__msg__FrankaRobotState__init(franka_msgs__msg__FrankaRobotState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // cartesian_collision
  // cartesian_contact
  // q
  // q_d
  // dq
  // dq_d
  // ddq_d
  // theta
  // dtheta
  // tau_j
  // dtau_j
  // tau_j_d
  // k_f_ext_hat_k
  // elbow
  // elbow_d
  // elbow_c
  // delbow_c
  // ddelbow_c
  // joint_collision
  // joint_contact
  // o_f_ext_hat_k
  // o_dp_ee_d
  // o_dp_ee_c
  // o_ddp_ee_c
  // tau_ext_hat_filtered
  // m_ee
  // f_x_cee
  // i_ee
  // m_load
  // f_x_cload
  // i_load
  // m_total
  // f_x_ctotal
  // i_total
  // o_t_ee
  // o_t_ee_d
  // o_t_ee_c
  // f_t_ee
  // ee_t_k
  // time
  // control_command_success_rate
  // robot_mode
  // current_errors
  if (!franka_msgs__msg__Errors__init(&msg->current_errors)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  // last_motion_errors
  if (!franka_msgs__msg__Errors__init(&msg->last_motion_errors)) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
    return false;
  }
  return true;
}

void
franka_msgs__msg__FrankaRobotState__fini(franka_msgs__msg__FrankaRobotState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // cartesian_collision
  // cartesian_contact
  // q
  // q_d
  // dq
  // dq_d
  // ddq_d
  // theta
  // dtheta
  // tau_j
  // dtau_j
  // tau_j_d
  // k_f_ext_hat_k
  // elbow
  // elbow_d
  // elbow_c
  // delbow_c
  // ddelbow_c
  // joint_collision
  // joint_contact
  // o_f_ext_hat_k
  // o_dp_ee_d
  // o_dp_ee_c
  // o_ddp_ee_c
  // tau_ext_hat_filtered
  // m_ee
  // f_x_cee
  // i_ee
  // m_load
  // f_x_cload
  // i_load
  // m_total
  // f_x_ctotal
  // i_total
  // o_t_ee
  // o_t_ee_d
  // o_t_ee_c
  // f_t_ee
  // ee_t_k
  // time
  // control_command_success_rate
  // robot_mode
  // current_errors
  franka_msgs__msg__Errors__fini(&msg->current_errors);
  // last_motion_errors
  franka_msgs__msg__Errors__fini(&msg->last_motion_errors);
}

bool
franka_msgs__msg__FrankaRobotState__are_equal(const franka_msgs__msg__FrankaRobotState * lhs, const franka_msgs__msg__FrankaRobotState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // cartesian_collision
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->cartesian_collision[i] != rhs->cartesian_collision[i]) {
      return false;
    }
  }
  // cartesian_contact
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->cartesian_contact[i] != rhs->cartesian_contact[i]) {
      return false;
    }
  }
  // q
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->q[i] != rhs->q[i]) {
      return false;
    }
  }
  // q_d
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->q_d[i] != rhs->q_d[i]) {
      return false;
    }
  }
  // dq
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->dq[i] != rhs->dq[i]) {
      return false;
    }
  }
  // dq_d
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->dq_d[i] != rhs->dq_d[i]) {
      return false;
    }
  }
  // ddq_d
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->ddq_d[i] != rhs->ddq_d[i]) {
      return false;
    }
  }
  // theta
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->theta[i] != rhs->theta[i]) {
      return false;
    }
  }
  // dtheta
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->dtheta[i] != rhs->dtheta[i]) {
      return false;
    }
  }
  // tau_j
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->tau_j[i] != rhs->tau_j[i]) {
      return false;
    }
  }
  // dtau_j
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->dtau_j[i] != rhs->dtau_j[i]) {
      return false;
    }
  }
  // tau_j_d
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->tau_j_d[i] != rhs->tau_j_d[i]) {
      return false;
    }
  }
  // k_f_ext_hat_k
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->k_f_ext_hat_k[i] != rhs->k_f_ext_hat_k[i]) {
      return false;
    }
  }
  // elbow
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->elbow[i] != rhs->elbow[i]) {
      return false;
    }
  }
  // elbow_d
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->elbow_d[i] != rhs->elbow_d[i]) {
      return false;
    }
  }
  // elbow_c
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->elbow_c[i] != rhs->elbow_c[i]) {
      return false;
    }
  }
  // delbow_c
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->delbow_c[i] != rhs->delbow_c[i]) {
      return false;
    }
  }
  // ddelbow_c
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->ddelbow_c[i] != rhs->ddelbow_c[i]) {
      return false;
    }
  }
  // joint_collision
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->joint_collision[i] != rhs->joint_collision[i]) {
      return false;
    }
  }
  // joint_contact
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->joint_contact[i] != rhs->joint_contact[i]) {
      return false;
    }
  }
  // o_f_ext_hat_k
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->o_f_ext_hat_k[i] != rhs->o_f_ext_hat_k[i]) {
      return false;
    }
  }
  // o_dp_ee_d
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->o_dp_ee_d[i] != rhs->o_dp_ee_d[i]) {
      return false;
    }
  }
  // o_dp_ee_c
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->o_dp_ee_c[i] != rhs->o_dp_ee_c[i]) {
      return false;
    }
  }
  // o_ddp_ee_c
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->o_ddp_ee_c[i] != rhs->o_ddp_ee_c[i]) {
      return false;
    }
  }
  // tau_ext_hat_filtered
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->tau_ext_hat_filtered[i] != rhs->tau_ext_hat_filtered[i]) {
      return false;
    }
  }
  // m_ee
  if (lhs->m_ee != rhs->m_ee) {
    return false;
  }
  // f_x_cee
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->f_x_cee[i] != rhs->f_x_cee[i]) {
      return false;
    }
  }
  // i_ee
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->i_ee[i] != rhs->i_ee[i]) {
      return false;
    }
  }
  // m_load
  if (lhs->m_load != rhs->m_load) {
    return false;
  }
  // f_x_cload
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->f_x_cload[i] != rhs->f_x_cload[i]) {
      return false;
    }
  }
  // i_load
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->i_load[i] != rhs->i_load[i]) {
      return false;
    }
  }
  // m_total
  if (lhs->m_total != rhs->m_total) {
    return false;
  }
  // f_x_ctotal
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->f_x_ctotal[i] != rhs->f_x_ctotal[i]) {
      return false;
    }
  }
  // i_total
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->i_total[i] != rhs->i_total[i]) {
      return false;
    }
  }
  // o_t_ee
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->o_t_ee[i] != rhs->o_t_ee[i]) {
      return false;
    }
  }
  // o_t_ee_d
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->o_t_ee_d[i] != rhs->o_t_ee_d[i]) {
      return false;
    }
  }
  // o_t_ee_c
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->o_t_ee_c[i] != rhs->o_t_ee_c[i]) {
      return false;
    }
  }
  // f_t_ee
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->f_t_ee[i] != rhs->f_t_ee[i]) {
      return false;
    }
  }
  // ee_t_k
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->ee_t_k[i] != rhs->ee_t_k[i]) {
      return false;
    }
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // control_command_success_rate
  if (lhs->control_command_success_rate != rhs->control_command_success_rate) {
    return false;
  }
  // robot_mode
  if (lhs->robot_mode != rhs->robot_mode) {
    return false;
  }
  // current_errors
  if (!franka_msgs__msg__Errors__are_equal(
      &(lhs->current_errors), &(rhs->current_errors)))
  {
    return false;
  }
  // last_motion_errors
  if (!franka_msgs__msg__Errors__are_equal(
      &(lhs->last_motion_errors), &(rhs->last_motion_errors)))
  {
    return false;
  }
  return true;
}

bool
franka_msgs__msg__FrankaRobotState__copy(
  const franka_msgs__msg__FrankaRobotState * input,
  franka_msgs__msg__FrankaRobotState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // cartesian_collision
  for (size_t i = 0; i < 6; ++i) {
    output->cartesian_collision[i] = input->cartesian_collision[i];
  }
  // cartesian_contact
  for (size_t i = 0; i < 6; ++i) {
    output->cartesian_contact[i] = input->cartesian_contact[i];
  }
  // q
  for (size_t i = 0; i < 7; ++i) {
    output->q[i] = input->q[i];
  }
  // q_d
  for (size_t i = 0; i < 7; ++i) {
    output->q_d[i] = input->q_d[i];
  }
  // dq
  for (size_t i = 0; i < 7; ++i) {
    output->dq[i] = input->dq[i];
  }
  // dq_d
  for (size_t i = 0; i < 7; ++i) {
    output->dq_d[i] = input->dq_d[i];
  }
  // ddq_d
  for (size_t i = 0; i < 7; ++i) {
    output->ddq_d[i] = input->ddq_d[i];
  }
  // theta
  for (size_t i = 0; i < 7; ++i) {
    output->theta[i] = input->theta[i];
  }
  // dtheta
  for (size_t i = 0; i < 7; ++i) {
    output->dtheta[i] = input->dtheta[i];
  }
  // tau_j
  for (size_t i = 0; i < 7; ++i) {
    output->tau_j[i] = input->tau_j[i];
  }
  // dtau_j
  for (size_t i = 0; i < 7; ++i) {
    output->dtau_j[i] = input->dtau_j[i];
  }
  // tau_j_d
  for (size_t i = 0; i < 7; ++i) {
    output->tau_j_d[i] = input->tau_j_d[i];
  }
  // k_f_ext_hat_k
  for (size_t i = 0; i < 6; ++i) {
    output->k_f_ext_hat_k[i] = input->k_f_ext_hat_k[i];
  }
  // elbow
  for (size_t i = 0; i < 2; ++i) {
    output->elbow[i] = input->elbow[i];
  }
  // elbow_d
  for (size_t i = 0; i < 2; ++i) {
    output->elbow_d[i] = input->elbow_d[i];
  }
  // elbow_c
  for (size_t i = 0; i < 2; ++i) {
    output->elbow_c[i] = input->elbow_c[i];
  }
  // delbow_c
  for (size_t i = 0; i < 2; ++i) {
    output->delbow_c[i] = input->delbow_c[i];
  }
  // ddelbow_c
  for (size_t i = 0; i < 2; ++i) {
    output->ddelbow_c[i] = input->ddelbow_c[i];
  }
  // joint_collision
  for (size_t i = 0; i < 7; ++i) {
    output->joint_collision[i] = input->joint_collision[i];
  }
  // joint_contact
  for (size_t i = 0; i < 7; ++i) {
    output->joint_contact[i] = input->joint_contact[i];
  }
  // o_f_ext_hat_k
  for (size_t i = 0; i < 6; ++i) {
    output->o_f_ext_hat_k[i] = input->o_f_ext_hat_k[i];
  }
  // o_dp_ee_d
  for (size_t i = 0; i < 6; ++i) {
    output->o_dp_ee_d[i] = input->o_dp_ee_d[i];
  }
  // o_dp_ee_c
  for (size_t i = 0; i < 6; ++i) {
    output->o_dp_ee_c[i] = input->o_dp_ee_c[i];
  }
  // o_ddp_ee_c
  for (size_t i = 0; i < 6; ++i) {
    output->o_ddp_ee_c[i] = input->o_ddp_ee_c[i];
  }
  // tau_ext_hat_filtered
  for (size_t i = 0; i < 7; ++i) {
    output->tau_ext_hat_filtered[i] = input->tau_ext_hat_filtered[i];
  }
  // m_ee
  output->m_ee = input->m_ee;
  // f_x_cee
  for (size_t i = 0; i < 3; ++i) {
    output->f_x_cee[i] = input->f_x_cee[i];
  }
  // i_ee
  for (size_t i = 0; i < 9; ++i) {
    output->i_ee[i] = input->i_ee[i];
  }
  // m_load
  output->m_load = input->m_load;
  // f_x_cload
  for (size_t i = 0; i < 3; ++i) {
    output->f_x_cload[i] = input->f_x_cload[i];
  }
  // i_load
  for (size_t i = 0; i < 9; ++i) {
    output->i_load[i] = input->i_load[i];
  }
  // m_total
  output->m_total = input->m_total;
  // f_x_ctotal
  for (size_t i = 0; i < 3; ++i) {
    output->f_x_ctotal[i] = input->f_x_ctotal[i];
  }
  // i_total
  for (size_t i = 0; i < 9; ++i) {
    output->i_total[i] = input->i_total[i];
  }
  // o_t_ee
  for (size_t i = 0; i < 16; ++i) {
    output->o_t_ee[i] = input->o_t_ee[i];
  }
  // o_t_ee_d
  for (size_t i = 0; i < 16; ++i) {
    output->o_t_ee_d[i] = input->o_t_ee_d[i];
  }
  // o_t_ee_c
  for (size_t i = 0; i < 16; ++i) {
    output->o_t_ee_c[i] = input->o_t_ee_c[i];
  }
  // f_t_ee
  for (size_t i = 0; i < 16; ++i) {
    output->f_t_ee[i] = input->f_t_ee[i];
  }
  // ee_t_k
  for (size_t i = 0; i < 16; ++i) {
    output->ee_t_k[i] = input->ee_t_k[i];
  }
  // time
  output->time = input->time;
  // control_command_success_rate
  output->control_command_success_rate = input->control_command_success_rate;
  // robot_mode
  output->robot_mode = input->robot_mode;
  // current_errors
  if (!franka_msgs__msg__Errors__copy(
      &(input->current_errors), &(output->current_errors)))
  {
    return false;
  }
  // last_motion_errors
  if (!franka_msgs__msg__Errors__copy(
      &(input->last_motion_errors), &(output->last_motion_errors)))
  {
    return false;
  }
  return true;
}

franka_msgs__msg__FrankaRobotState *
franka_msgs__msg__FrankaRobotState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__FrankaRobotState * msg = (franka_msgs__msg__FrankaRobotState *)allocator.allocate(sizeof(franka_msgs__msg__FrankaRobotState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_msgs__msg__FrankaRobotState));
  bool success = franka_msgs__msg__FrankaRobotState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_msgs__msg__FrankaRobotState__destroy(franka_msgs__msg__FrankaRobotState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_msgs__msg__FrankaRobotState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_msgs__msg__FrankaRobotState__Sequence__init(franka_msgs__msg__FrankaRobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__FrankaRobotState * data = NULL;

  if (size) {
    data = (franka_msgs__msg__FrankaRobotState *)allocator.zero_allocate(size, sizeof(franka_msgs__msg__FrankaRobotState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_msgs__msg__FrankaRobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_msgs__msg__FrankaRobotState__fini(&data[i - 1]);
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
franka_msgs__msg__FrankaRobotState__Sequence__fini(franka_msgs__msg__FrankaRobotState__Sequence * array)
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
      franka_msgs__msg__FrankaRobotState__fini(&array->data[i]);
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

franka_msgs__msg__FrankaRobotState__Sequence *
franka_msgs__msg__FrankaRobotState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__FrankaRobotState__Sequence * array = (franka_msgs__msg__FrankaRobotState__Sequence *)allocator.allocate(sizeof(franka_msgs__msg__FrankaRobotState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_msgs__msg__FrankaRobotState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_msgs__msg__FrankaRobotState__Sequence__destroy(franka_msgs__msg__FrankaRobotState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_msgs__msg__FrankaRobotState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_msgs__msg__FrankaRobotState__Sequence__are_equal(const franka_msgs__msg__FrankaRobotState__Sequence * lhs, const franka_msgs__msg__FrankaRobotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_msgs__msg__FrankaRobotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__msg__FrankaRobotState__Sequence__copy(
  const franka_msgs__msg__FrankaRobotState__Sequence * input,
  franka_msgs__msg__FrankaRobotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_msgs__msg__FrankaRobotState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_msgs__msg__FrankaRobotState * data =
      (franka_msgs__msg__FrankaRobotState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_msgs__msg__FrankaRobotState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_msgs__msg__FrankaRobotState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_msgs__msg__FrankaRobotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
