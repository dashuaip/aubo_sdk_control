cmake_minimum_required(VERSION 3.0.2)
project(aubo_sdk_control)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES aubo_sdk_control
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
  ${catkin_INCLUDE_DIRS}
  include
  include/aubo_sdk
)

## Specify libraries to link a library or executable target against
link_directories(${catkin_LIB_DIRS} lib/log4cplus lib/aubo_sdk)

add_executable(aubo_sdk_control_main
    src/aubo_sdk_control_main.cpp
    src/example/AuboSdkExample.cpp
    src/example/example_0.cpp
    src/example/example_1.cpp
    src/example/example_3.cpp
    src/example/example_4.cpp
    src/example/example_5.cpp
    src/example/example_6.cpp
    src/example/example_8.cpp
    src/example/example_9.cpp
    src/example/example_toolio.cpp
    src/example/util.cpp)

target_link_libraries(aubo_sdk_control_main ${catkin_LIBRARIES} auborobotcontroller log4cplus pthread)


