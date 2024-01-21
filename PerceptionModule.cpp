//PerceptionModule.cpp implements functions of perceptionModule.h

#include"PerceptionModule.h";

// Function to process camera sensor data and assign object type based on a timer
void PerceptionModule::processCameraData(CameraData& cameraData) {
    switch (timer) {
    case 0:
        cameraData.object = CameraData::ObjectType::none;
        break;
    case 1:
        cameraData.object = CameraData::ObjectType::vehicle;
        break;
    case 2:
        cameraData.object = CameraData::ObjectType::pedestrian;
        break;
    case 3:
        cameraData.object = CameraData::ObjectType::bicycle;
        break;
    case 4:
        cameraData.object = CameraData::ObjectType::stopLight;
        break;
    case 5:
        cameraData.object = CameraData::ObjectType::speedLimit;
        break;
    default:
        cameraData.object = CameraData::ObjectType::none;
    }
}

// Function to process lidar sensor data and assign object type based on a timer
void PerceptionModule::processLidarData(LidarData& lidarData) {
    switch (timer) {
    case 0:
    case 3:
        lidarData.object = LidarData::ObjectType::roadCurvature;
        break;
    case 1:
    case 4:
        lidarData.object = LidarData::ObjectType::smallObstruction;
        break;
    case 2:
    case 5:
        lidarData.object = LidarData::ObjectType::largeObstruction;
        break;
    default:
        lidarData.object = LidarData::ObjectType::roadCurvature;
    }
}

// Function to process GPS data and update current longitude and latitude based on speed and direction
void PerceptionModule::processGPSData(GPSData& gpsData, double speed, double direction) {
    gpsData.curr_longitude += 180.0 * speed * sin(M_PI / 180.0 * direction) / earthCircumference;
    gpsData.curr_latitude += 180.0 * speed * cos(M_PI / 180.0 * direction) / earthCircumference;
}

// Function to increment the timer
void PerceptionModule::incrementTime() {
    ++timer;
    timer = timer % MAX_TIME;
}