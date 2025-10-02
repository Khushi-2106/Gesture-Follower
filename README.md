            🤖 Head Pose-Based Servo Motor Control System 🤖

-- PROJECT OVERVIEW

This project integrates computer vision with embedded systems to control a servo motor based on a person’s head orientation. Using a webcam and facial landmark detection, the system estimates head movements (pitch, yaw, roll) in real time and adjusts the servo motor accordingly. Such a system can be applied in assistive devices, human-computer interaction, and robotics.

-- KEY HIGHLIGHTS

-> Real-time head pose tracking using OpenCV and dlib
-> Facial landmark detection with a 68-point predictor
-> Pose estimation (Pitch, Yaw, Roll) via solvePnP
-> Servo motor control through Arduino using the yaw angle
-> Data logging of pose angles (pitch, yaw, roll) into CSV for analysis
-> Visual overlay of head orientation on the video stream
-> Safe program termination with a single keypress (q)

-- HARDWARE AND SOFTWARE COMPONENTS

-> Arduino UNO – Interfaces with and controls the servo motor
-> Servo Motor – Rotates according to the calculated yaw angle
-> Computer (Python environment) – Runs OpenCV & dlib for pose estimation
-> Webcam – Captures live video input for processing
-> Dlib Shape Predictor – Pre-trained 68-point facial landmark model    (shape_predictor_68_face_landmarks.dat)
-> Serial Communication – Transfers head pose data to Arduino
-> Power Supply – Provides power for Arduino and servo motor

-- SYSTEM WORKFLOW

-> Webcam continuously captures live video frames.
-> Dlib detects faces and extracts 68 facial landmarks.
-> Head pose (Pitch, Yaw, Roll) is estimated from the landmark positions.
-> The yaw value is mapped to a servo angle (0°–180°).
-> Angle data is sent via serial communication to the Arduino.
-> Arduino drives the servo motor to match the user’s head orientation.
-> Pose data is logged into a CSV file for post-analysis.

-- DATA OUTPUT

The system records head pose information in a CSV file (head_posture_data.csv) with real-time values of pitch, yaw, and roll.
