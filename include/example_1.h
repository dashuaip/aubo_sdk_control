#ifndef EXAMPLE_1_H
#define EXAMPLE_1_H

#include "AuboRobotMetaType.h"
#include "serviceinterface.h"



class Example_1
{
public:
    static void RealTimeWaypointCallback (const aubo_robot_namespace::wayPoint_S *wayPointPtr, void *arg); //Used to get real-time waypoint callback function

    static void RealTimeEndSpeedCallback (double speed, void *arg);  //Get real-time end speed callback function

    static void RealTimeEventInfoCallback(const aubo_robot_namespace::RobotEventInfo *pEventInfo, void *arg); //Get real-time robotic arm event callback function

    /**
     * @brief demo
     *
     * 回调函数的方式获取实时路点，末端速度，机械臂的事件
     */
    static void demo(char SERVER_HOST[]);


    static void getJointStatus(char SERVER_HOST[]);
};

#endif // EXAMPLE_1_H
