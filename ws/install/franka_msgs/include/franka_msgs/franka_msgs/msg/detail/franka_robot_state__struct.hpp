// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franka_msgs:msg/FrankaRobotState.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__STRUCT_HPP_
#define FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'current_errors'
// Member 'last_motion_errors'
#include "franka_msgs/msg/detail/errors__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__franka_msgs__msg__FrankaRobotState __attribute__((deprecated))
#else
# define DEPRECATED__franka_msgs__msg__FrankaRobotState __declspec(deprecated)
#endif

namespace franka_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FrankaRobotState_
{
  using Type = FrankaRobotState_<ContainerAllocator>;

  explicit FrankaRobotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    current_errors(_init),
    last_motion_errors(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 6>::iterator, double>(this->cartesian_collision.begin(), this->cartesian_collision.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->cartesian_contact.begin(), this->cartesian_contact.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->q.begin(), this->q.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->q_d.begin(), this->q_d.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->dq.begin(), this->dq.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->dq_d.begin(), this->dq_d.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->ddq_d.begin(), this->ddq_d.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->theta.begin(), this->theta.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->dtheta.begin(), this->dtheta.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->tau_j.begin(), this->tau_j.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->dtau_j.begin(), this->dtau_j.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->tau_j_d.begin(), this->tau_j_d.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->k_f_ext_hat_k.begin(), this->k_f_ext_hat_k.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->elbow.begin(), this->elbow.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->elbow_d.begin(), this->elbow_d.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->elbow_c.begin(), this->elbow_c.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->delbow_c.begin(), this->delbow_c.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->ddelbow_c.begin(), this->ddelbow_c.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_collision.begin(), this->joint_collision.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_contact.begin(), this->joint_contact.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->o_f_ext_hat_k.begin(), this->o_f_ext_hat_k.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->o_dp_ee_d.begin(), this->o_dp_ee_d.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->o_dp_ee_c.begin(), this->o_dp_ee_c.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->o_ddp_ee_c.begin(), this->o_ddp_ee_c.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->tau_ext_hat_filtered.begin(), this->tau_ext_hat_filtered.end(), 0.0);
      this->m_ee = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->f_x_cee.begin(), this->f_x_cee.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->i_ee.begin(), this->i_ee.end(), 0.0);
      this->m_load = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->f_x_cload.begin(), this->f_x_cload.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->i_load.begin(), this->i_load.end(), 0.0);
      this->m_total = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->f_x_ctotal.begin(), this->f_x_ctotal.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->i_total.begin(), this->i_total.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->o_t_ee.begin(), this->o_t_ee.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->o_t_ee_d.begin(), this->o_t_ee_d.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->o_t_ee_c.begin(), this->o_t_ee_c.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->f_t_ee.begin(), this->f_t_ee.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->ee_t_k.begin(), this->ee_t_k.end(), 0.0);
      this->time = 0.0;
      this->control_command_success_rate = 0.0;
      this->robot_mode = 0;
    }
  }

  explicit FrankaRobotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    cartesian_collision(_alloc),
    cartesian_contact(_alloc),
    q(_alloc),
    q_d(_alloc),
    dq(_alloc),
    dq_d(_alloc),
    ddq_d(_alloc),
    theta(_alloc),
    dtheta(_alloc),
    tau_j(_alloc),
    dtau_j(_alloc),
    tau_j_d(_alloc),
    k_f_ext_hat_k(_alloc),
    elbow(_alloc),
    elbow_d(_alloc),
    elbow_c(_alloc),
    delbow_c(_alloc),
    ddelbow_c(_alloc),
    joint_collision(_alloc),
    joint_contact(_alloc),
    o_f_ext_hat_k(_alloc),
    o_dp_ee_d(_alloc),
    o_dp_ee_c(_alloc),
    o_ddp_ee_c(_alloc),
    tau_ext_hat_filtered(_alloc),
    f_x_cee(_alloc),
    i_ee(_alloc),
    f_x_cload(_alloc),
    i_load(_alloc),
    f_x_ctotal(_alloc),
    i_total(_alloc),
    o_t_ee(_alloc),
    o_t_ee_d(_alloc),
    o_t_ee_c(_alloc),
    f_t_ee(_alloc),
    ee_t_k(_alloc),
    current_errors(_alloc, _init),
    last_motion_errors(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 6>::iterator, double>(this->cartesian_collision.begin(), this->cartesian_collision.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->cartesian_contact.begin(), this->cartesian_contact.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->q.begin(), this->q.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->q_d.begin(), this->q_d.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->dq.begin(), this->dq.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->dq_d.begin(), this->dq_d.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->ddq_d.begin(), this->ddq_d.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->theta.begin(), this->theta.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->dtheta.begin(), this->dtheta.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->tau_j.begin(), this->tau_j.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->dtau_j.begin(), this->dtau_j.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->tau_j_d.begin(), this->tau_j_d.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->k_f_ext_hat_k.begin(), this->k_f_ext_hat_k.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->elbow.begin(), this->elbow.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->elbow_d.begin(), this->elbow_d.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->elbow_c.begin(), this->elbow_c.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->delbow_c.begin(), this->delbow_c.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->ddelbow_c.begin(), this->ddelbow_c.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_collision.begin(), this->joint_collision.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->joint_contact.begin(), this->joint_contact.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->o_f_ext_hat_k.begin(), this->o_f_ext_hat_k.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->o_dp_ee_d.begin(), this->o_dp_ee_d.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->o_dp_ee_c.begin(), this->o_dp_ee_c.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->o_ddp_ee_c.begin(), this->o_ddp_ee_c.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->tau_ext_hat_filtered.begin(), this->tau_ext_hat_filtered.end(), 0.0);
      this->m_ee = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->f_x_cee.begin(), this->f_x_cee.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->i_ee.begin(), this->i_ee.end(), 0.0);
      this->m_load = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->f_x_cload.begin(), this->f_x_cload.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->i_load.begin(), this->i_load.end(), 0.0);
      this->m_total = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->f_x_ctotal.begin(), this->f_x_ctotal.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->i_total.begin(), this->i_total.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->o_t_ee.begin(), this->o_t_ee.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->o_t_ee_d.begin(), this->o_t_ee_d.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->o_t_ee_c.begin(), this->o_t_ee_c.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->f_t_ee.begin(), this->f_t_ee.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->ee_t_k.begin(), this->ee_t_k.end(), 0.0);
      this->time = 0.0;
      this->control_command_success_rate = 0.0;
      this->robot_mode = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cartesian_collision_type =
    std::array<double, 6>;
  _cartesian_collision_type cartesian_collision;
  using _cartesian_contact_type =
    std::array<double, 6>;
  _cartesian_contact_type cartesian_contact;
  using _q_type =
    std::array<double, 7>;
  _q_type q;
  using _q_d_type =
    std::array<double, 7>;
  _q_d_type q_d;
  using _dq_type =
    std::array<double, 7>;
  _dq_type dq;
  using _dq_d_type =
    std::array<double, 7>;
  _dq_d_type dq_d;
  using _ddq_d_type =
    std::array<double, 7>;
  _ddq_d_type ddq_d;
  using _theta_type =
    std::array<double, 7>;
  _theta_type theta;
  using _dtheta_type =
    std::array<double, 7>;
  _dtheta_type dtheta;
  using _tau_j_type =
    std::array<double, 7>;
  _tau_j_type tau_j;
  using _dtau_j_type =
    std::array<double, 7>;
  _dtau_j_type dtau_j;
  using _tau_j_d_type =
    std::array<double, 7>;
  _tau_j_d_type tau_j_d;
  using _k_f_ext_hat_k_type =
    std::array<double, 6>;
  _k_f_ext_hat_k_type k_f_ext_hat_k;
  using _elbow_type =
    std::array<double, 2>;
  _elbow_type elbow;
  using _elbow_d_type =
    std::array<double, 2>;
  _elbow_d_type elbow_d;
  using _elbow_c_type =
    std::array<double, 2>;
  _elbow_c_type elbow_c;
  using _delbow_c_type =
    std::array<double, 2>;
  _delbow_c_type delbow_c;
  using _ddelbow_c_type =
    std::array<double, 2>;
  _ddelbow_c_type ddelbow_c;
  using _joint_collision_type =
    std::array<double, 7>;
  _joint_collision_type joint_collision;
  using _joint_contact_type =
    std::array<double, 7>;
  _joint_contact_type joint_contact;
  using _o_f_ext_hat_k_type =
    std::array<double, 6>;
  _o_f_ext_hat_k_type o_f_ext_hat_k;
  using _o_dp_ee_d_type =
    std::array<double, 6>;
  _o_dp_ee_d_type o_dp_ee_d;
  using _o_dp_ee_c_type =
    std::array<double, 6>;
  _o_dp_ee_c_type o_dp_ee_c;
  using _o_ddp_ee_c_type =
    std::array<double, 6>;
  _o_ddp_ee_c_type o_ddp_ee_c;
  using _tau_ext_hat_filtered_type =
    std::array<double, 7>;
  _tau_ext_hat_filtered_type tau_ext_hat_filtered;
  using _m_ee_type =
    double;
  _m_ee_type m_ee;
  using _f_x_cee_type =
    std::array<double, 3>;
  _f_x_cee_type f_x_cee;
  using _i_ee_type =
    std::array<double, 9>;
  _i_ee_type i_ee;
  using _m_load_type =
    double;
  _m_load_type m_load;
  using _f_x_cload_type =
    std::array<double, 3>;
  _f_x_cload_type f_x_cload;
  using _i_load_type =
    std::array<double, 9>;
  _i_load_type i_load;
  using _m_total_type =
    double;
  _m_total_type m_total;
  using _f_x_ctotal_type =
    std::array<double, 3>;
  _f_x_ctotal_type f_x_ctotal;
  using _i_total_type =
    std::array<double, 9>;
  _i_total_type i_total;
  using _o_t_ee_type =
    std::array<double, 16>;
  _o_t_ee_type o_t_ee;
  using _o_t_ee_d_type =
    std::array<double, 16>;
  _o_t_ee_d_type o_t_ee_d;
  using _o_t_ee_c_type =
    std::array<double, 16>;
  _o_t_ee_c_type o_t_ee_c;
  using _f_t_ee_type =
    std::array<double, 16>;
  _f_t_ee_type f_t_ee;
  using _ee_t_k_type =
    std::array<double, 16>;
  _ee_t_k_type ee_t_k;
  using _time_type =
    double;
  _time_type time;
  using _control_command_success_rate_type =
    double;
  _control_command_success_rate_type control_command_success_rate;
  using _robot_mode_type =
    uint8_t;
  _robot_mode_type robot_mode;
  using _current_errors_type =
    franka_msgs::msg::Errors_<ContainerAllocator>;
  _current_errors_type current_errors;
  using _last_motion_errors_type =
    franka_msgs::msg::Errors_<ContainerAllocator>;
  _last_motion_errors_type last_motion_errors;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cartesian_collision(
    const std::array<double, 6> & _arg)
  {
    this->cartesian_collision = _arg;
    return *this;
  }
  Type & set__cartesian_contact(
    const std::array<double, 6> & _arg)
  {
    this->cartesian_contact = _arg;
    return *this;
  }
  Type & set__q(
    const std::array<double, 7> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__q_d(
    const std::array<double, 7> & _arg)
  {
    this->q_d = _arg;
    return *this;
  }
  Type & set__dq(
    const std::array<double, 7> & _arg)
  {
    this->dq = _arg;
    return *this;
  }
  Type & set__dq_d(
    const std::array<double, 7> & _arg)
  {
    this->dq_d = _arg;
    return *this;
  }
  Type & set__ddq_d(
    const std::array<double, 7> & _arg)
  {
    this->ddq_d = _arg;
    return *this;
  }
  Type & set__theta(
    const std::array<double, 7> & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__dtheta(
    const std::array<double, 7> & _arg)
  {
    this->dtheta = _arg;
    return *this;
  }
  Type & set__tau_j(
    const std::array<double, 7> & _arg)
  {
    this->tau_j = _arg;
    return *this;
  }
  Type & set__dtau_j(
    const std::array<double, 7> & _arg)
  {
    this->dtau_j = _arg;
    return *this;
  }
  Type & set__tau_j_d(
    const std::array<double, 7> & _arg)
  {
    this->tau_j_d = _arg;
    return *this;
  }
  Type & set__k_f_ext_hat_k(
    const std::array<double, 6> & _arg)
  {
    this->k_f_ext_hat_k = _arg;
    return *this;
  }
  Type & set__elbow(
    const std::array<double, 2> & _arg)
  {
    this->elbow = _arg;
    return *this;
  }
  Type & set__elbow_d(
    const std::array<double, 2> & _arg)
  {
    this->elbow_d = _arg;
    return *this;
  }
  Type & set__elbow_c(
    const std::array<double, 2> & _arg)
  {
    this->elbow_c = _arg;
    return *this;
  }
  Type & set__delbow_c(
    const std::array<double, 2> & _arg)
  {
    this->delbow_c = _arg;
    return *this;
  }
  Type & set__ddelbow_c(
    const std::array<double, 2> & _arg)
  {
    this->ddelbow_c = _arg;
    return *this;
  }
  Type & set__joint_collision(
    const std::array<double, 7> & _arg)
  {
    this->joint_collision = _arg;
    return *this;
  }
  Type & set__joint_contact(
    const std::array<double, 7> & _arg)
  {
    this->joint_contact = _arg;
    return *this;
  }
  Type & set__o_f_ext_hat_k(
    const std::array<double, 6> & _arg)
  {
    this->o_f_ext_hat_k = _arg;
    return *this;
  }
  Type & set__o_dp_ee_d(
    const std::array<double, 6> & _arg)
  {
    this->o_dp_ee_d = _arg;
    return *this;
  }
  Type & set__o_dp_ee_c(
    const std::array<double, 6> & _arg)
  {
    this->o_dp_ee_c = _arg;
    return *this;
  }
  Type & set__o_ddp_ee_c(
    const std::array<double, 6> & _arg)
  {
    this->o_ddp_ee_c = _arg;
    return *this;
  }
  Type & set__tau_ext_hat_filtered(
    const std::array<double, 7> & _arg)
  {
    this->tau_ext_hat_filtered = _arg;
    return *this;
  }
  Type & set__m_ee(
    const double & _arg)
  {
    this->m_ee = _arg;
    return *this;
  }
  Type & set__f_x_cee(
    const std::array<double, 3> & _arg)
  {
    this->f_x_cee = _arg;
    return *this;
  }
  Type & set__i_ee(
    const std::array<double, 9> & _arg)
  {
    this->i_ee = _arg;
    return *this;
  }
  Type & set__m_load(
    const double & _arg)
  {
    this->m_load = _arg;
    return *this;
  }
  Type & set__f_x_cload(
    const std::array<double, 3> & _arg)
  {
    this->f_x_cload = _arg;
    return *this;
  }
  Type & set__i_load(
    const std::array<double, 9> & _arg)
  {
    this->i_load = _arg;
    return *this;
  }
  Type & set__m_total(
    const double & _arg)
  {
    this->m_total = _arg;
    return *this;
  }
  Type & set__f_x_ctotal(
    const std::array<double, 3> & _arg)
  {
    this->f_x_ctotal = _arg;
    return *this;
  }
  Type & set__i_total(
    const std::array<double, 9> & _arg)
  {
    this->i_total = _arg;
    return *this;
  }
  Type & set__o_t_ee(
    const std::array<double, 16> & _arg)
  {
    this->o_t_ee = _arg;
    return *this;
  }
  Type & set__o_t_ee_d(
    const std::array<double, 16> & _arg)
  {
    this->o_t_ee_d = _arg;
    return *this;
  }
  Type & set__o_t_ee_c(
    const std::array<double, 16> & _arg)
  {
    this->o_t_ee_c = _arg;
    return *this;
  }
  Type & set__f_t_ee(
    const std::array<double, 16> & _arg)
  {
    this->f_t_ee = _arg;
    return *this;
  }
  Type & set__ee_t_k(
    const std::array<double, 16> & _arg)
  {
    this->ee_t_k = _arg;
    return *this;
  }
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__control_command_success_rate(
    const double & _arg)
  {
    this->control_command_success_rate = _arg;
    return *this;
  }
  Type & set__robot_mode(
    const uint8_t & _arg)
  {
    this->robot_mode = _arg;
    return *this;
  }
  Type & set__current_errors(
    const franka_msgs::msg::Errors_<ContainerAllocator> & _arg)
  {
    this->current_errors = _arg;
    return *this;
  }
  Type & set__last_motion_errors(
    const franka_msgs::msg::Errors_<ContainerAllocator> & _arg)
  {
    this->last_motion_errors = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ROBOT_MODE_OTHER =
    0u;
  static constexpr uint8_t ROBOT_MODE_IDLE =
    1u;
  static constexpr uint8_t ROBOT_MODE_MOVE =
    2u;
  static constexpr uint8_t ROBOT_MODE_GUIDING =
    3u;
  static constexpr uint8_t ROBOT_MODE_REFLEX =
    4u;
  static constexpr uint8_t ROBOT_MODE_USER_STOPPED =
    5u;
  static constexpr uint8_t ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY =
    6u;

  // pointer types
  using RawPtr =
    franka_msgs::msg::FrankaRobotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_msgs::msg::FrankaRobotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_msgs::msg::FrankaRobotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_msgs::msg::FrankaRobotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_msgs::msg::FrankaRobotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::msg::FrankaRobotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_msgs::msg::FrankaRobotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::msg::FrankaRobotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_msgs::msg::FrankaRobotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_msgs::msg::FrankaRobotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_msgs__msg__FrankaRobotState
    std::shared_ptr<franka_msgs::msg::FrankaRobotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_msgs__msg__FrankaRobotState
    std::shared_ptr<franka_msgs::msg::FrankaRobotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FrankaRobotState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cartesian_collision != other.cartesian_collision) {
      return false;
    }
    if (this->cartesian_contact != other.cartesian_contact) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->q_d != other.q_d) {
      return false;
    }
    if (this->dq != other.dq) {
      return false;
    }
    if (this->dq_d != other.dq_d) {
      return false;
    }
    if (this->ddq_d != other.ddq_d) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->dtheta != other.dtheta) {
      return false;
    }
    if (this->tau_j != other.tau_j) {
      return false;
    }
    if (this->dtau_j != other.dtau_j) {
      return false;
    }
    if (this->tau_j_d != other.tau_j_d) {
      return false;
    }
    if (this->k_f_ext_hat_k != other.k_f_ext_hat_k) {
      return false;
    }
    if (this->elbow != other.elbow) {
      return false;
    }
    if (this->elbow_d != other.elbow_d) {
      return false;
    }
    if (this->elbow_c != other.elbow_c) {
      return false;
    }
    if (this->delbow_c != other.delbow_c) {
      return false;
    }
    if (this->ddelbow_c != other.ddelbow_c) {
      return false;
    }
    if (this->joint_collision != other.joint_collision) {
      return false;
    }
    if (this->joint_contact != other.joint_contact) {
      return false;
    }
    if (this->o_f_ext_hat_k != other.o_f_ext_hat_k) {
      return false;
    }
    if (this->o_dp_ee_d != other.o_dp_ee_d) {
      return false;
    }
    if (this->o_dp_ee_c != other.o_dp_ee_c) {
      return false;
    }
    if (this->o_ddp_ee_c != other.o_ddp_ee_c) {
      return false;
    }
    if (this->tau_ext_hat_filtered != other.tau_ext_hat_filtered) {
      return false;
    }
    if (this->m_ee != other.m_ee) {
      return false;
    }
    if (this->f_x_cee != other.f_x_cee) {
      return false;
    }
    if (this->i_ee != other.i_ee) {
      return false;
    }
    if (this->m_load != other.m_load) {
      return false;
    }
    if (this->f_x_cload != other.f_x_cload) {
      return false;
    }
    if (this->i_load != other.i_load) {
      return false;
    }
    if (this->m_total != other.m_total) {
      return false;
    }
    if (this->f_x_ctotal != other.f_x_ctotal) {
      return false;
    }
    if (this->i_total != other.i_total) {
      return false;
    }
    if (this->o_t_ee != other.o_t_ee) {
      return false;
    }
    if (this->o_t_ee_d != other.o_t_ee_d) {
      return false;
    }
    if (this->o_t_ee_c != other.o_t_ee_c) {
      return false;
    }
    if (this->f_t_ee != other.f_t_ee) {
      return false;
    }
    if (this->ee_t_k != other.ee_t_k) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->control_command_success_rate != other.control_command_success_rate) {
      return false;
    }
    if (this->robot_mode != other.robot_mode) {
      return false;
    }
    if (this->current_errors != other.current_errors) {
      return false;
    }
    if (this->last_motion_errors != other.last_motion_errors) {
      return false;
    }
    return true;
  }
  bool operator!=(const FrankaRobotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FrankaRobotState_

// alias to use template instance with default allocator
using FrankaRobotState =
  franka_msgs::msg::FrankaRobotState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FrankaRobotState_<ContainerAllocator>::ROBOT_MODE_OTHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FrankaRobotState_<ContainerAllocator>::ROBOT_MODE_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FrankaRobotState_<ContainerAllocator>::ROBOT_MODE_MOVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FrankaRobotState_<ContainerAllocator>::ROBOT_MODE_GUIDING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FrankaRobotState_<ContainerAllocator>::ROBOT_MODE_REFLEX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FrankaRobotState_<ContainerAllocator>::ROBOT_MODE_USER_STOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FrankaRobotState_<ContainerAllocator>::ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__STRUCT_HPP_
