// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from franka_msgs:msg/FrankaRobotState.idl
// generated code does not contain a copyright notice
#include "franka_msgs/msg/detail/franka_robot_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "franka_msgs/msg/detail/franka_robot_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace franka_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const franka_msgs::msg::Errors &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  franka_msgs::msg::Errors &);
size_t get_serialized_size(
  const franka_msgs::msg::Errors &,
  size_t current_alignment);
size_t
max_serialized_size_Errors(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace franka_msgs

// functions for franka_msgs::msg::Errors already declared above


namespace franka_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
cdr_serialize(
  const franka_msgs::msg::FrankaRobotState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: cartesian_collision
  {
    cdr << ros_message.cartesian_collision;
  }
  // Member: cartesian_contact
  {
    cdr << ros_message.cartesian_contact;
  }
  // Member: q
  {
    cdr << ros_message.q;
  }
  // Member: q_d
  {
    cdr << ros_message.q_d;
  }
  // Member: dq
  {
    cdr << ros_message.dq;
  }
  // Member: dq_d
  {
    cdr << ros_message.dq_d;
  }
  // Member: ddq_d
  {
    cdr << ros_message.ddq_d;
  }
  // Member: theta
  {
    cdr << ros_message.theta;
  }
  // Member: dtheta
  {
    cdr << ros_message.dtheta;
  }
  // Member: tau_j
  {
    cdr << ros_message.tau_j;
  }
  // Member: dtau_j
  {
    cdr << ros_message.dtau_j;
  }
  // Member: tau_j_d
  {
    cdr << ros_message.tau_j_d;
  }
  // Member: k_f_ext_hat_k
  {
    cdr << ros_message.k_f_ext_hat_k;
  }
  // Member: elbow
  {
    cdr << ros_message.elbow;
  }
  // Member: elbow_d
  {
    cdr << ros_message.elbow_d;
  }
  // Member: elbow_c
  {
    cdr << ros_message.elbow_c;
  }
  // Member: delbow_c
  {
    cdr << ros_message.delbow_c;
  }
  // Member: ddelbow_c
  {
    cdr << ros_message.ddelbow_c;
  }
  // Member: joint_collision
  {
    cdr << ros_message.joint_collision;
  }
  // Member: joint_contact
  {
    cdr << ros_message.joint_contact;
  }
  // Member: o_f_ext_hat_k
  {
    cdr << ros_message.o_f_ext_hat_k;
  }
  // Member: o_dp_ee_d
  {
    cdr << ros_message.o_dp_ee_d;
  }
  // Member: o_dp_ee_c
  {
    cdr << ros_message.o_dp_ee_c;
  }
  // Member: o_ddp_ee_c
  {
    cdr << ros_message.o_ddp_ee_c;
  }
  // Member: tau_ext_hat_filtered
  {
    cdr << ros_message.tau_ext_hat_filtered;
  }
  // Member: m_ee
  cdr << ros_message.m_ee;
  // Member: f_x_cee
  {
    cdr << ros_message.f_x_cee;
  }
  // Member: i_ee
  {
    cdr << ros_message.i_ee;
  }
  // Member: m_load
  cdr << ros_message.m_load;
  // Member: f_x_cload
  {
    cdr << ros_message.f_x_cload;
  }
  // Member: i_load
  {
    cdr << ros_message.i_load;
  }
  // Member: m_total
  cdr << ros_message.m_total;
  // Member: f_x_ctotal
  {
    cdr << ros_message.f_x_ctotal;
  }
  // Member: i_total
  {
    cdr << ros_message.i_total;
  }
  // Member: o_t_ee
  {
    cdr << ros_message.o_t_ee;
  }
  // Member: o_t_ee_d
  {
    cdr << ros_message.o_t_ee_d;
  }
  // Member: o_t_ee_c
  {
    cdr << ros_message.o_t_ee_c;
  }
  // Member: f_t_ee
  {
    cdr << ros_message.f_t_ee;
  }
  // Member: ee_t_k
  {
    cdr << ros_message.ee_t_k;
  }
  // Member: time
  cdr << ros_message.time;
  // Member: control_command_success_rate
  cdr << ros_message.control_command_success_rate;
  // Member: robot_mode
  cdr << ros_message.robot_mode;
  // Member: current_errors
  franka_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.current_errors,
    cdr);
  // Member: last_motion_errors
  franka_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.last_motion_errors,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  franka_msgs::msg::FrankaRobotState & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: cartesian_collision
  {
    cdr >> ros_message.cartesian_collision;
  }

  // Member: cartesian_contact
  {
    cdr >> ros_message.cartesian_contact;
  }

  // Member: q
  {
    cdr >> ros_message.q;
  }

  // Member: q_d
  {
    cdr >> ros_message.q_d;
  }

  // Member: dq
  {
    cdr >> ros_message.dq;
  }

  // Member: dq_d
  {
    cdr >> ros_message.dq_d;
  }

  // Member: ddq_d
  {
    cdr >> ros_message.ddq_d;
  }

  // Member: theta
  {
    cdr >> ros_message.theta;
  }

  // Member: dtheta
  {
    cdr >> ros_message.dtheta;
  }

  // Member: tau_j
  {
    cdr >> ros_message.tau_j;
  }

  // Member: dtau_j
  {
    cdr >> ros_message.dtau_j;
  }

  // Member: tau_j_d
  {
    cdr >> ros_message.tau_j_d;
  }

  // Member: k_f_ext_hat_k
  {
    cdr >> ros_message.k_f_ext_hat_k;
  }

  // Member: elbow
  {
    cdr >> ros_message.elbow;
  }

  // Member: elbow_d
  {
    cdr >> ros_message.elbow_d;
  }

  // Member: elbow_c
  {
    cdr >> ros_message.elbow_c;
  }

  // Member: delbow_c
  {
    cdr >> ros_message.delbow_c;
  }

  // Member: ddelbow_c
  {
    cdr >> ros_message.ddelbow_c;
  }

  // Member: joint_collision
  {
    cdr >> ros_message.joint_collision;
  }

  // Member: joint_contact
  {
    cdr >> ros_message.joint_contact;
  }

  // Member: o_f_ext_hat_k
  {
    cdr >> ros_message.o_f_ext_hat_k;
  }

  // Member: o_dp_ee_d
  {
    cdr >> ros_message.o_dp_ee_d;
  }

  // Member: o_dp_ee_c
  {
    cdr >> ros_message.o_dp_ee_c;
  }

  // Member: o_ddp_ee_c
  {
    cdr >> ros_message.o_ddp_ee_c;
  }

  // Member: tau_ext_hat_filtered
  {
    cdr >> ros_message.tau_ext_hat_filtered;
  }

  // Member: m_ee
  cdr >> ros_message.m_ee;

  // Member: f_x_cee
  {
    cdr >> ros_message.f_x_cee;
  }

  // Member: i_ee
  {
    cdr >> ros_message.i_ee;
  }

  // Member: m_load
  cdr >> ros_message.m_load;

  // Member: f_x_cload
  {
    cdr >> ros_message.f_x_cload;
  }

  // Member: i_load
  {
    cdr >> ros_message.i_load;
  }

  // Member: m_total
  cdr >> ros_message.m_total;

  // Member: f_x_ctotal
  {
    cdr >> ros_message.f_x_ctotal;
  }

  // Member: i_total
  {
    cdr >> ros_message.i_total;
  }

  // Member: o_t_ee
  {
    cdr >> ros_message.o_t_ee;
  }

  // Member: o_t_ee_d
  {
    cdr >> ros_message.o_t_ee_d;
  }

  // Member: o_t_ee_c
  {
    cdr >> ros_message.o_t_ee_c;
  }

  // Member: f_t_ee
  {
    cdr >> ros_message.f_t_ee;
  }

  // Member: ee_t_k
  {
    cdr >> ros_message.ee_t_k;
  }

  // Member: time
  cdr >> ros_message.time;

  // Member: control_command_success_rate
  cdr >> ros_message.control_command_success_rate;

  // Member: robot_mode
  cdr >> ros_message.robot_mode;

  // Member: current_errors
  franka_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.current_errors);

  // Member: last_motion_errors
  franka_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.last_motion_errors);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
