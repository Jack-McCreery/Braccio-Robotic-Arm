# Braccio-Robotic-Arm
C++ Integration using Arduino IDE into Braccio robotic arm to pick up and place a cup 90 degrees indefinitely.

Introduction 
Purpose
○ Control the Braccio Robotic arm using an Arduino Board. 
○ Write C++ functions that control each arm joint. 
○ Understand how C++ programming applies to real robotics. 
○ Produce smooth, incremental arm movements. 
● Importance of utilizing this tool (robotic arms in engineering) 
○ Both learning and making use of these tools are important because robotic 
arms are typically employed to replace existing mechanical functions in a 
plethora of different use cases.  
○ For instance, in applications that can allow for automation loops of 
repetitive tasks, or as a prosthesis. Computer-operated robotic arms can 
be much more convenient, efficient,  and precise than general human 
labor. 
● Objective of the project: 
○ Grab, lift, move, and gently set down a cup via C++ in Arduino. 
Summary of Work Completed 
● Tools used: 
○ Arduino IDE (Integrated Development Environment) 
○ Arduino Board 
○ Braccio Robotic Arm 
● Steps taken to set up the project: 
○ Installed Arduino IDE and Braccio library 
○ Selected the correct board (Arduino Mega) 
○ Ran codes under our simpleMovement and BracioStop files 
○ Established four separate functions 
● How we wrote the custom C++ functions: 
○ Use of void loops for smooth motion, delay, etc 
○ Testing and verifying movement 
○ Ensuring all axes of the arm worked - M2 initially did not 
Six Axes of the Braccio Arm  
Manipulation of one axis at a time is vastly different from all six, illuminating the 
importance of the group gaining experience with the system. Trial and error was 
the group's most effective way of gaining proficiency. 
● Axis 1: Base rotation (left/right) - controls the base of the robot, which can be 
input to move left 90 degrees or right 90 degrees for a total of 180 degrees of 
movement.  
● Axis 2: Lower arm (up/down) - controls the first arm of the robot, which can be 
input to move between 15 and 165 degrees, with 90 degrees standing the arm 
straight up. 
● Axis 3: Upper arm (forward/backward) - controls the second arm or the elbow of 
the arm, with movement from 0 to 180 degrees.  
● Axis 4: Wrist rotation (roll) - controls how high or low the wrist of the arm goes, 
with movement from 0 to 180 degrees. 
● Axis 5: Wrist vertical movement - controls the wrist’s rotation, which is again 
allowed to move from 0 to 180 degrees. 
● Axis 6: Gripper rotation - controls the grip of the arm, with 10 degrees opening 
the hand and 73 degrees closing the hand.  
Code and Functionality  
● Key functions used: 
○ #include Braccio.h & Servo.h are the base compilers to ensure the code is 
being uploaded into the robot. 
○ Servo commands were established for the base (M1), shoulder (M2), elbow 
(M3), wrist rotation (M4), wrist vertical movement (M5), and gripper 
(M6). 
○ Braccio.begin(); function initializes our code. 
○ For part two, we simplified to four main functions: 
■ Our initial setup, while not a function, established a baseline to 
start from. 
■ ArmGrab, which’s purpose was to set the arm forward with an open 
claw.   
■ ArmMove, which first raised the cup, allowing for the ninety-degree 
movement, then lowering the cup in place. 
■ openclose, that ensured the cup was properly seated, released, then 
re-latched. 
■ ArmReturn, the inverse of Arm move, raised the cup, rotated 
ninety-degrees back, then lowered the cup 
○ The initial values for the arm were set in a position to allow the functions 
to run with minimal conflict between the table and the arm. 
○ Movement positions M1 - M6 were set to individual positions with delays 
between them, as well as the increase in delay between each degree of 
actuation within the .ServoMovement command - which allowed for a 
smooth transition with precise starts and stops. 
○ The “simpleMovements” file was the file utilized for test movements, while 
“bracciostop” with only our basic setup positions was utilized to hold the 
arm in a neutral position (as opposed to unplugging the arm). 
Conclusion  
● What we learned: 
○ Robotic motion control 
○ Practical use of C++ in engineering 
● Challenges faced: 
○ Major - The group noticed there was a lack of movement in M2. This issue 
was allowable as the remaining portion of code was structured as if M2 
was non-functional. As the project progressed, M1 then experienced the 
same issue. After disassembling the arm, the group noticed the arm 
consisted of a small plastic pentagonal fitment plate that slotted into the 
servo and had plastic teeth within the internal gear on the piece which had 
been stripped. Both the issues for M1 and M2 were amended by replacing 
the plastic piece with one with proper teeth. 
○ Minor - Lack of alignment from the arm to the baseplate, as well as 
unclear degree specification markings needed an adjustment in code to 
compensate. 
● Importance of this project for future engineering projects 
○ Part two of this project allowed the group to apply their knowledge of C++ 
into a real world application 
○ This enhanced the group's knowledge of basic systems and encouraged 
further enrichment in more complex systems. 
