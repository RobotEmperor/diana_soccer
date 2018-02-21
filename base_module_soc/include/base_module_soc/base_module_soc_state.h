/*
 * base_module_soc_state.h
 *
 *  Created on: Feb 21, 2018
 *      Author: robotemperor
 */

#ifndef DIANA_SOCCER_BASE_MODULE_SOC_INCLUDE_BASE_MODULE_SOC_BASE_MODULE_SOC_STATE_H_
#define DIANA_SOCCER_BASE_MODULE_SOC_INCLUDE_BASE_MODULE_SOC_BASE_MODULE_SOC_STATE_H_


#include "robotis_math/robotis_math.h"


namespace base_module_state
{

class BaseModuleState
{
public:
  BaseModuleState();
  ~BaseModuleState();

  bool is_moving_state;
  double mov_time_state;
  int MAX_JOINT_ID_STATE;

  Eigen::MatrixXd joint_ini_pose_state;
  Eigen::MatrixXd joint_ini_pose_goal;

};

}


#endif /* DIANA_SOCCER_BASE_MODULE_SOC_INCLUDE_BASE_MODULE_SOC_BASE_MODULE_SOC_STATE_H_ */
