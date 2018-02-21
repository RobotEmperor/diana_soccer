cmake_minimum_required(VERSION 2.8.3)
project(diana_manager)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  robotis_framework_common
  robotis_math
  robotis_controller
  robotis_controller_msgs
  cmake_modules
  heroehs_math 
  
  #add module package
  base_module_soc
  walking_module
     
  diana_balance_control
  diana_msgs
)

find_package(Boost REQUIRED COMPONENTS system)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES ski_manager
#  CATKIN_DEPENDS roscpp std_msgs
#  DEPENDS system_lib
)

include_directories(
  include
  ${Eigen_INCLUDE_DIRS}
  ${catkin_INCLUDE_DIRS}
)

add_executable(diana_main_manager src/diana_main_manager.cpp)
add_dependencies(diana_main_manager ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(diana_main_manager ${catkin_LIBRARIES})
