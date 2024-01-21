//ControlModule.h initializes GPS data (current and destination)  
//  processes camera, lidar and gps data through the perception module. 
// It also plans and updates the route through the planning module. 
// If the vehicle is within 25km of its destination, the simulation stops.

#include"PlanningModule.h";
 
#ifndef CONTROLMODULE_H
#define CONTROLMODULE_H

class ControlModule {
    GPSData gpsData; //object of GPSdata structure
    PerceptionModule perceptionModule; // Object of perceptionmodule
    PlanningModule planningModule; // object of planningmodule
    CameraData cameraData;  // Create an instance of CameraData
    LidarData lidarData;    // Create an instance of LidarData
public:
    //initializes GPS data (current and destination)  
    void InitializeData(double latitude1, double longitude1, double latitude2, double longitude2) ;

    // a function that adjust speed and direction based on:
    //- the processing of sensor data
    //- the planning of your route
    //- the updating of your route
    void adjustSpeedAndDirection();
};
#endif //CONTROLMODULE_H
