// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_msgs:msg/FrankaRobotState.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__TRAITS_HPP_
#define FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "franka_msgs/msg/detail/franka_robot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'current_errors'
// Member 'last_motion_errors'
#include "franka_msgs/msg/detail/errors__traits.hpp"

namespace franka_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FrankaRobotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: cartesian_collision
  {
    if (msg.cartesian_collision.size() == 0) {
      out << "cartesian_collision: []";
    } else {
      out << "cartesian_collision: [";
      size_t pending_items = msg.cartesian_collision.size();
      for (auto item : msg.cartesian_collision) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cartesian_contact
  {
    if (msg.cartesian_contact.size() == 0) {
      out << "cartesian_contact: []";
    } else {
      out << "cartesian_contact: [";
      size_t pending_items = msg.cartesian_contact.size();
      for (auto item : msg.cartesian_contact) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: q
  {
    if (msg.q.size() == 0) {
      out << "q: []";
    } else {
      out << "q: [";
      size_t pending_items = msg.q.size();
      for (auto item : msg.q) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: q_d
  {
    if (msg.q_d.size() == 0) {
      out << "q_d: []";
    } else {
      out << "q_d: [";
      size_t pending_items = msg.q_d.size();
      for (auto item : msg.q_d) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dq
  {
    if (msg.dq.size() == 0) {
      out << "dq: []";
    } else {
      out << "dq: [";
      size_t pending_items = msg.dq.size();
      for (auto item : msg.dq) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dq_d
  {
    if (msg.dq_d.size() == 0) {
      out << "dq_d: []";
    } else {
      out << "dq_d: [";
      size_t pending_items = msg.dq_d.size();
      for (auto item : msg.dq_d) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ddq_d
  {
    if (msg.ddq_d.size() == 0) {
      out << "ddq_d: []";
    } else {
      out << "ddq_d: [";
      size_t pending_items = msg.ddq_d.size();
      for (auto item : msg.ddq_d) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: theta
  {
    if (msg.theta.size() == 0) {
      out << "theta: []";
    } else {
      out << "theta: [";
      size_t pending_items = msg.theta.size();
      for (auto item : msg.theta) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dtheta
  {
    if (msg.dtheta.size() == 0) {
      out << "dtheta: []";
    } else {
      out << "dtheta: [";
      size_t pending_items = msg.dtheta.size();
      for (auto item : msg.dtheta) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tau_j
  {
    if (msg.tau_j.size() == 0) {
      out << "tau_j: []";
    } else {
      out << "tau_j: [";
      size_t pending_items = msg.tau_j.size();
      for (auto item : msg.tau_j) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dtau_j
  {
    if (msg.dtau_j.size() == 0) {
      out << "dtau_j: []";
    } else {
      out << "dtau_j: [";
      size_t pending_items = msg.dtau_j.size();
      for (auto item : msg.dtau_j) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tau_j_d
  {
    if (msg.tau_j_d.size() == 0) {
      out << "tau_j_d: []";
    } else {
      out << "tau_j_d: [";
      size_t pending_items = msg.tau_j_d.size();
      for (auto item : msg.tau_j_d) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: k_f_ext_hat_k
  {
    if (msg.k_f_ext_hat_k.size() == 0) {
      out << "k_f_ext_hat_k: []";
    } else {
      out << "k_f_ext_hat_k: [";
      size_t pending_items = msg.k_f_ext_hat_k.size();
      for (auto item : msg.k_f_ext_hat_k) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: elbow
  {
    if (msg.elbow.size() == 0) {
      out << "elbow: []";
    } else {
      out << "elbow: [";
      size_t pending_items = msg.elbow.size();
      for (auto item : msg.elbow) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: elbow_d
  {
    if (msg.elbow_d.size() == 0) {
      out << "elbow_d: []";
    } else {
      out << "elbow_d: [";
      size_t pending_items = msg.elbow_d.size();
      for (auto item : msg.elbow_d) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: elbow_c
  {
    if (msg.elbow_c.size() == 0) {
      out << "elbow_c: []";
    } else {
      out << "elbow_c: [";
      size_t pending_items = msg.elbow_c.size();
      for (auto item : msg.elbow_c) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: delbow_c
  {
    if (msg.delbow_c.size() == 0) {
      out << "delbow_c: []";
    } else {
      out << "delbow_c: [";
      size_t pending_items = msg.delbow_c.size();
      for (auto item : msg.delbow_c) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ddelbow_c
  {
    if (msg.ddelbow_c.size() == 0) {
      out << "ddelbow_c: []";
    } else {
      out << "ddelbow_c: [";
      size_t pending_items = msg.ddelbow_c.size();
      for (auto item : msg.ddelbow_c) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_collision
  {
    if (msg.joint_collision.size() == 0) {
      out << "joint_collision: []";
    } else {
      out << "joint_collision: [";
      size_t pending_items = msg.joint_collision.size();
      for (auto item : msg.joint_collision) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_contact
  {
    if (msg.joint_contact.size() == 0) {
      out << "joint_contact: []";
    } else {
      out << "joint_contact: [";
      size_t pending_items = msg.joint_contact.size();
      for (auto item : msg.joint_contact) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: o_f_ext_hat_k
  {
    if (msg.o_f_ext_hat_k.size() == 0) {
      out << "o_f_ext_hat_k: []";
    } else {
      out << "o_f_ext_hat_k: [";
      size_t pending_items = msg.o_f_ext_hat_k.size();
      for (auto item : msg.o_f_ext_hat_k) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: o_dp_ee_d
  {
    if (msg.o_dp_ee_d.size() == 0) {
      out << "o_dp_ee_d: []";
    } else {
      out << "o_dp_ee_d: [";
      size_t pending_items = msg.o_dp_ee_d.size();
      for (auto item : msg.o_dp_ee_d) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: o_dp_ee_c
  {
    if (msg.o_dp_ee_c.size() == 0) {
      out << "o_dp_ee_c: []";
    } else {
      out << "o_dp_ee_c: [";
      size_t pending_items = msg.o_dp_ee_c.size();
      for (auto item : msg.o_dp_ee_c) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: o_ddp_ee_c
  {
    if (msg.o_ddp_ee_c.size() == 0) {
      out << "o_ddp_ee_c: []";
    } else {
      out << "o_ddp_ee_c: [";
      size_t pending_items = msg.o_ddp_ee_c.size();
      for (auto item : msg.o_ddp_ee_c) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tau_ext_hat_filtered
  {
    if (msg.tau_ext_hat_filtered.size() == 0) {
      out << "tau_ext_hat_filtered: []";
    } else {
      out << "tau_ext_hat_filtered: [";
      size_t pending_items = msg.tau_ext_hat_filtered.size();
      for (auto item : msg.tau_ext_hat_filtered) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: m_ee
  {
    out << "m_ee: ";
    rosidl_generator_traits::value_to_yaml(msg.m_ee, out);
    out << ", ";
  }

  // member: f_x_cee
  {
    if (msg.f_x_cee.size() == 0) {
      out << "f_x_cee: []";
    } else {
      out << "f_x_cee: [";
      size_t pending_items = msg.f_x_cee.size();
      for (auto item : msg.f_x_cee) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: i_ee
  {
    if (msg.i_ee.size() == 0) {
      out << "i_ee: []";
    } else {
      out << "i_ee: [";
      size_t pending_items = msg.i_ee.size();
      for (auto item : msg.i_ee) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: m_load
  {
    out << "m_load: ";
    rosidl_generator_traits::value_to_yaml(msg.m_load, out);
    out << ", ";
  }

  // member: f_x_cload
  {
    if (msg.f_x_cload.size() == 0) {
      out << "f_x_cload: []";
    } else {
      out << "f_x_cload: [";
      size_t pending_items = msg.f_x_cload.size();
      for (auto item : msg.f_x_cload) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: i_load
  {
    if (msg.i_load.size() == 0) {
      out << "i_load: []";
    } else {
      out << "i_load: [";
      size_t pending_items = msg.i_load.size();
      for (auto item : msg.i_load) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: m_total
  {
    out << "m_total: ";
    rosidl_generator_traits::value_to_yaml(msg.m_total, out);
    out << ", ";
  }

  // member: f_x_ctotal
  {
    if (msg.f_x_ctotal.size() == 0) {
      out << "f_x_ctotal: []";
    } else {
      out << "f_x_ctotal: [";
      size_t pending_items = msg.f_x_ctotal.size();
      for (auto item : msg.f_x_ctotal) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: i_total
  {
    if (msg.i_total.size() == 0) {
      out << "i_total: []";
    } else {
      out << "i_total: [";
      size_t pending_items = msg.i_total.size();
      for (auto item : msg.i_total) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: o_t_ee
  {
    if (msg.o_t_ee.size() == 0) {
      out << "o_t_ee: []";
    } else {
      out << "o_t_ee: [";
      size_t pending_items = msg.o_t_ee.size();
      for (auto item : msg.o_t_ee) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: o_t_ee_d
  {
    if (msg.o_t_ee_d.size() == 0) {
      out << "o_t_ee_d: []";
    } else {
      out << "o_t_ee_d: [";
      size_t pending_items = msg.o_t_ee_d.size();
      for (auto item : msg.o_t_ee_d) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: o_t_ee_c
  {
    if (msg.o_t_ee_c.size() == 0) {
      out << "o_t_ee_c: []";
    } else {
      out << "o_t_ee_c: [";
      size_t pending_items = msg.o_t_ee_c.size();
      for (auto item : msg.o_t_ee_c) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: f_t_ee
  {
    if (msg.f_t_ee.size() == 0) {
      out << "f_t_ee: []";
    } else {
      out << "f_t_ee: [";
      size_t pending_items = msg.f_t_ee.size();
      for (auto item : msg.f_t_ee) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ee_t_k
  {
    if (msg.ee_t_k.size() == 0) {
      out << "ee_t_k: []";
    } else {
      out << "ee_t_k: [";
      size_t pending_items = msg.ee_t_k.size();
      for (auto item : msg.ee_t_k) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: control_command_success_rate
  {
    out << "control_command_success_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.control_command_success_rate, out);
    out << ", ";
  }

  // member: robot_mode
  {
    out << "robot_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_mode, out);
    out << ", ";
  }

  // member: current_errors
  {
    out << "current_errors: ";
    to_flow_style_yaml(msg.current_errors, out);
    out << ", ";
  }

  // member: last_motion_errors
  {
    out << "last_motion_errors: ";
    to_flow_style_yaml(msg.last_motion_errors, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FrankaRobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: cartesian_collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cartesian_collision.size() == 0) {
      out << "cartesian_collision: []\n";
    } else {
      out << "cartesian_collision:\n";
      for (auto item : msg.cartesian_collision) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cartesian_contact
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cartesian_contact.size() == 0) {
      out << "cartesian_contact: []\n";
    } else {
      out << "cartesian_contact:\n";
      for (auto item : msg.cartesian_contact) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q.size() == 0) {
      out << "q: []\n";
    } else {
      out << "q:\n";
      for (auto item : msg.q) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: q_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q_d.size() == 0) {
      out << "q_d: []\n";
    } else {
      out << "q_d:\n";
      for (auto item : msg.q_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: dq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dq.size() == 0) {
      out << "dq: []\n";
    } else {
      out << "dq:\n";
      for (auto item : msg.dq) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: dq_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dq_d.size() == 0) {
      out << "dq_d: []\n";
    } else {
      out << "dq_d:\n";
      for (auto item : msg.dq_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ddq_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ddq_d.size() == 0) {
      out << "ddq_d: []\n";
    } else {
      out << "ddq_d:\n";
      for (auto item : msg.ddq_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.theta.size() == 0) {
      out << "theta: []\n";
    } else {
      out << "theta:\n";
      for (auto item : msg.theta) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: dtheta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dtheta.size() == 0) {
      out << "dtheta: []\n";
    } else {
      out << "dtheta:\n";
      for (auto item : msg.dtheta) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tau_j
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tau_j.size() == 0) {
      out << "tau_j: []\n";
    } else {
      out << "tau_j:\n";
      for (auto item : msg.tau_j) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: dtau_j
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dtau_j.size() == 0) {
      out << "dtau_j: []\n";
    } else {
      out << "dtau_j:\n";
      for (auto item : msg.dtau_j) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tau_j_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tau_j_d.size() == 0) {
      out << "tau_j_d: []\n";
    } else {
      out << "tau_j_d:\n";
      for (auto item : msg.tau_j_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: k_f_ext_hat_k
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.k_f_ext_hat_k.size() == 0) {
      out << "k_f_ext_hat_k: []\n";
    } else {
      out << "k_f_ext_hat_k:\n";
      for (auto item : msg.k_f_ext_hat_k) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: elbow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.elbow.size() == 0) {
      out << "elbow: []\n";
    } else {
      out << "elbow:\n";
      for (auto item : msg.elbow) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: elbow_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.elbow_d.size() == 0) {
      out << "elbow_d: []\n";
    } else {
      out << "elbow_d:\n";
      for (auto item : msg.elbow_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: elbow_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.elbow_c.size() == 0) {
      out << "elbow_c: []\n";
    } else {
      out << "elbow_c:\n";
      for (auto item : msg.elbow_c) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: delbow_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.delbow_c.size() == 0) {
      out << "delbow_c: []\n";
    } else {
      out << "delbow_c:\n";
      for (auto item : msg.delbow_c) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ddelbow_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ddelbow_c.size() == 0) {
      out << "ddelbow_c: []\n";
    } else {
      out << "ddelbow_c:\n";
      for (auto item : msg.ddelbow_c) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_collision.size() == 0) {
      out << "joint_collision: []\n";
    } else {
      out << "joint_collision:\n";
      for (auto item : msg.joint_collision) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_contact
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_contact.size() == 0) {
      out << "joint_contact: []\n";
    } else {
      out << "joint_contact:\n";
      for (auto item : msg.joint_contact) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: o_f_ext_hat_k
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.o_f_ext_hat_k.size() == 0) {
      out << "o_f_ext_hat_k: []\n";
    } else {
      out << "o_f_ext_hat_k:\n";
      for (auto item : msg.o_f_ext_hat_k) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: o_dp_ee_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.o_dp_ee_d.size() == 0) {
      out << "o_dp_ee_d: []\n";
    } else {
      out << "o_dp_ee_d:\n";
      for (auto item : msg.o_dp_ee_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: o_dp_ee_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.o_dp_ee_c.size() == 0) {
      out << "o_dp_ee_c: []\n";
    } else {
      out << "o_dp_ee_c:\n";
      for (auto item : msg.o_dp_ee_c) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: o_ddp_ee_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.o_ddp_ee_c.size() == 0) {
      out << "o_ddp_ee_c: []\n";
    } else {
      out << "o_ddp_ee_c:\n";
      for (auto item : msg.o_ddp_ee_c) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tau_ext_hat_filtered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tau_ext_hat_filtered.size() == 0) {
      out << "tau_ext_hat_filtered: []\n";
    } else {
      out << "tau_ext_hat_filtered:\n";
      for (auto item : msg.tau_ext_hat_filtered) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: m_ee
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_ee: ";
    rosidl_generator_traits::value_to_yaml(msg.m_ee, out);
    out << "\n";
  }

  // member: f_x_cee
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.f_x_cee.size() == 0) {
      out << "f_x_cee: []\n";
    } else {
      out << "f_x_cee:\n";
      for (auto item : msg.f_x_cee) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: i_ee
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.i_ee.size() == 0) {
      out << "i_ee: []\n";
    } else {
      out << "i_ee:\n";
      for (auto item : msg.i_ee) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: m_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_load: ";
    rosidl_generator_traits::value_to_yaml(msg.m_load, out);
    out << "\n";
  }

  // member: f_x_cload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.f_x_cload.size() == 0) {
      out << "f_x_cload: []\n";
    } else {
      out << "f_x_cload:\n";
      for (auto item : msg.f_x_cload) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: i_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.i_load.size() == 0) {
      out << "i_load: []\n";
    } else {
      out << "i_load:\n";
      for (auto item : msg.i_load) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: m_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_total: ";
    rosidl_generator_traits::value_to_yaml(msg.m_total, out);
    out << "\n";
  }

  // member: f_x_ctotal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.f_x_ctotal.size() == 0) {
      out << "f_x_ctotal: []\n";
    } else {
      out << "f_x_ctotal:\n";
      for (auto item : msg.f_x_ctotal) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: i_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.i_total.size() == 0) {
      out << "i_total: []\n";
    } else {
      out << "i_total:\n";
      for (auto item : msg.i_total) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: o_t_ee
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.o_t_ee.size() == 0) {
      out << "o_t_ee: []\n";
    } else {
      out << "o_t_ee:\n";
      for (auto item : msg.o_t_ee) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: o_t_ee_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.o_t_ee_d.size() == 0) {
      out << "o_t_ee_d: []\n";
    } else {
      out << "o_t_ee_d:\n";
      for (auto item : msg.o_t_ee_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: o_t_ee_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.o_t_ee_c.size() == 0) {
      out << "o_t_ee_c: []\n";
    } else {
      out << "o_t_ee_c:\n";
      for (auto item : msg.o_t_ee_c) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: f_t_ee
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.f_t_ee.size() == 0) {
      out << "f_t_ee: []\n";
    } else {
      out << "f_t_ee:\n";
      for (auto item : msg.f_t_ee) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ee_t_k
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ee_t_k.size() == 0) {
      out << "ee_t_k: []\n";
    } else {
      out << "ee_t_k:\n";
      for (auto item : msg.ee_t_k) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: control_command_success_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_command_success_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.control_command_success_rate, out);
    out << "\n";
  }

  // member: robot_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_mode, out);
    out << "\n";
  }

  // member: current_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_errors:\n";
    to_block_style_yaml(msg.current_errors, out, indentation + 2);
  }

  // member: last_motion_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_motion_errors:\n";
    to_block_style_yaml(msg.last_motion_errors, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FrankaRobotState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace franka_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franka_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franka_msgs::msg::FrankaRobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::msg::FrankaRobotState & msg)
{
  return franka_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::msg::FrankaRobotState>()
{
  return "franka_msgs::msg::FrankaRobotState";
}

template<>
inline const char * name<franka_msgs::msg::FrankaRobotState>()
{
  return "franka_msgs/msg/FrankaRobotState";
}

template<>
struct has_fixed_size<franka_msgs::msg::FrankaRobotState>
  : std::integral_constant<bool, has_fixed_size<franka_msgs::msg::Errors>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<franka_msgs::msg::FrankaRobotState>
  : std::integral_constant<bool, has_bounded_size<franka_msgs::msg::Errors>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<franka_msgs::msg::FrankaRobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FRANKA_MSGS__MSG__DETAIL__FRANKA_ROBOT_STATE__TRAITS_HPP_
