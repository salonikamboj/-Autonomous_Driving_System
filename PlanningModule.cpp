//PlanningModule.cpp implements function of plannningModule.h

#include"PlanningModule.h"

// Reference: https://rosettacode.org/wiki/Haversine_formula
double PlanningModule::calculateDistance(double lat1, double lon1, double lat2, double lon2) {
    // Implementation of Haversine formula
    double dlat = (lat2 - lat1) * (M_PI / 180.0);  // Convert degrees to radians
    double dlon = (lon2 - lon1) * (M_PI / 180.0);  // Convert degrees to radians

    double a = pow(sin(dlat / 2), 2) + cos(lat1 * (M_PI / 180.0)) * cos(lat2 * (M_PI / 180.0)) * pow(sin(dlon / 2), 2);
    double c = 2 * atan2(sqrt(a), sqrt(1 - a));

    //calculate distance
    double distance = earthCircumference * c / (2 * M_PI); 

    return distance;
}

// Function to calculate the direction between two points
double PlanningModule::calculateDirection(double lat1, double lon1, double lat2, double lon2) {

    double dlat = (lat2 - lat1);
    double dlon = (lon2 - lon1);

    // implement the direction formula
    double direction = atan2(dlat, dlon) * 180.0 / M_PI;

    return direction;
}

// Function to plan the route based on GPS data
void PlanningModule::planroute(GPSData& gpsData, double& distance, double& direction) {
    // Calculate the distance and direction from the current GPS coordinates to the destination
    distance = calculateDistance(gpsData.curr_latitude, gpsData.curr_longitude, gpsData.dest_latitude, gpsData.dest_longitude);

    direction = calculateDirection(gpsData.curr_latitude, gpsData.curr_longitude, gpsData.dest_latitude, gpsData.dest_longitude);

    // Display information about the current location, destination, distance, and required direction
    cout << "You are at " << gpsData.curr_longitude << " long, " << gpsData.curr_latitude << " lat. "
        << "You want to be at " << gpsData.dest_longitude << " long, " << gpsData.dest_latitude << " lat. "
        << "You are " << distance << "km away from your destination." << endl;
    cout << "You need to travel at " << direction << " degrees." << endl << endl;
}

// Function to update the route based on sensor data (CameraData and LidarData)
void PlanningModule::updateRoute(LidarData& lidarData, CameraData& cameraData, double& lat1, double& lon1, double& speed) {
    // Update the route based on the type of object detected by the camera
    //Camera object update the speed of the vehicle
    switch (cameraData.object) {
    case CameraData::ObjectType::none:
        break;
    case CameraData::ObjectType::vehicle:
        // Update route based on the presence of a vehicle in camera data
        speed = 20.0;
        break;
    case CameraData::ObjectType::pedestrian:
        // Update route based on the presence of a pedestrian in camera data
        speed = 10.0;
        break;
    case CameraData::ObjectType::bicycle:
        // Update route based on the presence of a bicycle in camera data
        speed = 15.0;
        break;
    case CameraData::ObjectType::stopLight:
        // Update route based on the presence of a stop light in camera data
        speed = 0.0;
        break;
    case CameraData::ObjectType::speedLimit:
        // Update route based on the presence of a speed limit sign in camera data
        speed = 50.0;
        break;
    }

    // Update the route based on LIDAR data
    //lidar object update the coordinates of the vehicle
    switch (lidarData.object) {
    case LidarData::ObjectType::roadCurvature:
        // Update route based on road curvature information from lidar data
        lat1 += 0.002;
        break;
    case LidarData::ObjectType::smallObstruction:
        // Update route based on the presence of a small obstruction in lidar data
        lon1 += 0.002;
        break;
    case LidarData::ObjectType::largeObstruction:
        // Update route based on the presence of a large obstruction in lidar data
        lat1 += 0.002;
        break;
    }
}
