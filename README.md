# Braccio Robotic Arm Project

---

## Introduction

### Purpose of this Stage
- Control the Braccio robotic arm using an Arduino board  
- Write C++ functions to control each arm joint  
- Understand how C++ programming applies to robotics  
- Produce smooth, incremental arm movements  

### Importance of Robotic Arms
Robotic arms are widely used to replace mechanical functions across many applications. They are especially useful for:
- Automation of repetitive tasks  
- Precision-based operations  
- Prosthetics and assistive technologies  

These systems can be more efficient, consistent, and precise than manual human labor.

### Objective
- Grab, lift, move, and gently set down a cup using Arduino-controlled C++ code  

---

##  Summary of Work Completed

### Tools Used
- Arduino IDE  
- Arduino Board  
- Braccio Robotic Arm  

### Setup Steps
- Installed Arduino IDE and Braccio library  
- Selected the correct board (Arduino Mega)  
- Executed code using:
  - `simpleMovements`
  - `bracciostop`  
- Developed four custom functions  

### Custom C++ Function Design
- Used `void` loops for smooth motion and delays  
- Tested and verified movement  
- Debugged axis functionality (initial issue with M2)  

---

##  Six Axes of the Braccio Arm

Understanding individual vs. combined axis movement was critical. Trial and error played a major role.

| Axis | Description | Range |
|------|------------|-------|
| Axis 1 | Base rotation (left/right) | 0–180° |
| Axis 2 | Lower arm (up/down) | 15–165° |
| Axis 3 | Upper arm (elbow) | 0–180° |
| Axis 4 | Wrist rotation (roll) | 0–180° |
| Axis 5 | Wrist vertical movement | 0–180° |
| Axis 6 | Gripper | 10° (open) – 73° (closed) |

---

## 💻 Code and Functionality

### Key Libraries
```cpp
#include <Braccio.h>
#include <Servo.h>
