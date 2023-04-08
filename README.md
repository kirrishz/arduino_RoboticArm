# Arduino Robot Arm Controlled by Hand Gestures
 This project is a demonstration of controlling a robot arm using hand gestures detected by OpenCV, Mediapipe Library, and cvzone in Python.
 The robot arm is connected to an Arduino board which receives the commands from the Python script via a serial connection.

### Requirements
- Arduino UNO or any other compatible board
- USB Cable for Arduino
- Robot arm kit
- 5 Servo Motors
- Python 3.6 or higher
- OpenCV
- Mediapipe
- cvzone
- PySerial

### Installation
- Connect the servo motors to the robot arm as per the instructions provided with the kit.
- Connect the servo motors to the Arduino board and upload the code provided in the arduino_arm.ino file to the board.
- Install the required Python libraries using pip. You can use the following command to install them all at once:2
pip install opencv-python mediapipe cvzone pyserial

### Usage
Run the Python script robot_arm_control.py in your terminal or IDE.
Hold your hand up in front of the camera to control the robot arm. You can use the following gestures to control the arm:

- Fist: Close the gripper
- Open hand: wake up arm
- Index Finger - gripper open/close
- Middle Finger - middle joint
- Thumb Finger-base joint

![imgae 1](https://github.com/kirrishz/arduino_RoboticArm/blob/main/img/armpy.png)
![image_2](https://github.com/kirrishz/arduino_RoboticArm/blob/main/img/cv.gif)

### Acknowledgements
This project was inspired by [CVZONE](https://www.computervision.zone/courses/gesture-controlled-robot-arm/) amazing tutorials on computer vision and robotics.

### License
This project is licensed under the MIT License. Feel free to use and modify the code as per your requirements.





