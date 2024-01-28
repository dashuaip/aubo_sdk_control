#include <iostream>
#include <ros/ros.h>
#include <stdio.h>
#include <unistd.h>

#include "example_0.h"
#include "example_1.h"
#include "example_3.h"
#include "example_4.h"
#include "example_5.h"
#include "example_6.h"
#include "example_8.h"
#include "example_9.h"

std::string robot_ip;
char SERVER_HOST[16] = "127.0.0.1";

int main(int argc, char **argv) {

    ros::init(argc, argv, "aubo_sdk_control");
    ros::NodeHandle nh;
    ros::NodeHandle private_nh("~");  // 添加一个用于访问私有参数的句柄

    // 从命令行参数获取服务器主机地址
    if (!private_nh.getParam("robot_ip", robot_ip)) {
        ROS_ERROR("Couldn't get parameter: robot_ip");
    }
    else{
        robot_ip.copy(SERVER_HOST, robot_ip.size());
        SERVER_HOST[robot_ip.size()] = '\0';
    }

    // //Case 0: Using the SDK to build a control engineering for the simplest robotic arm
    // Example_0::demo(SERVER_HOST);

    // //Case 1: The way of the callback function to obtain the real-time waypoint,
    // //the end speed, the event of the manipulator, about the acquisition of the relevant state of the manipulator
    // Example_1::demo(SERVER_HOST);
    // Example_1::getJointStatus(SERVER_HOST);

    // Case 3: Joint Movement
    Example_3::demo(SERVER_HOST);

    // //Case 4: Line Movement
    // Example_4::demo(SERVER_HOST);
    // Example_4::demo_relativeOri(SERVER_HOST);

    // //Case 5: Trajectory movement
    // Example_5::demo1(SERVER_HOST);

    // //Case 6: Movement to the target position
    // Example_6::demo(SERVER_HOST);

    // //Case 8: Positive and negative solutions
    // Example_8::demo();

    // //Case 9: About the use case of io
    // Example_9::demo(SERVER_HOST);

    ros::shutdown();
    return 0;
    
}

