// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from franka_msgs:msg/FrankaRobotState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "franka_msgs/msg/detail/franka_robot_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace franka_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FrankaRobotState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) franka_msgs::msg::FrankaRobotState(_init);
}

void FrankaRobotState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<franka_msgs::msg::FrankaRobotState *>(message_memory);
  typed_message->~FrankaRobotState();
}

size_t size_function__FrankaRobotState__cartesian_collision(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__FrankaRobotState__cartesian_collision(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__cartesian_collision(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__cartesian_collision(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__cartesian_collision(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__cartesian_collision(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__cartesian_collision(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__cartesian_contact(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__FrankaRobotState__cartesian_contact(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__cartesian_contact(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__cartesian_contact(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__cartesian_contact(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__cartesian_contact(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__cartesian_contact(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__q(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__FrankaRobotState__q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__q(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__q(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__q_d(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__FrankaRobotState__q_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__q_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__q_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__q_d(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__q_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__q_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__dq(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__FrankaRobotState__dq(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__dq(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__dq(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__dq(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__dq(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__dq(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__dq_d(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__FrankaRobotState__dq_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__dq_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__dq_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__dq_d(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__dq_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__dq_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__ddq_d(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__FrankaRobotState__ddq_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__ddq_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__ddq_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__ddq_d(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__ddq_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__ddq_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__theta(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__FrankaRobotState__theta(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__theta(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__theta(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__theta(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__theta(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__theta(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__dtheta(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__FrankaRobotState__dtheta(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__dtheta(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__dtheta(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__dtheta(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__dtheta(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__dtheta(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__tau_j(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__FrankaRobotState__tau_j(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__tau_j(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__tau_j(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__tau_j(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__tau_j(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__tau_j(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__dtau_j(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__FrankaRobotState__dtau_j(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__dtau_j(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__dtau_j(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__dtau_j(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__dtau_j(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__dtau_j(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__tau_j_d(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__FrankaRobotState__tau_j_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__tau_j_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__tau_j_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__tau_j_d(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__tau_j_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__tau_j_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__k_f_ext_hat_k(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__FrankaRobotState__k_f_ext_hat_k(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__k_f_ext_hat_k(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__k_f_ext_hat_k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__k_f_ext_hat_k(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__k_f_ext_hat_k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__k_f_ext_hat_k(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__elbow(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__FrankaRobotState__elbow(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__elbow(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__elbow(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__elbow(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__elbow(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__elbow(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__elbow_d(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__FrankaRobotState__elbow_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__elbow_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__elbow_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__elbow_d(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__elbow_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__elbow_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__elbow_c(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__FrankaRobotState__elbow_c(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__elbow_c(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__elbow_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__elbow_c(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__elbow_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__elbow_c(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__delbow_c(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__FrankaRobotState__delbow_c(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__delbow_c(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__delbow_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__delbow_c(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__delbow_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__delbow_c(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__ddelbow_c(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__FrankaRobotState__ddelbow_c(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__ddelbow_c(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__ddelbow_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__ddelbow_c(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__ddelbow_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__ddelbow_c(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__joint_collision(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__FrankaRobotState__joint_collision(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__joint_collision(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__joint_collision(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__joint_collision(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__joint_collision(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__joint_collision(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__joint_contact(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__FrankaRobotState__joint_contact(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__joint_contact(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__joint_contact(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__joint_contact(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__joint_contact(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__joint_contact(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__o_f_ext_hat_k(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__FrankaRobotState__o_f_ext_hat_k(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__o_f_ext_hat_k(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__o_f_ext_hat_k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__o_f_ext_hat_k(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__o_f_ext_hat_k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__o_f_ext_hat_k(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__o_dp_ee_d(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__FrankaRobotState__o_dp_ee_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__o_dp_ee_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__o_dp_ee_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__o_dp_ee_d(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__o_dp_ee_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__o_dp_ee_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__o_dp_ee_c(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__FrankaRobotState__o_dp_ee_c(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__o_dp_ee_c(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__o_dp_ee_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__o_dp_ee_c(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__o_dp_ee_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__o_dp_ee_c(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__o_ddp_ee_c(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__FrankaRobotState__o_ddp_ee_c(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__o_ddp_ee_c(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__o_ddp_ee_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__o_ddp_ee_c(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__o_ddp_ee_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__o_ddp_ee_c(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__tau_ext_hat_filtered(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__FrankaRobotState__tau_ext_hat_filtered(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__tau_ext_hat_filtered(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__tau_ext_hat_filtered(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__tau_ext_hat_filtered(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__tau_ext_hat_filtered(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__tau_ext_hat_filtered(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__f_x_cee(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__FrankaRobotState__f_x_cee(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__f_x_cee(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__f_x_cee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__f_x_cee(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__f_x_cee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__f_x_cee(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__i_ee(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__FrankaRobotState__i_ee(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__i_ee(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__i_ee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__i_ee(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__i_ee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__i_ee(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__f_x_cload(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__FrankaRobotState__f_x_cload(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__f_x_cload(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__f_x_cload(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__f_x_cload(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__f_x_cload(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__f_x_cload(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__i_load(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__FrankaRobotState__i_load(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__i_load(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__i_load(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__i_load(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__i_load(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__i_load(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__f_x_ctotal(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__FrankaRobotState__f_x_ctotal(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__f_x_ctotal(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__f_x_ctotal(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__f_x_ctotal(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__f_x_ctotal(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__f_x_ctotal(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__i_total(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__FrankaRobotState__i_total(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__i_total(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__i_total(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__i_total(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__i_total(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__i_total(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__o_t_ee(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__FrankaRobotState__o_t_ee(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__o_t_ee(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__o_t_ee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__o_t_ee(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__o_t_ee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__o_t_ee(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__o_t_ee_d(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__FrankaRobotState__o_t_ee_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__o_t_ee_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__o_t_ee_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__o_t_ee_d(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__o_t_ee_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__o_t_ee_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__o_t_ee_c(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__FrankaRobotState__o_t_ee_c(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__o_t_ee_c(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__o_t_ee_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__o_t_ee_c(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__o_t_ee_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__o_t_ee_c(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__f_t_ee(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__FrankaRobotState__f_t_ee(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__f_t_ee(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__f_t_ee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__f_t_ee(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__f_t_ee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__f_t_ee(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__FrankaRobotState__ee_t_k(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__FrankaRobotState__ee_t_k(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__FrankaRobotState__ee_t_k(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__FrankaRobotState__ee_t_k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FrankaRobotState__ee_t_k(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FrankaRobotState__ee_t_k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FrankaRobotState__ee_t_k(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FrankaRobotState_message_member_array[45] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cartesian_collision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, cartesian_collision),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__cartesian_collision,  // size() function pointer
    get_const_function__FrankaRobotState__cartesian_collision,  // get_const(index) function pointer
    get_function__FrankaRobotState__cartesian_collision,  // get(index) function pointer
    fetch_function__FrankaRobotState__cartesian_collision,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__cartesian_collision,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cartesian_contact",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, cartesian_contact),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__cartesian_contact,  // size() function pointer
    get_const_function__FrankaRobotState__cartesian_contact,  // get_const(index) function pointer
    get_function__FrankaRobotState__cartesian_contact,  // get(index) function pointer
    fetch_function__FrankaRobotState__cartesian_contact,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__cartesian_contact,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, q),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__q,  // size() function pointer
    get_const_function__FrankaRobotState__q,  // get_const(index) function pointer
    get_function__FrankaRobotState__q,  // get(index) function pointer
    fetch_function__FrankaRobotState__q,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__q,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "q_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, q_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__q_d,  // size() function pointer
    get_const_function__FrankaRobotState__q_d,  // get_const(index) function pointer
    get_function__FrankaRobotState__q_d,  // get(index) function pointer
    fetch_function__FrankaRobotState__q_d,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__q_d,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dq",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, dq),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__dq,  // size() function pointer
    get_const_function__FrankaRobotState__dq,  // get_const(index) function pointer
    get_function__FrankaRobotState__dq,  // get(index) function pointer
    fetch_function__FrankaRobotState__dq,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__dq,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dq_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, dq_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__dq_d,  // size() function pointer
    get_const_function__FrankaRobotState__dq_d,  // get_const(index) function pointer
    get_function__FrankaRobotState__dq_d,  // get(index) function pointer
    fetch_function__FrankaRobotState__dq_d,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__dq_d,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ddq_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, ddq_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__ddq_d,  // size() function pointer
    get_const_function__FrankaRobotState__ddq_d,  // get_const(index) function pointer
    get_function__FrankaRobotState__ddq_d,  // get(index) function pointer
    fetch_function__FrankaRobotState__ddq_d,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__ddq_d,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "theta",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, theta),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__theta,  // size() function pointer
    get_const_function__FrankaRobotState__theta,  // get_const(index) function pointer
    get_function__FrankaRobotState__theta,  // get(index) function pointer
    fetch_function__FrankaRobotState__theta,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__theta,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dtheta",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, dtheta),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__dtheta,  // size() function pointer
    get_const_function__FrankaRobotState__dtheta,  // get_const(index) function pointer
    get_function__FrankaRobotState__dtheta,  // get(index) function pointer
    fetch_function__FrankaRobotState__dtheta,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__dtheta,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tau_j",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, tau_j),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__tau_j,  // size() function pointer
    get_const_function__FrankaRobotState__tau_j,  // get_const(index) function pointer
    get_function__FrankaRobotState__tau_j,  // get(index) function pointer
    fetch_function__FrankaRobotState__tau_j,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__tau_j,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dtau_j",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, dtau_j),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__dtau_j,  // size() function pointer
    get_const_function__FrankaRobotState__dtau_j,  // get_const(index) function pointer
    get_function__FrankaRobotState__dtau_j,  // get(index) function pointer
    fetch_function__FrankaRobotState__dtau_j,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__dtau_j,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tau_j_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, tau_j_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__tau_j_d,  // size() function pointer
    get_const_function__FrankaRobotState__tau_j_d,  // get_const(index) function pointer
    get_function__FrankaRobotState__tau_j_d,  // get(index) function pointer
    fetch_function__FrankaRobotState__tau_j_d,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__tau_j_d,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "k_f_ext_hat_k",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, k_f_ext_hat_k),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__k_f_ext_hat_k,  // size() function pointer
    get_const_function__FrankaRobotState__k_f_ext_hat_k,  // get_const(index) function pointer
    get_function__FrankaRobotState__k_f_ext_hat_k,  // get(index) function pointer
    fetch_function__FrankaRobotState__k_f_ext_hat_k,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__k_f_ext_hat_k,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "elbow",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, elbow),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__elbow,  // size() function pointer
    get_const_function__FrankaRobotState__elbow,  // get_const(index) function pointer
    get_function__FrankaRobotState__elbow,  // get(index) function pointer
    fetch_function__FrankaRobotState__elbow,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__elbow,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "elbow_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, elbow_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__elbow_d,  // size() function pointer
    get_const_function__FrankaRobotState__elbow_d,  // get_const(index) function pointer
    get_function__FrankaRobotState__elbow_d,  // get(index) function pointer
    fetch_function__FrankaRobotState__elbow_d,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__elbow_d,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "elbow_c",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, elbow_c),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__elbow_c,  // size() function pointer
    get_const_function__FrankaRobotState__elbow_c,  // get_const(index) function pointer
    get_function__FrankaRobotState__elbow_c,  // get(index) function pointer
    fetch_function__FrankaRobotState__elbow_c,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__elbow_c,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "delbow_c",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, delbow_c),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__delbow_c,  // size() function pointer
    get_const_function__FrankaRobotState__delbow_c,  // get_const(index) function pointer
    get_function__FrankaRobotState__delbow_c,  // get(index) function pointer
    fetch_function__FrankaRobotState__delbow_c,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__delbow_c,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ddelbow_c",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, ddelbow_c),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__ddelbow_c,  // size() function pointer
    get_const_function__FrankaRobotState__ddelbow_c,  // get_const(index) function pointer
    get_function__FrankaRobotState__ddelbow_c,  // get(index) function pointer
    fetch_function__FrankaRobotState__ddelbow_c,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__ddelbow_c,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_collision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, joint_collision),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__joint_collision,  // size() function pointer
    get_const_function__FrankaRobotState__joint_collision,  // get_const(index) function pointer
    get_function__FrankaRobotState__joint_collision,  // get(index) function pointer
    fetch_function__FrankaRobotState__joint_collision,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__joint_collision,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_contact",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, joint_contact),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__joint_contact,  // size() function pointer
    get_const_function__FrankaRobotState__joint_contact,  // get_const(index) function pointer
    get_function__FrankaRobotState__joint_contact,  // get(index) function pointer
    fetch_function__FrankaRobotState__joint_contact,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__joint_contact,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "o_f_ext_hat_k",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, o_f_ext_hat_k),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__o_f_ext_hat_k,  // size() function pointer
    get_const_function__FrankaRobotState__o_f_ext_hat_k,  // get_const(index) function pointer
    get_function__FrankaRobotState__o_f_ext_hat_k,  // get(index) function pointer
    fetch_function__FrankaRobotState__o_f_ext_hat_k,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__o_f_ext_hat_k,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "o_dp_ee_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, o_dp_ee_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__o_dp_ee_d,  // size() function pointer
    get_const_function__FrankaRobotState__o_dp_ee_d,  // get_const(index) function pointer
    get_function__FrankaRobotState__o_dp_ee_d,  // get(index) function pointer
    fetch_function__FrankaRobotState__o_dp_ee_d,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__o_dp_ee_d,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "o_dp_ee_c",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, o_dp_ee_c),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__o_dp_ee_c,  // size() function pointer
    get_const_function__FrankaRobotState__o_dp_ee_c,  // get_const(index) function pointer
    get_function__FrankaRobotState__o_dp_ee_c,  // get(index) function pointer
    fetch_function__FrankaRobotState__o_dp_ee_c,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__o_dp_ee_c,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "o_ddp_ee_c",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, o_ddp_ee_c),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__o_ddp_ee_c,  // size() function pointer
    get_const_function__FrankaRobotState__o_ddp_ee_c,  // get_const(index) function pointer
    get_function__FrankaRobotState__o_ddp_ee_c,  // get(index) function pointer
    fetch_function__FrankaRobotState__o_ddp_ee_c,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__o_ddp_ee_c,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tau_ext_hat_filtered",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, tau_ext_hat_filtered),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__tau_ext_hat_filtered,  // size() function pointer
    get_const_function__FrankaRobotState__tau_ext_hat_filtered,  // get_const(index) function pointer
    get_function__FrankaRobotState__tau_ext_hat_filtered,  // get(index) function pointer
    fetch_function__FrankaRobotState__tau_ext_hat_filtered,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__tau_ext_hat_filtered,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "m_ee",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, m_ee),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "f_x_cee",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, f_x_cee),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__f_x_cee,  // size() function pointer
    get_const_function__FrankaRobotState__f_x_cee,  // get_const(index) function pointer
    get_function__FrankaRobotState__f_x_cee,  // get(index) function pointer
    fetch_function__FrankaRobotState__f_x_cee,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__f_x_cee,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "i_ee",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, i_ee),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__i_ee,  // size() function pointer
    get_const_function__FrankaRobotState__i_ee,  // get_const(index) function pointer
    get_function__FrankaRobotState__i_ee,  // get(index) function pointer
    fetch_function__FrankaRobotState__i_ee,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__i_ee,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "m_load",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, m_load),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "f_x_cload",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, f_x_cload),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__f_x_cload,  // size() function pointer
    get_const_function__FrankaRobotState__f_x_cload,  // get_const(index) function pointer
    get_function__FrankaRobotState__f_x_cload,  // get(index) function pointer
    fetch_function__FrankaRobotState__f_x_cload,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__f_x_cload,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "i_load",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, i_load),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__i_load,  // size() function pointer
    get_const_function__FrankaRobotState__i_load,  // get_const(index) function pointer
    get_function__FrankaRobotState__i_load,  // get(index) function pointer
    fetch_function__FrankaRobotState__i_load,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__i_load,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "m_total",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, m_total),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "f_x_ctotal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, f_x_ctotal),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__f_x_ctotal,  // size() function pointer
    get_const_function__FrankaRobotState__f_x_ctotal,  // get_const(index) function pointer
    get_function__FrankaRobotState__f_x_ctotal,  // get(index) function pointer
    fetch_function__FrankaRobotState__f_x_ctotal,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__f_x_ctotal,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "i_total",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, i_total),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__i_total,  // size() function pointer
    get_const_function__FrankaRobotState__i_total,  // get_const(index) function pointer
    get_function__FrankaRobotState__i_total,  // get(index) function pointer
    fetch_function__FrankaRobotState__i_total,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__i_total,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "o_t_ee",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, o_t_ee),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__o_t_ee,  // size() function pointer
    get_const_function__FrankaRobotState__o_t_ee,  // get_const(index) function pointer
    get_function__FrankaRobotState__o_t_ee,  // get(index) function pointer
    fetch_function__FrankaRobotState__o_t_ee,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__o_t_ee,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "o_t_ee_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, o_t_ee_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__o_t_ee_d,  // size() function pointer
    get_const_function__FrankaRobotState__o_t_ee_d,  // get_const(index) function pointer
    get_function__FrankaRobotState__o_t_ee_d,  // get(index) function pointer
    fetch_function__FrankaRobotState__o_t_ee_d,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__o_t_ee_d,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "o_t_ee_c",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, o_t_ee_c),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__o_t_ee_c,  // size() function pointer
    get_const_function__FrankaRobotState__o_t_ee_c,  // get_const(index) function pointer
    get_function__FrankaRobotState__o_t_ee_c,  // get(index) function pointer
    fetch_function__FrankaRobotState__o_t_ee_c,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__o_t_ee_c,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "f_t_ee",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, f_t_ee),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__f_t_ee,  // size() function pointer
    get_const_function__FrankaRobotState__f_t_ee,  // get_const(index) function pointer
    get_function__FrankaRobotState__f_t_ee,  // get(index) function pointer
    fetch_function__FrankaRobotState__f_t_ee,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__f_t_ee,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ee_t_k",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, ee_t_k),  // bytes offset in struct
    nullptr,  // default value
    size_function__FrankaRobotState__ee_t_k,  // size() function pointer
    get_const_function__FrankaRobotState__ee_t_k,  // get_const(index) function pointer
    get_function__FrankaRobotState__ee_t_k,  // get(index) function pointer
    fetch_function__FrankaRobotState__ee_t_k,  // fetch(index, &value) function pointer
    assign_function__FrankaRobotState__ee_t_k,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "control_command_success_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, control_command_success_rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, robot_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_errors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_msgs::msg::Errors>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, current_errors),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "last_motion_errors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<franka_msgs::msg::Errors>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::msg::FrankaRobotState, last_motion_errors),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FrankaRobotState_message_members = {
  "franka_msgs::msg",  // message namespace
  "FrankaRobotState",  // message name
  45,  // number of fields
  sizeof(franka_msgs::msg::FrankaRobotState),
  FrankaRobotState_message_member_array,  // message members
  FrankaRobotState_init_function,  // function to initialize message memory (memory has to be allocated)
  FrankaRobotState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FrankaRobotState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FrankaRobotState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace franka_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::msg::FrankaRobotState>()
{
  return &::franka_msgs::msg::rosidl_typesupport_introspection_cpp::FrankaRobotState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, msg, FrankaRobotState)() {
  return &::franka_msgs::msg::rosidl_typesupport_introspection_cpp::FrankaRobotState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
