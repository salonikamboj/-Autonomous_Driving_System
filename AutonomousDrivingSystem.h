//AutonomousDrivingSystem.h to act as the central controller, to pass initial GPS data to the control module and to run the simulation

#include "ControlModule.h";
#ifndef AUTONOMOUSDDRIVINGSYSTEEM_H
#define AUTONOMOUSDDRIVINGSYSTEEM_H


class AutonomousDrivingSystem {

    ControlModule controlModule; // object of the ControlModule

public:
    //  to initialize GPS data for the autonomous driving system
    void initGpsData(double latitude1, double longitude1, double latitude2, double longitude2);

    // to run the simulation of the autonomous driving system
    void runSimulation();
};

void AutonomousDrivingSystem::initGpsData(double latitude1, double longitude1, double latitude2, double longitude2) {
    controlModule.InitializeData(latitude1, longitude1, latitude2, longitude2);

}

void AutonomousDrivingSystem::runSimulation() {
    controlModule.adjustSpeedAndDirection();

};
#endif // AUTONOMOUSDDRIVINGSYSTEEM_H
