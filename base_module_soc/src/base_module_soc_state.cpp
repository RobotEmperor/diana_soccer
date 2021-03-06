/*
 * base_module_soc_state.cpp
 *
 *  Created on: Feb 21, 2018
 *      Author: robotemperor
 */
#include "base_module_soc/base_module_soc_state.h"

using namespace base_module_state;

BaseModuleState::BaseModuleState()
{
  is_moving_state= false;
  mov_time_state =0.0;
  MAX_JOINT_ID_STATE = 0;

  joint_ini_pose_state  = Eigen::MatrixXd::Zero( MAX_JOINT_ID_STATE + 3, 1);
  joint_ini_pose_goal  = Eigen::MatrixXd::Zero( MAX_JOINT_ID_STATE + 3, 1);

}

BaseModuleState::~BaseModuleState()
{
}




