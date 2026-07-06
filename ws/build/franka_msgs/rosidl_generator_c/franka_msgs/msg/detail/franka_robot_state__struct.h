// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franka_msgs:msg/FrankaRobotState.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__STRUCT_H_
#define FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROBOT_MODE_OTHER'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_OTHER = 0
};

/// Constant 'ROBOT_MODE_IDLE'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_IDLE = 1
};

/// Constant 'ROBOT_MODE_MOVE'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_MOVE = 2
};

/// Constant 'ROBOT_MODE_GUIDING'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_GUIDING = 3
};

/// Constant 'ROBOT_MODE_REFLEX'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_REFLEX = 4
};

/// Constant 'ROBOT_MODE_USER_STOPPED'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_USER_STOPPED = 5
};

/// Constant 'ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY'.
enum
{
  franka_msgs__msg__FrankaRobotState__ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY = 6
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'current_errors'
// Member 'last_motion_errors'
#include "franka_msgs/msg/detail/errors__struct.h"

/// Struct defined in msg/FrankaRobotState in the package franka_msgs.
typedef struct franka_msgs__msg__FrankaRobotState
{
  std_msgs__msg__Header header;
  double cartesian_collision[6];
  double cartesian_contact[6];
  double q[7];
  double q_d[7];
  double dq[7];
  double dq_d[7];
  double ddq_d[7];
  double theta[7];
  double dtheta[7];
  double tau_j[7];
  double dtau_j[7];
  double tau_j_d[7];
  double k_f_ext_hat_k[6];
  double elbow[2];
  double elbow_d[2];
  double elbow_c[2];
  double delbow_c[2];
  double ddelbow_c[2];
  double joint_collision[7];
  double joint_contact[7];
  double o_f_ext_hat_k[6];
  double o_dp_ee_d[6];
  double o_dp_ee_c[6];
  double o_ddp_ee_c[6];
  double tau_ext_hat_filtered[7];
  double m_ee;
  double f_x_cee[3];
  double i_ee[9];
  double m_load;
  double f_x_cload[3];
  double i_load[9];
  double m_total;
  double f_x_ctotal[3];
  double i_total[9];
  double o_t_ee[16];
  double o_t_ee_d[16];
  double o_t_ee_c[16];
  double f_t_ee[16];
  double ee_t_k[16];
  double time;
  double control_command_success_rate;
  uint8_t robot_mode;
  franka_msgs__msg__Errors current_errors;
  franka_msgs__msg__Errors last_motion_errors;
} franka_msgs__msg__FrankaRobotState;

// Struct for a sequence of franka_msgs__msg__FrankaRobotState.
typedef struct franka_msgs__msg__FrankaRobotState__Sequence
{
  franka_msgs__msg__FrankaRobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__msg__FrankaRobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__STRUCT_H_
