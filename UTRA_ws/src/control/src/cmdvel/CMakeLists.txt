cmake_minimum_required(VERSION 2.8.3)
project(cmdvel)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
roscpp
rospy
std_msgs
nav_msgs
geometry_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES mybot_control
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)

include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(cmdvel src/cmdvel.cpp)
target_link_libraries(cmdvel ${catkin_LIBRARIES})


