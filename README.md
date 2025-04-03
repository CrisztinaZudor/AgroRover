# AgroRover

## Description
AgroRover is an autonomous robotic platform designed for agricultural monitoring. The project integrates mechanical systems, hardware components, and software applications to effectively navigate and gather data in agricultural environments.

## Technologies Used
- **Mechanical Components**: Rocker-Bogie suspension mechanism, 3D printed parts.
- **Hardware**: Arduino Mega 2560 R3, Raspberry Pi 4 Model B, Ultrasonic sensors, BME680 sensor, TT gearmotor, Servomotors, Motor driver, and a Raspberry Pi Camera Model 3.
- **Software**: Arduino IDE, Node-RED, InfluxDB, Grafana, VLC for video streaming.

## Implementation

### Building the Robot
AgroRover is constructed from three main parts: the Rocker, the Bogie, and the Housing, all produced through 3D printing. The 3D model was designed using Autodesk Fusion, providing a robust and adaptable structure, ideal for navigating agricultural terrains.

**The Rocker-Bogie and Housing:**  
![Image](https://github.com/user-attachments/assets/06b50f2e-769e-4de6-80b1-58edaea05c91)

**The Power Supply Section:**  
![image](https://github.com/user-attachments/assets/c268d25b-275e-4e45-8e4e-4ed1e71d407b)

**The Control and Processing Section:**  
![image](https://github.com/user-attachments/assets/d12de5b4-89da-4dbd-ada3-c36264b265d3)

### Autonomous Motion
The autonomous motion of the robot is controlled by the Arduino Mega, which acts as the brain of the operation. It processes distance measurements from an ultrasonic sensor to navigate around obstacles and controls the motion through servomotors and motor drivers. The autonomy is facilitated by a custom algorithm that dictates movement instructions based on sensor input.  
![image](https://github.com/user-attachments/assets/030181c1-5d2e-4449-8c39-e5fc8fea7ee5)

### Monitoring and Control
The Raspberry Pi 4 Model B manages the monitoring and network communication, utilizing Node-RED for orchestrating data flows and InfluxDB for data storage. Grafana visualizes the data, while remote management is achieved through SSH and web interfaces. The system also incorporates video streaming capabilities using raspivid and netcat for real-time field monitoring.  
![image](https://github.com/user-attachments/assets/93197526-8310-4c5d-8bc7-e0b784ed6007)

## Experimental Results
During testing, the robot demonstrated effective navigation and data collection capabilities, though limitations were noted with obstacle detection precision and maneuverability on varying surfaces. These insights have guided further refinements in design and functionality.  
**AgroRover Final Assembly:**  
![image](https://github.com/user-attachments/assets/40f42cc0-04f9-4d7b-b8ea-20b732361e8f)

**Grafana Interface:**  
![image](https://github.com/user-attachments/assets/002baebf-dae3-4d3e-b83a-2efdc552ebaf)

## Setup Instructions
1. **Assembly of the Robot**: Follow the images in the implementation part to build the mechanical structure of AgroRover.  
   **Connections for the Autonomous Movement Module:**  
   ![image](https://github.com/user-attachments/assets/6cef90bd-101f-455a-9762-34abe123dff5)

   **The Final Configuration of the Monitoring Module:**  
   ![image](https://github.com/user-attachments/assets/33aaaac6-f86b-4f76-82f8-d8040c5ca17d)

2. **Installing the Control Software**:
   - **Arduino Setup**: Load the provided Arduino code into the Arduino Mega 2560 R3. This code manages the motors and sensors, ensuring smooth autonomous operations. See `AgroRover.ino` in the repository.
   - **Raspberry Pi Setup**: Set up the Raspberry Pi OS and configure it for network access. Install Node-RED, InfluxDB, and Grafana following the configuration provided in the implementation part.

## Usage
- Start the system by powering the Raspberry Pi and Arduino.
- Access the Node-RED web interface via the Raspberry Pi's IP to monitor and control the data flows.
- Use Grafana to visualize the collected data in insightful dashboards.
- Monitor the video stream through VLC using the Raspberry Pi camera for real-time visual feedback of the environment.

---

This revised README ensures better readability and correctness while maintaining a professional tone suitable for a project documentation.
