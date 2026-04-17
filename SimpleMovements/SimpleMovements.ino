#include <Braccio.h>
#include <Servo.h>

Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_rot;
Servo wrist_ver;
Servo gripper; 

   //functions
   void ArmGrab(int M1, int M2, int M3, int M4, int M5, int M6){   
     Braccio.ServoMovement(20,         90, M2, 90, 75, M5,  M6);  //sets standard arm forward after setup
       delay(500);
     Braccio.ServoMovement(20,         M1, M2, M3, M4, M5,  73); //closes claw
       delay(500);
     
   }

   void ArmMove(int M1, int M2, int M3, int M4, int M5, int M6){ 
       Braccio.ServoMovement(20,         M1, M2, 130, 35, M5,  73); //raises cup
         delay(500);
       Braccio.ServoMovement(20,         180, M2, 130, 35, M5,  73);  //rotates arm 90 deg
         delay(500);
      Braccio.ServoMovement(20,         180, M2, 90, 75, M5,  73);   //lowers arm
          delay(500);
      }

   void openclose(int M1, int M2, int M3, int M4, int M5, int M6){
      Braccio.ServoMovement(20,         180, M2, M3, M4, M5,  10); //claw open at 180
         delay(1000);
       Braccio.ServoMovement(20,         180, M2, M3, M4, M5,  73); //claw close at 180
          delay(500);
   }

   void ArmReturn(int M1, int M2, int M3, int M4, int M5, int M6){
      Braccio.ServoMovement(20,         180, M2, 130, 35, M5,  73); //arm lift
       delay(500);
       Braccio.ServoMovement(20,         90, M2, 130, 35, M5,  73); //arm rotate back 90 deg
       delay(500);
       Braccio.ServoMovement(20,         90, M2, 90, 75, M5,  73);  //arm lower
        }

    
     
//setup
void setup() {
   Braccio.begin();
}


//begin movement loop
void loop() {
  


  //setup declares
   int M1=90;   //set to be at the 90 degree rotation position | M1=base degrees. Allowed values from 0 to 180 degrees
   int M2=0;   // at a 90 deg angle |  M2=shoulder degrees. Allowed values from 15 to 165 degrees
   int M3=90;   //straight forward position |  M3=elbow degrees. Allowed values from 0 to 180 degrees
   int M4=75;   //m4 at a slight downward tilt to be horizontals | M4=wrist vertical degrees. Allowed values from 0 to 180 degrees
   int M5=90; //m5 straight forward |  M5=wrist rotation degrees. Allowed values from 0 to 180 degrees
   int M6=10; //m6  10: the toungue is open, 73: the gripper is closed


//movement code:
  Braccio.ServoMovement(20,         M1, M2, M3, M4, M5,  M6);  // Setup position
 delay (1000);


  ArmGrab(M1, M2, M3, M4, M5,  M6);  // opens, forward and grab

  ArmMove(M1, M2, M3, M4, M5,  M6);  // lifts, rotates, lowers
  
  openclose(M1, M2, M3, M4, M5,  M6); //lets go, grabs

  ArmReturn(M1, M2, M3, M4, M5,  M6); //lifts, rotates lowers back
}