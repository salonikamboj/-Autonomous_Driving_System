# Autonomous_Driving_System

## Project Description
### Introduction
The Autonomous Driving System with Multimodal Input is a group project exploring the integration of multimodal input in the design of an autonomous vehicle system. Multimodal learning involves processing data from various sources simultaneously, such as cameras, LIDAR, and GPS, to enhance the performance and robustness of machine learning models.

### UML Diagram
The project provides a Unified Modeling Language (UML) diagram representing the design pattern for multimodal input in machine learning. The UML diagram illustrates the components and interactions essential for processing data from diverse sensors to enable autonomous driving.

### Common Usage
Multimodal input has widespread applications across industries, including multimedia analysis, natural language processing (NLP), human-computer interaction (HCI), autonomous vehicles, healthcare, robotics, augmented and virtual reality, and surveillance and security. The project highlights its application in the context of an Autonomous Driving System.

### Autonomous Driving System Components
Data Structures
* CameraData: Represents data from the camera sensor.
* LidarData: Represents data from the LIDAR sensor.
* GPSData: Represents data from the GPS sensor.

Modules
1. PerceptionModule:
   * Processes camera, LIDAR, and GPS data for object and obstacle detection.
   * Updates GPS data once per hour.
   * Adjusts vehicle speed based on camera data and direction based on LIDAR data.
2. PlanningModule:
   * Plans the driving route based on current and destination GPS data.
   * Updates the route using information from camera and LIDAR data.
3. ControlModule:
   * Initializes GPS data (current and destination).
   * Processes camera, LIDAR, and GPS data through the perception module.
   * Plans and updates the route through the planning module.
   * Stops the simulation if the vehicle is within 25km of its destination.
4. AutonomousDrivingSystem:
   * Acts as the central controller.
   * Passes initial GPS data to the control module.
   * Runs the simulation for 24 hours or until the vehicle is within 25km of its destination.

### Test Program
A sample run of the autonomous driving system is provided, demonstrating the user interaction for entering initial and destination GPS data. The simulation runs for 24 hours or until the vehicle is within 25km of its destination, printing the progress at each time step.
A sample run looks as follows: 

What is your initial location (latitude): 30
                              (longitude): 30
                             
What is your destination location (latitude): 32
                                 (longitude): 32
                                 
You are at 30 long, 30 lat. You want to be at 32 long, 32 lat. You are 292.965km away from your destination.
You need to travel at 45 degrees.

You are at 30.1907 long, 30.1927 lat. You want to be at 32 long, 32 lat. You are 264.747km away from your destination.
You need to travel at 44.9683 degrees.

You are at 30.3834 long, 30.3836 lat. You want to be at 32 long, 32 lat. You are 236.595km away from your destination.
You need to travel at 44.9963 degrees.

You are at 30.4469 long, 30.4491 lat. You want to be at 32 long, 32 lat. You are 227.088km away from your destination.
You need to travel at 44.959 degrees.

You are at 30.4787 long, 30.483 lat. You want to be at 32 long, 32 lat. You are 222.251km away from your destination.
You need to travel at 44.9196 degrees.

You are at 30.5283 long, 30.5307 lat. You want to be at 32 long, 32 lat. You are 215.126km away from your destination.
You need to travel at 44.9533 degrees.

You are at 30.5283 long, 30.5327 lat. You want to be at 32 long, 32 lat. You are 214.956km away from your destination.
You need to travel at 44.9143 degrees.

You are at 30.687 long, 30.6939 lat. You want to be at 32 long, 32 lat. You are 191.458km away from your destination.
You need to travel at 44.8496 degrees.

You are at 30.8475 long, 30.8532 lat. You want to be at 32 long, 32 lat. You are 168.019km away from your destination.
You need to travel at 44.8577 degrees.

You are at 30.9109 long, 30.919 lat. You want to be at 32 long, 32 lat. You are 158.528km away from your destination.
You need to travel at 44.7881 degrees.

You are at 30.9426 long, 30.9529 lat. You want to be at 32 long, 32 lat. You are 153.698km away from your destination.
You need to travel at 44.7207 degrees.

You are at 30.9921 long, 31.0008 lat. You want to be at 32 long, 32 lat. You are 146.584km away from your destination.
You need to travel at 44.751 degrees.

You are at 30.9921 long, 31.0028 lat. You want to be at 32 long, 32 lat. You are 146.414km away from your destination.
You need to travel at 44.6936 degrees.

You are at 31.1502 long, 31.1646 lat. You want to be at 32 long, 32 lat. You are 122.952km away from your destination.
You need to travel at 44.5096 degrees.

You are at 31.3097 long, 31.3249 lat. You want to be at 32 long, 32 lat. You are 99.5411km away from your destination.
You need to travel at 44.3645 degrees.

You are at 31.3726 long, 31.3911 lat. You want to be at 32 long, 32 lat. You are 90.0603km away from your destination.
You need to travel at 44.1401 degrees.

You are at 31.4039 long, 31.4254 lat. You want to be at 32 long, 32 lat. You are 85.2355km away from your destination.
You need to travel at 43.9474 degrees.

You are at 31.4527 long, 31.474 lat. You want to be at 32 long, 32 lat. You are 78.1229km away from your destination.
You need to travel at 43.8652 degrees.

You are at 31.4527 long, 31.476 lat. You want to be at 32 long, 32 lat. You are 77.9561km away from your destination.
You need to travel at 43.7562 degrees.

You are at 31.6082 long, 31.6403 lat. You want to be at 32 long, 32 lat. You are 54.5141km away from your destination.
You need to travel at 42.5495 degrees.

You are at 31.7622 long, 31.8059 lat. You want to be at 32 long, 32 lat. You are 31.1513km away from your destination.
You need to travel at 39.2161 degrees.

You are at 31.819 long, 31.8776 lat. You want to be at 32 long, 32 lat. You are 21.8474km away from your destination.
You need to travel at 34.0758 degrees.

You have arrived! (close enough)

### Conclusion
The Autonomous Driving System with Multimodal Input showcases the practical application of multimodal learning in the domain of autonomous vehicles. The project provides a foundation for further exploration and development in the exciting field of autonomous driving.
