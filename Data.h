//Data.h Include Structers for CameraData, LidarData and GPSData

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

const double earthCircumference = 40040.00;

// Structure to represent camera sensor data
struct CameraData {
    enum class ObjectType {
        none,
        vehicle,
        pedestrian,
        bicycle,
        stopLight,
        speedLimit
    };
    ObjectType object;
};

// Structure to represent lidar sensor data
struct LidarData {
    enum class ObjectType {
        roadCurvature,
        smallObstruction,
        largeObstruction,
    };
    ObjectType object;
};

// Structure to represent GPS data
struct GPSData {
    double curr_longitude;   // Current longitude
    double curr_latitude;    // Current latitude
    double dest_longitude;   // Destination longitude
    double dest_latitude;    // Destination latitude
};
