/*
 * Copyright (C) 2007-2013 Istituto Italiano di Tecnologia ADVR & iCub Facility
 * Authors: Enrico Mingo, Alessio Rocchi, Mirko Ferrati, Silvio Traversaro and Alessandro Settimi
 * CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 */


#ifndef _GAZEBO_YARP_IMU_PLUGIN_HH_
#define _GAZEBO_YARP_IMU_PLUGIN_HH_

#include <gazebo/gazebo.hh>
#include <gazebo/sensors/ImuSensor.hh>
#include <yarp/os/Network.h>
#include <yarp/dev/PolyDriver.h>

namespace gazebo
{
    class GazeboYarpIMU : public SensorPlugin
    {
    public:
        GazeboYarpIMU();
        virtual ~GazeboYarpIMU();

        virtual void Load(sensors::SensorPtr _sensor, sdf::ElementPtr _sdf);

    private:
        sensors::ImuSensor* parentSensor;
        yarp::os::Network _yarp;
        yarp::os::Property _parameters; 
        yarp::dev::PolyDriver _imu_driver;
        
        virtual void Init();
    };
}

#endif
