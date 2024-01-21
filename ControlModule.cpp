//ControlModule.cpp Implements functions of ControlModule.h
#include "ControlModule.h";

// Function to initialize GPS data in the ControlModule
void ControlModule::InitializeData(double latitude1, double longitude1, double latitude2, double longitude2) {
    // Set the initial and destination GPS coordinates
    gpsData.curr_latitude = latitude1;
    gpsData.curr_longitude = longitude1;
    gpsData.dest_latitude = latitude2;
    gpsData.dest_longitude = longitude2;
}

// Function to adjust speed and direction in the ControlModule
void ControlModule::adjustSpeedAndDirection() {
    int time = 0;
    double distance = 0.0;
    double speed = 60.0; // Assuming a constant speed for simplicity

    double direction = 0.0;

    // Simulate the autonomous driving system for a duration of 24 units of time
    while (time < 24) {
        // Plan the route based on GPS data
        planningModule.planroute(gpsData, distance, direction);

        // Process sensor data using the PerceptionModule
        perceptionModule.processCameraData(cameraData);
        perceptionModule.processLidarData(lidarData);
        perceptionModule.processGPSData(gpsData, speed, direction);

        // Update the route based on sensor data
        planningModule.updateRoute(lidarData, cameraData, gpsData.curr_latitude, gpsData.curr_longitude, speed);

        // Break the loop if the vehicle is within 25.0 units of distance from the destination
        if (distance < 25.0) {
            break;
        }

        // Increment the simulation time and continue the loop
        perceptionModule.incrementTime();
        time++;
    }
}