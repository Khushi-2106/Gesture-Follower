# 🤖 Head Pose-Based Servo Motor Control System 🤖

## Project Overview
This project integrates computer vision with embedded systems to control a servo motor based on a person’s head orientation. Using a webcam and facial landmark detection, the system estimates head movements (pitch, yaw, roll) in real time and adjusts the servo motor accordingly.  
Such a system can be applied in **assistive devices, human-computer interaction, and robotics**.

---

## Key Highlights
- -> Real-time head pose tracking using **OpenCV** and **dlib**  
- -> Facial landmark detection with a **68-point predictor**  
- -> Pose estimation (**Pitch, Yaw, Roll**) via `solvePnP`  
- -> Servo motor control through **Arduino** based on yaw angle  
- -> Data logging of pose angles into **CSV** for analysis  
- -> Visual overlay of head orientation on the video feed  
- -> Safe program termination with a single keypress (`q`)  

---

## Hardware & Software Components
- **Arduino UNO** – Interfaces with and controls the servo motor  
- **Servo Motor** – Rotates according to the calculated yaw angle  
- **Computer (Python environment)** – Runs OpenCV & dlib for pose estimation  
- **Webcam** – Captures live video input for processing  
- **Dlib Shape Predictor** – Pre-trained 68-point facial landmark model (`shape_predictor_68_face_landmarks.dat`)  
- **Serial Communication** – Transfers head pose data to Arduino  
- **Power Supply** – Provides power for Arduino and servo motor  

---

## System Workflow
1. Webcam continuously captures live video frames  
2. Dlib detects faces and extracts **68 facial landmarks**  
3. Head pose (Pitch, Yaw, Roll) is estimated from landmark positions  
4. Yaw value is mapped to a servo angle (0°–180°)  
5. Angle data is sent via **serial communication** to the Arduino  
6. Arduino drives the servo motor to match the head orientation  
7. Pose data is logged into a **CSV file** for further analysis  

---

## Data Output
The system records head pose information in a CSV file (`head_posture_data.csv`) with real-time values of pitch, yaw, and roll:

```text
timestamp, pitch, yaw, roll
2025-09-30 14:02:01, -2.35, 15.42, 1.20
2025-09-30 14:02:02, -1.98, 14.97, 1.05
