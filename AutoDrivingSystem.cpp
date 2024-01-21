//AutoDrivingSystem.cpp - an autonomous driving system

# include"AutonomousDrivingSystem.h";

int main() {
    // Create an instance of the AutonomousDrivingSystem
    AutonomousDrivingSystem autonomousDrivingSystem;
    double latitude1, latitude2;
    double longitude1, longitude2;

    cout << "What is your initial location (latitude): ";
    cin >> latitude1;
    cout << "                             (longitude): ";
    cin >> longitude1;

    cout << "What is your destination location (latitude): ";
    cin >> latitude2;
    cout << "                                 (longitude): ";
    cin >> longitude2;

    // Initialize GPS data in the AutonomousDrivingSystem
    autonomousDrivingSystem.initGpsData(latitude1, longitude1, latitude2, longitude2);

    // Run the simulation of the autonomous driving system
    autonomousDrivingSystem.runSimulation();

    cout << "You have arrived! (close enough)" << endl;

    return 0;
}
