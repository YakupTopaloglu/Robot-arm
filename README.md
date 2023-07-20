# Tracking-System

Project Title: Object Tracking with Arduino Uno and Python
Description:
This project aims to create an object tracking system using Arduino Uno and Python. Originally, the plan was to implement this system on a robotic arm; however, due to budget constraints, the robotic arm project has been put on hold. Instead, the project now focuses on a laptop-based implementation, where Python code running on the laptop will control the Arduino Uno to track and follow a yellow-colored object displayed on the laptop screen.

Requirements:
Arduino Uno
Python 3.8.8rcl
OpenCV-Python '4.7.0'
Arduino IDE 2.1.1
pip
Functionality:
The Python script utilizes the OpenCV library to detect a yellow-colored object displayed on the laptop screen. The object's position (i.e., its distance from the laptop screen) is calculated based on image processing techniques. The Python program then sends commands to the Arduino Uno via a serial connection to control a servo motor. The servo motor's angle is adjusted based on the calculated distance of the yellow object. As a result, the Arduino Uno can track and follow the yellow object's movement on the laptop screen.

Project Setup:
Install Python and necessary libraries: Python 3.8.8rcl, OpenCV-Python '4.7.0', and pip.
Set up the Arduino IDE version 2.1.1 on your computer.
Connect the Arduino Uno to your laptop via USB.
Running the Project:
Launch the Python script on your laptop.
Display a yellow-colored object (e.g., a yellow sticker or any yellow object) on your laptop screen.
The Python script will detect the yellow object and calculate its distance from the laptop screen.
The Arduino Uno will receive the distance information from the laptop and adjust the servo motor's angle accordingly.
The servo motor will now track and follow the yellow object's movement on the laptop screen.
Please note that the code and instructions for this project will be uploaded to GitHub to share the implementation details and allow others to replicate and build upon the project. Feel free to provide any additional documentation and explanations to make it more accessible for other enthusiasts. Happy tracking!
