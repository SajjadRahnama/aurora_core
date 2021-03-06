/* 
 * @File:     MavRosSetStreamRate.h
 * @Author:   Sajjad Rahnama
 * 
 * @Project:  Aurora
 * @Version:  1.0 - Iran Open 2017
 * 
 * @Created on Dec 12, 2016
 */

#ifndef MAVROS_SETSTREAMRATE_H
#define MAVROS_SETSTREAMRATE_H

#include <ros/ros.h>
#include "mavros_msgs/StreamRate.h"
#include "mavros_msgs/ParamGet.h"
#include "mavros_msgs/WaypointPush.h"

class MavRosSetStreamRate {
public:
    MavRosSetStreamRate();
public:
    int SYSID_MYGCS_Value;
    int ARMING_CHECK_Value;
    int FS_GCS_ENABLE_Value;
};

#endif // MAVROS_SETSTREAMRATE_H
