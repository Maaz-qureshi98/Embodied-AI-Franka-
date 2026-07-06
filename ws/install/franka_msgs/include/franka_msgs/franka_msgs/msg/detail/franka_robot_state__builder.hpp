// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_msgs:msg/FrankaRobotState.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__BUILDER_HPP_
#define FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_msgs/msg/detail/franka_robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_msgs
{

namespace msg
{

namespace builder
{

class Init_FrankaRobotState_last_motion_errors
{
public:
  explicit Init_FrankaRobotState_last_motion_errors(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  ::franka_msgs::msg::FrankaRobotState last_motion_errors(::franka_msgs::msg::FrankaRobotState::_last_motion_errors_type arg)
  {
    msg_.last_motion_errors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_current_errors
{
public:
  explicit Init_FrankaRobotState_current_errors(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_last_motion_errors current_errors(::franka_msgs::msg::FrankaRobotState::_current_errors_type arg)
  {
    msg_.current_errors = std::move(arg);
    return Init_FrankaRobotState_last_motion_errors(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_robot_mode
{
public:
  explicit Init_FrankaRobotState_robot_mode(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_current_errors robot_mode(::franka_msgs::msg::FrankaRobotState::_robot_mode_type arg)
  {
    msg_.robot_mode = std::move(arg);
    return Init_FrankaRobotState_current_errors(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_control_command_success_rate
{
public:
  explicit Init_FrankaRobotState_control_command_success_rate(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_robot_mode control_command_success_rate(::franka_msgs::msg::FrankaRobotState::_control_command_success_rate_type arg)
  {
    msg_.control_command_success_rate = std::move(arg);
    return Init_FrankaRobotState_robot_mode(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_time
{
public:
  explicit Init_FrankaRobotState_time(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_control_command_success_rate time(::franka_msgs::msg::FrankaRobotState::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_FrankaRobotState_control_command_success_rate(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_ee_t_k
{
public:
  explicit Init_FrankaRobotState_ee_t_k(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_time ee_t_k(::franka_msgs::msg::FrankaRobotState::_ee_t_k_type arg)
  {
    msg_.ee_t_k = std::move(arg);
    return Init_FrankaRobotState_time(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_f_t_ee
{
public:
  explicit Init_FrankaRobotState_f_t_ee(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_ee_t_k f_t_ee(::franka_msgs::msg::FrankaRobotState::_f_t_ee_type arg)
  {
    msg_.f_t_ee = std::move(arg);
    return Init_FrankaRobotState_ee_t_k(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_o_t_ee_c
{
public:
  explicit Init_FrankaRobotState_o_t_ee_c(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_f_t_ee o_t_ee_c(::franka_msgs::msg::FrankaRobotState::_o_t_ee_c_type arg)
  {
    msg_.o_t_ee_c = std::move(arg);
    return Init_FrankaRobotState_f_t_ee(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_o_t_ee_d
{
public:
  explicit Init_FrankaRobotState_o_t_ee_d(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_o_t_ee_c o_t_ee_d(::franka_msgs::msg::FrankaRobotState::_o_t_ee_d_type arg)
  {
    msg_.o_t_ee_d = std::move(arg);
    return Init_FrankaRobotState_o_t_ee_c(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_o_t_ee
{
public:
  explicit Init_FrankaRobotState_o_t_ee(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_o_t_ee_d o_t_ee(::franka_msgs::msg::FrankaRobotState::_o_t_ee_type arg)
  {
    msg_.o_t_ee = std::move(arg);
    return Init_FrankaRobotState_o_t_ee_d(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_i_total
{
public:
  explicit Init_FrankaRobotState_i_total(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_o_t_ee i_total(::franka_msgs::msg::FrankaRobotState::_i_total_type arg)
  {
    msg_.i_total = std::move(arg);
    return Init_FrankaRobotState_o_t_ee(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_f_x_ctotal
{
public:
  explicit Init_FrankaRobotState_f_x_ctotal(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_i_total f_x_ctotal(::franka_msgs::msg::FrankaRobotState::_f_x_ctotal_type arg)
  {
    msg_.f_x_ctotal = std::move(arg);
    return Init_FrankaRobotState_i_total(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_m_total
{
public:
  explicit Init_FrankaRobotState_m_total(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_f_x_ctotal m_total(::franka_msgs::msg::FrankaRobotState::_m_total_type arg)
  {
    msg_.m_total = std::move(arg);
    return Init_FrankaRobotState_f_x_ctotal(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_i_load
{
public:
  explicit Init_FrankaRobotState_i_load(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_m_total i_load(::franka_msgs::msg::FrankaRobotState::_i_load_type arg)
  {
    msg_.i_load = std::move(arg);
    return Init_FrankaRobotState_m_total(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_f_x_cload
{
public:
  explicit Init_FrankaRobotState_f_x_cload(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_i_load f_x_cload(::franka_msgs::msg::FrankaRobotState::_f_x_cload_type arg)
  {
    msg_.f_x_cload = std::move(arg);
    return Init_FrankaRobotState_i_load(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_m_load
{
public:
  explicit Init_FrankaRobotState_m_load(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_f_x_cload m_load(::franka_msgs::msg::FrankaRobotState::_m_load_type arg)
  {
    msg_.m_load = std::move(arg);
    return Init_FrankaRobotState_f_x_cload(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_i_ee
{
public:
  explicit Init_FrankaRobotState_i_ee(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_m_load i_ee(::franka_msgs::msg::FrankaRobotState::_i_ee_type arg)
  {
    msg_.i_ee = std::move(arg);
    return Init_FrankaRobotState_m_load(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_f_x_cee
{
public:
  explicit Init_FrankaRobotState_f_x_cee(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_i_ee f_x_cee(::franka_msgs::msg::FrankaRobotState::_f_x_cee_type arg)
  {
    msg_.f_x_cee = std::move(arg);
    return Init_FrankaRobotState_i_ee(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_m_ee
{
public:
  explicit Init_FrankaRobotState_m_ee(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_f_x_cee m_ee(::franka_msgs::msg::FrankaRobotState::_m_ee_type arg)
  {
    msg_.m_ee = std::move(arg);
    return Init_FrankaRobotState_f_x_cee(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_tau_ext_hat_filtered
{
public:
  explicit Init_FrankaRobotState_tau_ext_hat_filtered(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_m_ee tau_ext_hat_filtered(::franka_msgs::msg::FrankaRobotState::_tau_ext_hat_filtered_type arg)
  {
    msg_.tau_ext_hat_filtered = std::move(arg);
    return Init_FrankaRobotState_m_ee(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_o_ddp_ee_c
{
public:
  explicit Init_FrankaRobotState_o_ddp_ee_c(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_tau_ext_hat_filtered o_ddp_ee_c(::franka_msgs::msg::FrankaRobotState::_o_ddp_ee_c_type arg)
  {
    msg_.o_ddp_ee_c = std::move(arg);
    return Init_FrankaRobotState_tau_ext_hat_filtered(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_o_dp_ee_c
{
public:
  explicit Init_FrankaRobotState_o_dp_ee_c(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_o_ddp_ee_c o_dp_ee_c(::franka_msgs::msg::FrankaRobotState::_o_dp_ee_c_type arg)
  {
    msg_.o_dp_ee_c = std::move(arg);
    return Init_FrankaRobotState_o_ddp_ee_c(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_o_dp_ee_d
{
public:
  explicit Init_FrankaRobotState_o_dp_ee_d(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_o_dp_ee_c o_dp_ee_d(::franka_msgs::msg::FrankaRobotState::_o_dp_ee_d_type arg)
  {
    msg_.o_dp_ee_d = std::move(arg);
    return Init_FrankaRobotState_o_dp_ee_c(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_o_f_ext_hat_k
{
public:
  explicit Init_FrankaRobotState_o_f_ext_hat_k(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_o_dp_ee_d o_f_ext_hat_k(::franka_msgs::msg::FrankaRobotState::_o_f_ext_hat_k_type arg)
  {
    msg_.o_f_ext_hat_k = std::move(arg);
    return Init_FrankaRobotState_o_dp_ee_d(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_joint_contact
{
public:
  explicit Init_FrankaRobotState_joint_contact(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_o_f_ext_hat_k joint_contact(::franka_msgs::msg::FrankaRobotState::_joint_contact_type arg)
  {
    msg_.joint_contact = std::move(arg);
    return Init_FrankaRobotState_o_f_ext_hat_k(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_joint_collision
{
public:
  explicit Init_FrankaRobotState_joint_collision(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_joint_contact joint_collision(::franka_msgs::msg::FrankaRobotState::_joint_collision_type arg)
  {
    msg_.joint_collision = std::move(arg);
    return Init_FrankaRobotState_joint_contact(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_ddelbow_c
{
public:
  explicit Init_FrankaRobotState_ddelbow_c(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_joint_collision ddelbow_c(::franka_msgs::msg::FrankaRobotState::_ddelbow_c_type arg)
  {
    msg_.ddelbow_c = std::move(arg);
    return Init_FrankaRobotState_joint_collision(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_delbow_c
{
public:
  explicit Init_FrankaRobotState_delbow_c(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_ddelbow_c delbow_c(::franka_msgs::msg::FrankaRobotState::_delbow_c_type arg)
  {
    msg_.delbow_c = std::move(arg);
    return Init_FrankaRobotState_ddelbow_c(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_elbow_c
{
public:
  explicit Init_FrankaRobotState_elbow_c(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_delbow_c elbow_c(::franka_msgs::msg::FrankaRobotState::_elbow_c_type arg)
  {
    msg_.elbow_c = std::move(arg);
    return Init_FrankaRobotState_delbow_c(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_elbow_d
{
public:
  explicit Init_FrankaRobotState_elbow_d(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_elbow_c elbow_d(::franka_msgs::msg::FrankaRobotState::_elbow_d_type arg)
  {
    msg_.elbow_d = std::move(arg);
    return Init_FrankaRobotState_elbow_c(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_elbow
{
public:
  explicit Init_FrankaRobotState_elbow(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_elbow_d elbow(::franka_msgs::msg::FrankaRobotState::_elbow_type arg)
  {
    msg_.elbow = std::move(arg);
    return Init_FrankaRobotState_elbow_d(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_k_f_ext_hat_k
{
public:
  explicit Init_FrankaRobotState_k_f_ext_hat_k(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_elbow k_f_ext_hat_k(::franka_msgs::msg::FrankaRobotState::_k_f_ext_hat_k_type arg)
  {
    msg_.k_f_ext_hat_k = std::move(arg);
    return Init_FrankaRobotState_elbow(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_tau_j_d
{
public:
  explicit Init_FrankaRobotState_tau_j_d(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_k_f_ext_hat_k tau_j_d(::franka_msgs::msg::FrankaRobotState::_tau_j_d_type arg)
  {
    msg_.tau_j_d = std::move(arg);
    return Init_FrankaRobotState_k_f_ext_hat_k(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_dtau_j
{
public:
  explicit Init_FrankaRobotState_dtau_j(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_tau_j_d dtau_j(::franka_msgs::msg::FrankaRobotState::_dtau_j_type arg)
  {
    msg_.dtau_j = std::move(arg);
    return Init_FrankaRobotState_tau_j_d(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_tau_j
{
public:
  explicit Init_FrankaRobotState_tau_j(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_dtau_j tau_j(::franka_msgs::msg::FrankaRobotState::_tau_j_type arg)
  {
    msg_.tau_j = std::move(arg);
    return Init_FrankaRobotState_dtau_j(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_dtheta
{
public:
  explicit Init_FrankaRobotState_dtheta(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_tau_j dtheta(::franka_msgs::msg::FrankaRobotState::_dtheta_type arg)
  {
    msg_.dtheta = std::move(arg);
    return Init_FrankaRobotState_tau_j(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_theta
{
public:
  explicit Init_FrankaRobotState_theta(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_dtheta theta(::franka_msgs::msg::FrankaRobotState::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_FrankaRobotState_dtheta(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_ddq_d
{
public:
  explicit Init_FrankaRobotState_ddq_d(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_theta ddq_d(::franka_msgs::msg::FrankaRobotState::_ddq_d_type arg)
  {
    msg_.ddq_d = std::move(arg);
    return Init_FrankaRobotState_theta(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_dq_d
{
public:
  explicit Init_FrankaRobotState_dq_d(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_ddq_d dq_d(::franka_msgs::msg::FrankaRobotState::_dq_d_type arg)
  {
    msg_.dq_d = std::move(arg);
    return Init_FrankaRobotState_ddq_d(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_dq
{
public:
  explicit Init_FrankaRobotState_dq(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_dq_d dq(::franka_msgs::msg::FrankaRobotState::_dq_type arg)
  {
    msg_.dq = std::move(arg);
    return Init_FrankaRobotState_dq_d(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_q_d
{
public:
  explicit Init_FrankaRobotState_q_d(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_dq q_d(::franka_msgs::msg::FrankaRobotState::_q_d_type arg)
  {
    msg_.q_d = std::move(arg);
    return Init_FrankaRobotState_dq(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_q
{
public:
  explicit Init_FrankaRobotState_q(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_q_d q(::franka_msgs::msg::FrankaRobotState::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_FrankaRobotState_q_d(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_cartesian_contact
{
public:
  explicit Init_FrankaRobotState_cartesian_contact(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_q cartesian_contact(::franka_msgs::msg::FrankaRobotState::_cartesian_contact_type arg)
  {
    msg_.cartesian_contact = std::move(arg);
    return Init_FrankaRobotState_q(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_cartesian_collision
{
public:
  explicit Init_FrankaRobotState_cartesian_collision(::franka_msgs::msg::FrankaRobotState & msg)
  : msg_(msg)
  {}
  Init_FrankaRobotState_cartesian_contact cartesian_collision(::franka_msgs::msg::FrankaRobotState::_cartesian_collision_type arg)
  {
    msg_.cartesian_collision = std::move(arg);
    return Init_FrankaRobotState_cartesian_contact(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

class Init_FrankaRobotState_header
{
public:
  Init_FrankaRobotState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FrankaRobotState_cartesian_collision header(::franka_msgs::msg::FrankaRobotState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FrankaRobotState_cartesian_collision(msg_);
  }

private:
  ::franka_msgs::msg::FrankaRobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::msg::FrankaRobotState>()
{
  return franka_msgs::msg::builder::Init_FrankaRobotState_header();
}

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__BUILDER_HPP_
