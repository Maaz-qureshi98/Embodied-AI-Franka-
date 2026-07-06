// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from franka_msgs:msg/FrankaRobotState.idl
// generated code does not contain a copyright notice
#include "franka_msgs/msg/detail/franka_robot_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "franka_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "franka_msgs/msg/detail/franka_robot_state__struct.h"
#include "franka_msgs/msg/detail/franka_robot_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "franka_msgs/msg/detail/errors__functions.h"  // current_errors, last_motion_errors
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_franka_msgs__msg__Errors(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_franka_msgs__msg__Errors(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, msg, Errors)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_franka_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_franka_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_franka_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _FrankaRobotState__ros_msg_type = franka_msgs__msg__FrankaRobotState;

static bool _FrankaRobotState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FrankaRobotState__ros_msg_type * ros_message = static_cast<const _FrankaRobotState__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: cartesian_collision
  {
    size_t size = 6;
    auto array_ptr = ros_message->cartesian_collision;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cartesian_contact
  {
    size_t size = 6;
    auto array_ptr = ros_message->cartesian_contact;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: q
  {
    size_t size = 7;
    auto array_ptr = ros_message->q;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: q_d
  {
    size_t size = 7;
    auto array_ptr = ros_message->q_d;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: dq
  {
    size_t size = 7;
    auto array_ptr = ros_message->dq;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: dq_d
  {
    size_t size = 7;
    auto array_ptr = ros_message->dq_d;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ddq_d
  {
    size_t size = 7;
    auto array_ptr = ros_message->ddq_d;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: theta
  {
    size_t size = 7;
    auto array_ptr = ros_message->theta;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: dtheta
  {
    size_t size = 7;
    auto array_ptr = ros_message->dtheta;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tau_j
  {
    size_t size = 7;
    auto array_ptr = ros_message->tau_j;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: dtau_j
  {
    size_t size = 7;
    auto array_ptr = ros_message->dtau_j;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tau_j_d
  {
    size_t size = 7;
    auto array_ptr = ros_message->tau_j_d;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: k_f_ext_hat_k
  {
    size_t size = 6;
    auto array_ptr = ros_message->k_f_ext_hat_k;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: elbow
  {
    size_t size = 2;
    auto array_ptr = ros_message->elbow;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: elbow_d
  {
    size_t size = 2;
    auto array_ptr = ros_message->elbow_d;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: elbow_c
  {
    size_t size = 2;
    auto array_ptr = ros_message->elbow_c;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: delbow_c
  {
    size_t size = 2;
    auto array_ptr = ros_message->delbow_c;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ddelbow_c
  {
    size_t size = 2;
    auto array_ptr = ros_message->ddelbow_c;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_collision
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_collision;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_contact
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_contact;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: o_f_ext_hat_k
  {
    size_t size = 6;
    auto array_ptr = ros_message->o_f_ext_hat_k;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: o_dp_ee_d
  {
    size_t size = 6;
    auto array_ptr = ros_message->o_dp_ee_d;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: o_dp_ee_c
  {
    size_t size = 6;
    auto array_ptr = ros_message->o_dp_ee_c;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: o_ddp_ee_c
  {
    size_t size = 6;
    auto array_ptr = ros_message->o_ddp_ee_c;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tau_ext_hat_filtered
  {
    size_t size = 7;
    auto array_ptr = ros_message->tau_ext_hat_filtered;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: m_ee
  {
    cdr << ros_message->m_ee;
  }

  // Field name: f_x_cee
  {
    size_t size = 3;
    auto array_ptr = ros_message->f_x_cee;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: i_ee
  {
    size_t size = 9;
    auto array_ptr = ros_message->i_ee;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: m_load
  {
    cdr << ros_message->m_load;
  }

  // Field name: f_x_cload
  {
    size_t size = 3;
    auto array_ptr = ros_message->f_x_cload;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: i_load
  {
    size_t size = 9;
    auto array_ptr = ros_message->i_load;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: m_total
  {
    cdr << ros_message->m_total;
  }

  // Field name: f_x_ctotal
  {
    size_t size = 3;
    auto array_ptr = ros_message->f_x_ctotal;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: i_total
  {
    size_t size = 9;
    auto array_ptr = ros_message->i_total;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: o_t_ee
  {
    size_t size = 16;
    auto array_ptr = ros_message->o_t_ee;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: o_t_ee_d
  {
    size_t size = 16;
    auto array_ptr = ros_message->o_t_ee_d;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: o_t_ee_c
  {
    size_t size = 16;
    auto array_ptr = ros_message->o_t_ee_c;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: f_t_ee
  {
    size_t size = 16;
    auto array_ptr = ros_message->f_t_ee;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ee_t_k
  {
    size_t size = 16;
    auto array_ptr = ros_message->ee_t_k;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: time
  {
    cdr << ros_message->time;
  }

  // Field name: control_command_success_rate
  {
    cdr << ros_message->control_command_success_rate;
  }

  // Field name: robot_mode
  {
    cdr << ros_message->robot_mode;
  }

  // Field name: current_errors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_msgs, msg, Errors
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->current_errors, cdr))
    {
      return false;
    }
  }

  // Field name: last_motion_errors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_msgs, msg, Errors
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->last_motion_errors, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FrankaRobotState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FrankaRobotState__ros_msg_type * ros_message = static_cast<_FrankaRobotState__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: cartesian_collision
  {
    size_t size = 6;
    auto array_ptr = ros_message->cartesian_collision;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cartesian_contact
  {
    size_t size = 6;
    auto array_ptr = ros_message->cartesian_contact;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: q
  {
    size_t size = 7;
    auto array_ptr = ros_message->q;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: q_d
  {
    size_t size = 7;
    auto array_ptr = ros_message->q_d;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: dq
  {
    size_t size = 7;
    auto array_ptr = ros_message->dq;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: dq_d
  {
    size_t size = 7;
    auto array_ptr = ros_message->dq_d;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ddq_d
  {
    size_t size = 7;
    auto array_ptr = ros_message->ddq_d;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: theta
  {
    size_t size = 7;
    auto array_ptr = ros_message->theta;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: dtheta
  {
    size_t size = 7;
    auto array_ptr = ros_message->dtheta;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tau_j
  {
    size_t size = 7;
    auto array_ptr = ros_message->tau_j;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: dtau_j
  {
    size_t size = 7;
    auto array_ptr = ros_message->dtau_j;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tau_j_d
  {
    size_t size = 7;
    auto array_ptr = ros_message->tau_j_d;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: k_f_ext_hat_k
  {
    size_t size = 6;
    auto array_ptr = ros_message->k_f_ext_hat_k;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: elbow
  {
    size_t size = 2;
    auto array_ptr = ros_message->elbow;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: elbow_d
  {
    size_t size = 2;
    auto array_ptr = ros_message->elbow_d;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: elbow_c
  {
    size_t size = 2;
    auto array_ptr = ros_message->elbow_c;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: delbow_c
  {
    size_t size = 2;
    auto array_ptr = ros_message->delbow_c;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ddelbow_c
  {
    size_t size = 2;
    auto array_ptr = ros_message->ddelbow_c;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_collision
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_collision;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_contact
  {
    size_t size = 7;
    auto array_ptr = ros_message->joint_contact;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: o_f_ext_hat_k
  {
    size_t size = 6;
    auto array_ptr = ros_message->o_f_ext_hat_k;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: o_dp_ee_d
  {
    size_t size = 6;
    auto array_ptr = ros_message->o_dp_ee_d;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: o_dp_ee_c
  {
    size_t size = 6;
    auto array_ptr = ros_message->o_dp_ee_c;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: o_ddp_ee_c
  {
    size_t size = 6;
    auto array_ptr = ros_message->o_ddp_ee_c;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tau_ext_hat_filtered
  {
    size_t size = 7;
    auto array_ptr = ros_message->tau_ext_hat_filtered;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: m_ee
  {
    cdr >> ros_message->m_ee;
  }

  // Field name: f_x_cee
  {
    size_t size = 3;
    auto array_ptr = ros_message->f_x_cee;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: i_ee
  {
    size_t size = 9;
    auto array_ptr = ros_message->i_ee;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: m_load
  {
    cdr >> ros_message->m_load;
  }

  // Field name: f_x_cload
  {
    size_t size = 3;
    auto array_ptr = ros_message->f_x_cload;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: i_load
  {
    size_t size = 9;
    auto array_ptr = ros_message->i_load;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: m_total
  {
    cdr >> ros_message->m_total;
  }

  // Field name: f_x_ctotal
  {
    size_t size = 3;
    auto array_ptr = ros_message->f_x_ctotal;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: i_total
  {
    size_t size = 9;
    auto array_ptr = ros_message->i_total;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: o_t_ee
  {
    size_t size = 16;
    auto array_ptr = ros_message->o_t_ee;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: o_t_ee_d
  {
    size_t size = 16;
    auto array_ptr = ros_message->o_t_ee_d;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: o_t_ee_c
  {
    size_t size = 16;
    auto array_ptr = ros_message->o_t_ee_c;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: f_t_ee
  {
    size_t size = 16;
    auto array_ptr = ros_message->f_t_ee;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ee_t_k
  {
    size_t size = 16;
    auto array_ptr = ros_message->ee_t_k;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: time
  {
    cdr >> ros_message->time;
  }

  // Field name: control_command_success_rate
  {
    cdr >> ros_message->control_command_success_rate;
  }

  // Field name: robot_mode
  {
    cdr >> ros_message->robot_mode;
  }

  // Field name: current_errors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_msgs, msg, Errors
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->current_errors))
    {
      return false;
    }
  }

  // Field name: last_motion_errors
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, franka_msgs, msg, Errors
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->last_motion_errors))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_msgs
size_t get_serialized_size_franka_msgs__msg__FrankaRobotState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FrankaRobotState__ros_msg_type * ros_message = static_cast<const _FrankaRobotState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name cartesian_collision
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->cartesian_collision;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_contact
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->cartesian_contact;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name q
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->q;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name q_d
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->q_d;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dq
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->dq;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dq_d
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->dq_d;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ddq_d
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->ddq_d;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->theta;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dtheta
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->dtheta;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tau_j
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->tau_j;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dtau_j
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->dtau_j;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tau_j_d
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->tau_j_d;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name k_f_ext_hat_k
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->k_f_ext_hat_k;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elbow
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->elbow;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elbow_d
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->elbow_d;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elbow_c
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->elbow_c;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delbow_c
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->delbow_c;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ddelbow_c
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->ddelbow_c;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_collision
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->joint_collision;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_contact
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->joint_contact;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name o_f_ext_hat_k
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->o_f_ext_hat_k;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name o_dp_ee_d
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->o_dp_ee_d;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name o_dp_ee_c
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->o_dp_ee_c;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name o_ddp_ee_c
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->o_ddp_ee_c;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tau_ext_hat_filtered
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->tau_ext_hat_filtered;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m_ee
  {
    size_t item_size = sizeof(ros_message->m_ee);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f_x_cee
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->f_x_cee;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name i_ee
  {
    size_t array_size = 9;
    auto array_ptr = ros_message->i_ee;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m_load
  {
    size_t item_size = sizeof(ros_message->m_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f_x_cload
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->f_x_cload;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name i_load
  {
    size_t array_size = 9;
    auto array_ptr = ros_message->i_load;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m_total
  {
    size_t item_size = sizeof(ros_message->m_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f_x_ctotal
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->f_x_ctotal;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name i_total
  {
    size_t array_size = 9;
    auto array_ptr = ros_message->i_total;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name o_t_ee
  {
    size_t array_size = 16;
    auto array_ptr = ros_message->o_t_ee;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name o_t_ee_d
  {
    size_t array_size = 16;
    auto array_ptr = ros_message->o_t_ee_d;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name o_t_ee_c
  {
    size_t array_size = 16;
    auto array_ptr = ros_message->o_t_ee_c;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f_t_ee
  {
    size_t array_size = 16;
    auto array_ptr = ros_message->f_t_ee;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ee_t_k
  {
    size_t array_size = 16;
    auto array_ptr = ros_message->ee_t_k;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time
  {
    size_t item_size = sizeof(ros_message->time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_command_success_rate
  {
    size_t item_size = sizeof(ros_message->control_command_success_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_mode
  {
    size_t item_size = sizeof(ros_message->robot_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_errors

  current_alignment += get_serialized_size_franka_msgs__msg__Errors(
    &(ros_message->current_errors), current_alignment);
  // field.name last_motion_errors

  current_alignment += get_serialized_size_franka_msgs__msg__Errors(
    &(ros_message->last_motion_errors), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FrankaRobotState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_franka_msgs__msg__FrankaRobotState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_msgs
size_t max_serialized_size_franka_msgs__msg__FrankaRobotState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cartesian_collision
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cartesian_contact
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: q
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: q_d
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dq
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dq_d
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ddq_d
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: theta
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dtheta
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tau_j
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dtau_j
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tau_j_d
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: k_f_ext_hat_k
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: elbow
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: elbow_d
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: elbow_c
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delbow_c
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ddelbow_c
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint_collision
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint_contact
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: o_f_ext_hat_k
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: o_dp_ee_d
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: o_dp_ee_c
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: o_ddp_ee_c
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tau_ext_hat_filtered
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: m_ee
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: f_x_cee
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: i_ee
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: m_load
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: f_x_cload
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: i_load
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: m_total
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: f_x_ctotal
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: i_total
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: o_t_ee
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: o_t_ee_d
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: o_t_ee_c
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: f_t_ee
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ee_t_k
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: control_command_success_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: robot_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: current_errors
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_msgs__msg__Errors(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: last_motion_errors
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_franka_msgs__msg__Errors(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = franka_msgs__msg__FrankaRobotState;
    is_plain =
      (
      offsetof(DataType, last_motion_errors) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FrankaRobotState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_franka_msgs__msg__FrankaRobotState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FrankaRobotState = {
  "franka_msgs::msg",
  "FrankaRobotState",
  _FrankaRobotState__cdr_serialize,
  _FrankaRobotState__cdr_deserialize,
  _FrankaRobotState__get_serialized_size,
  _FrankaRobotState__max_serialized_size
};

static rosidl_message_type_support_t _FrankaRobotState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FrankaRobotState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, msg, FrankaRobotState)() {
  return &_FrankaRobotState__type_support;
}

#if defined(__cplusplus)
}
#endif
