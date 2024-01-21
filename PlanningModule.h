//PlanningModule.h plans the driving route based on the current GPS data and the destination GPS data, 
// and updates the route based on information from the camera data and the LIDAR data.
#include"PerceptionModule.h";

#ifndef PLANNINGMODULE_H
#define PLANNINGMODULE_H

class PlanningModule {
public:
	// calculate the distance between current location and final destination
	double calculateDistance(double lat1, double lon1, double lat2, double lon2); 

	//calculates direction for vehicle to go to
	double calculateDirection(double lat1, double lon1, double lat2, double lon2);

	// plan the route by calculating distance and direction and also prints the curreent and final location of vehicle
	void planroute(GPSData& gpsData, double& distance, double& direction);

	// update the route based on information from the camera data and the LIDAR data.
	void updateRoute(LidarData& lidarData, CameraData& cameraData, double& lat1, double& lon1, double& speed);
};

#endif //PLANNINGMODULE_H