get_serialized_size(
  const franka_msgs::msg::FrankaRobotState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: cartesian_collision
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.cartesian_collision[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cartesian_contact
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.cartesian_contact[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: q
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.q[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: q_d
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.q_d[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dq
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.dq[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dq_d
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.dq_d[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ddq_d
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.ddq_d[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.theta[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dtheta
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.dtheta[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tau_j
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.tau_j[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dtau_j
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.dtau_j[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tau_j_d
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.tau_j_d[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k_f_ext_hat_k
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.k_f_ext_hat_k[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: elbow
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.elbow[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: elbow_d
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.elbow_d[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: elbow_c
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.elbow_c[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delbow_c
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.delbow_c[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ddelbow_c
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.ddelbow_c[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_collision
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.joint_collision[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_contact
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.joint_contact[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: o_f_ext_hat_k
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.o_f_ext_hat_k[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: o_dp_ee_d
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.o_dp_ee_d[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: o_dp_ee_c
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.o_dp_ee_c[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: o_ddp_ee_c
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.o_ddp_ee_c[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tau_ext_hat_filtered
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.tau_ext_hat_filtered[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m_ee
  {
    size_t item_size = sizeof(ros_message.m_ee);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f_x_cee
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.f_x_cee[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: i_ee
  {
    size_t array_size = 9;
    size_t item_size = sizeof(ros_message.i_ee[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m_load
  {
    size_t item_size = sizeof(ros_message.m_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f_x_cload
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.f_x_cload[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: i_load
  {
    size_t array_size = 9;
    size_t item_size = sizeof(ros_message.i_load[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m_total
  {
    size_t item_size = sizeof(ros_message.m_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f_x_ctotal
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.f_x_ctotal[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: i_total
  {
    size_t array_size = 9;
    size_t item_size = sizeof(ros_message.i_total[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: o_t_ee
  {
    size_t array_size = 16;
    size_t item_size = sizeof(ros_message.o_t_ee[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: o_t_ee_d
  {
    size_t array_size = 16;
    size_t item_size = sizeof(ros_message.o_t_ee_d[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: o_t_ee_c
  {
    size_t array_size = 16;
    size_t item_size = sizeof(ros_message.o_t_ee_c[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f_t_ee
  {
    size_t array_size = 16;
    size_t item_size = sizeof(ros_message.f_t_ee[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ee_t_k
  {
    size_t array_size = 16;
    size_t item_size = sizeof(ros_message.ee_t_k[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time
  {
    size_t item_size = sizeof(ros_message.time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: control_command_success_rate
  {
    size_t item_size = sizeof(ros_message.control_command_success_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_mode
  {
    size_t item_size = sizeof(ros_message.robot_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_errors

  current_alignment +=
    franka_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.current_errors, current_alignment);
  // Member: last_motion_errors

  current_alignment +=
    franka_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.last_motion_errors, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
max_serialized_size_FrankaRobotState(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: cartesian_collision
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cartesian_contact
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: q
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: q_d
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dq
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dq_d
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ddq_d
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dtheta
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tau_j
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dtau_j
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tau_j_d
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: k_f_ext_hat_k
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: elbow
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: elbow_d
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: elbow_c
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: delbow_c
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ddelbow_c
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint_collision
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint_contact
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: o_f_ext_hat_k
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: o_dp_ee_d
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: o_dp_ee_c
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: o_ddp_ee_c
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tau_ext_hat_filtered
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: m_ee
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: f_x_cee
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: i_ee
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: m_load
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: f_x_cload
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: i_load
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: m_total
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: f_x_ctotal
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: i_total
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: o_t_ee
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: o_t_ee_d
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: o_t_ee_c
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: f_t_ee
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ee_t_k
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: control_command_success_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: robot_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: current_errors
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        franka_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Errors(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: last_motion_errors
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        franka_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Errors(
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
    using DataType = franka_msgs::msg::FrankaRobotState;
    is_plain =
      (
      offsetof(DataType, last_motion_errors) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _FrankaRobotState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const franka_msgs::msg::FrankaRobotState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FrankaRobotState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<franka_msgs::msg::FrankaRobotState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FrankaRobotState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const franka_msgs::msg::FrankaRobotState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FrankaRobotState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FrankaRobotState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FrankaRobotState__callbacks = {
  "franka_msgs::msg",
  "FrankaRobotState",
  _FrankaRobotState__cdr_serialize,
  _FrankaRobotState__cdr_deserialize,
  _FrankaRobotState__get_serialized_size,
  _FrankaRobotState__max_serialized_size
};

static rosidl_message_type_support_t _FrankaRobotState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FrankaRobotState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace franka_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_franka_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::msg::FrankaRobotState>()
{
  return &franka_msgs::msg::typesupport_fastrtps_cpp::_FrankaRobotState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, msg, FrankaRobotState)() {
  return &franka_msgs::msg::typesupport_fastrtps_cpp::_FrankaRobotState__handle;
}

#ifdef __cplusplus
}
#endif
