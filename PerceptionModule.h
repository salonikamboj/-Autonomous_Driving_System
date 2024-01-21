//Parceptionmodule.h  processes camera, LIDAR, and GPS data for object and obstacle detection once per hour. 
// Data from the camera will adjust the vehicle's speed and data from the LIDAR the vehicle's direction. 
// Every time tick (once per hour) the current GPS data is updated. 

#include"Data.h";

#ifndef PERCEPTIONMODULE_H
#define PERCEPTIONMODULE_H

// Perception Module - processes camera, lidar and GPS data
class PerceptionModule {
    int timer = 0;//increments once per hour
    const int MAX_TIME = 6;
public:
    void processCameraData(CameraData& cameraData); // process camera data
    void processLidarData(LidarData& lidarData); //process Lidar data
    void processGPSData(GPSData& gpsData, double speed, double direction);//update gps data
    void incrementTime(); 
};


#endif //PERCEPTIONMODULE_H_
