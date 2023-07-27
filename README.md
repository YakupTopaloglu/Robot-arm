# Object Tracking with Arduino Uno and Python

![Tracking example gif](https://github.com/YakupTopaloglu/Excel-Python/assets/112806251/d9021792-d2aa-4c88-b1aa-fb01b8691c0b)

# Description
This project showcases an object tracking system using an Arduino Uno and Python. Originally intended to be implemented on a robot arm, we decided to modify the project to work on a laptop to reduce costs without compromising functionality.

# Objective
The main goal of this project is to create an object tracking system that can follow and mask the color yellow within the live video feed captured by the laptop's webcam. Python and Arduino Uno are utilized to achieve this functionality.

# Hardware Requirements
- Arduino Uno
- Laptop with a webcam or phone's camera
- Servo motor (connected to Arduino Uno)
- Object to be tracked (with a yellow color feature)

# Software Requirements
- Python 3.8.8rcl
- OpenCV-Python '4.7.0'
- Arduino IDE 2.1.1

# How it Works
- The Python program accesses the laptop's webcam through OpenCV and captures the live video feed.
- The color detection algorithm identifies pixels with a yellow color in the video stream.
- The program calculates the position and distance of the yellow object from the webcam's view.
- Based on the object's position, it calculates the servo motor's angle required to keep the object in focus.
- Arduino Uno communicates with the Python program to adjust the servo motor's position accordingly.

# Usage
- Connect the Arduino Uno to your laptop via USB.
- Ensure you have installed the required libraries mentioned in the "Software Requirements" section.
- Run the Python script on your laptop to initiate the object tracking system.
- Place a yellow object within the webcam's view, and the servo motor will automatically adjust its angle to keep the object in focus.

#Contributions
Contributions to this project are welcome! If you find any issues or have suggestions for improvement, feel free to open an issue or submit a pull request.

[Linkedin](https://www.linkedin.com/in/yakup-topaloglu-a4ab39245?lipi=urn%3Ali%3Apage%3Ad_flagship3_profile_view_base_contact_details%3BrCEPkC0GRJWwx05SYR%2Bd4Q%3D%3D)
  
