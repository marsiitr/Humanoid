#include <PID_v1.h> 
//Upper
const int motorAUpper1_cloc  = 30;
const int motorAUpper1_anticloc  = 31;
const int motorAUpper2_cloc = 32;
const int motorAUpper2_anticloc = 33;
const int motorALower1_cloc  = 34 ;
const int motorALower1_anticloc  = 35;
const int motorALower2_cloc = 36;
const int motorALower2_anticloc = 37;
const int motorBUpper1_dir  = 38;
const int motorBUpper2_dir = 39;
const int motorBLower1_dir  = 40 ;
const int motorBLower2_dir = 41;

const int motorAUpper1_pwm  = 2;
const int motorAUpper2_pwm  = 3 ;
const int motorALower1_pwm  = 4 ;
const int motorALower2_pwm  = 5;
const int motorBUpper1_pwm  = 6;
const int motorBUpper2_pwm  = 7;
const int motorBLower1_pwm  = 8 ;
const int motorBLower2_pwm  = 9;

const int pot_A_Upper_front_back_pin = A1;
const int pot_A_Upper_side_side_pin = A0;
const int pot_A_lower_front_back_pin = A2;
const int pot_A_lower_side_side_pin = A3;
const int pot_B_Upper_front_back_pin = A5;
const int pot_B_Upper_side_side_pin = A4;
const int pot_B_lower_front_back_pin = A6;
const int pot_B_lower_side_side_pin = A7;


double pot_A_Upper_front_back_value = 0;
double potvalueAUpper_front_back = 0;
double pot_A_Upper_side_side_value = 0;
double potvalueUpperA_side_side = 0;
double pot_A_lower_front_back_value = 0;
double potvalueALower_front_back = 0;
double pot_A_lower_side_side_value = 0;
double potvalueLowerA_side_side = 0;
double pot_B_Upper_front_back_value = 0;
double potvalueBUpper_front_back = 0;
double pot_B_Upper_side_side_value = 0;
double potvalueUpperB_side_side = 0;
double potvalueBLower_front_back = 0;
double pot_B_lower_side_side_value = 0;
double potvalueLowerB_side_side = 0;
double pot_B_lower_front_back_value = 0;


int motorAUpper1Speed = 150;
int motorAUpper2Speed = 100;
unsigned long previous = 0;
unsigned long current = 0;
int motorALower1Speed = 150;
int motorALower2Speed = 150;
int motorBUpper1Speed = 100;
int motorBUpper2Speed = 100;
int motorBLower1Speed = 100;
int motorBLower2Speed = 100;

double range = 2;
double range2 = 2;


//pid for Upper pot (front-back motion)
double P_Upper_A_front_back = 30;
double I_Upper_A_front_back = 0;
double D_Upper_A_front_back = 2;

double setpoint_Upper_A_front_back = 0;
double input_Upper_A_front_back = 0;
double output_Upper_A_front_back = 0;
PID pid_Upper_A_front_back(&input_Upper_A_front_back, &output_Upper_A_front_back, &setpoint_Upper_A_front_back,  P_Upper_A_front_back, I_Upper_A_front_back, D_Upper_A_front_back, DIRECT);


//pid for Upper pot A (side-side motion)
double P_Upper_A_side_side = 30;
double I_Upper_A_side_side = 0;
double D_Upper_A_side_side = 2;


double setpoint_Upper_A_side_side = 0;
double input_Upper_A_side_side = 0;
double output_Upper_A_side_side = 0;
PID pid_Upper_A_side_side(&input_Upper_A_side_side, &output_Upper_A_side_side, &setpoint_Upper_A_side_side,  P_Upper_A_side_side, I_Upper_A_side_side, D_Upper_A_side_side, DIRECT);



//pid for lower pot (front-back motion)
double P_lower_A_front_back = 30;
double I_lower_A_front_back = 0;
double D_lower_A_front_back = 2;

double setpoint_lower_A_front_back = 0;
double input_lower_A_front_back = 0;
double output_lower_A_front_back = 0;
PID pid_lower_A_front_back(&input_lower_A_front_back, &output_lower_A_front_back, &setpoint_lower_A_front_back,  P_lower_A_front_back, I_lower_A_front_back, D_lower_A_front_back, DIRECT);


//pid for lower pot A (side-side motion)
double P_lower_A_side_side = 30;
double I_lower_A_side_side = 0;
double D_lower_A_side_side = 2;

double setpoint_lower_A_side_side = 0;
double input_lower_A_side_side = 0;
double output_lower_A_side_side = 0;
PID pid_lower_A_side_side(&input_lower_A_side_side, &output_lower_A_side_side, &setpoint_lower_A_side_side,  P_lower_A_side_side, I_lower_A_side_side, D_lower_A_side_side, DIRECT);




//pid for Upper pot (front-back motion)
double P_Upper_B_front_back = 30;
double I_Upper_B_front_back = 0;
double D_Upper_B_front_back = 2;

double setpoint_Upper_B_front_back = 0;
double input_Upper_B_front_back = 0;
double output_Upper_B_front_back = 0;
PID pid_Upper_B_front_back(&input_Upper_B_front_back, &output_Upper_B_front_back, &setpoint_Upper_B_front_back,  P_Upper_B_front_back, I_Upper_B_front_back, D_Upper_B_front_back, DIRECT);

double P_Upper_B_side_side = 30;
double I_Upper_B_side_side = 0;
double D_Upper_B_side_side = 2;


double setpoint_Upper_B_side_side = 0;
double input_Upper_B_side_side = 0;
double output_Upper_B_side_side = 0;
PID pid_Upper_B_side_side(&input_Upper_B_side_side, &output_Upper_B_side_side, &setpoint_Upper_B_side_side,  P_Upper_B_side_side, I_Upper_B_side_side, D_Upper_B_side_side, DIRECT);



//pid for lower pot (front-back motion)
double P_lower_B_front_back = 30;
double I_lower_B_front_back = 0;
double D_lower_B_front_back = 2;

double setpoint_lower_B_front_back = 0;
double input_lower_B_front_back = 0;
double output_lower_B_front_back = 0;
PID pid_lower_B_front_back(&input_lower_B_front_back, &output_lower_B_front_back, &setpoint_lower_B_front_back,  P_lower_B_front_back, I_lower_B_front_back, D_lower_B_front_back, DIRECT);

//pid for lower pot B (side-side motion)
double P_lower_B_side_side = 30;
double I_lower_B_side_side = 0;
double D_lower_B_side_side = 2;

double setpoint_lower_B_side_side = 0;
double input_lower_B_side_side = 0;
double output_lower_B_side_side = 0;
PID pid_lower_B_side_side(&input_lower_B_side_side, &output_lower_B_side_side, &setpoint_lower_B_side_side,  P_lower_B_side_side, I_lower_B_side_side, D_lower_B_side_side, DIRECT);

double offsetpot_A_Upper_side_side_value = 265;
double offsetpot_A_lower_side_side_value = 471;
double offsetpot_A_Upper_front_back_value = 726;
double offsetpot_A_lower_front_back_value = 228;
double offsetpot_B_Upper_side_side_value = 364;
double offsetpot_B_lower_side_side_value = 762 ;
double offsetpot_B_Upper_front_back_value = 714;
double offsetpot_B_lower_front_back_value = 690;

double initsetpointAUpper_front_back = -1;
double initsetpointALower_front_back = -1;
double finalsetpointAUpper_front_back = -60;//Negative
double finalsetpointALower_front_back = -35;//Negative
double initsetpointBUpper_front_back = 1;
double initsetpointBLower_front_back = -1;
double finalsetpointBUpper_front_back = 65;//Positive
double finalsetpointBLower_front_back = -45;//Negative
double initsetpointAUpper_side_side = 1 ;
double initsetpointALower_side_side = -1 ;
double initsetpointBUpper_side_side = -1 ;
double initsetpointBLower_side_side = 1 ;
double finalsetpointAUpper_side_side = 15 ; //Positive
double finalsetpointALower_side_side = 15 ;// Positive
double finalsetpointBUpper_side_side = 15 ;//Positive
double finalsetpointBLower_side_side = -15 ;//Negative


int diff = 30;

//This will run only one time.
void setup() {

  Serial.begin(9600);

  // Left Leg
  //Lower motors
  pinMode(motorALower1_pwm, OUTPUT);
  pinMode(motorALower1_cloc, OUTPUT);
  pinMode(motorALower1_anticloc, OUTPUT);
  pinMode(motorALower2_pwm, OUTPUT);
  pinMode(motorALower2_cloc, OUTPUT);
  pinMode(motorALower2_anticloc, OUTPUT);
  pinMode(pot_A_lower_front_back_pin, INPUT);
  pinMode(pot_A_lower_side_side_pin, INPUT);

  pid_lower_A_front_back.SetMode(AUTOMATIC);
  pid_lower_A_front_back.SetOutputLimits(-100, 100);
  pid_lower_A_front_back.SetSampleTime(20);

  pid_lower_A_side_side.SetMode(AUTOMATIC);
  pid_lower_A_side_side.SetOutputLimits(-100, 100);
  pid_lower_A_side_side.SetSampleTime(20);



  //Upper motors
  pinMode(motorAUpper1_pwm, OUTPUT);
  pinMode(motorAUpper1_cloc, OUTPUT);
  pinMode(motorAUpper1_anticloc, OUTPUT);
  pinMode(motorAUpper2_pwm, OUTPUT);
  pinMode(motorAUpper2_cloc, OUTPUT);
  pinMode(motorAUpper2_anticloc, OUTPUT);
  pinMode(pot_A_Upper_front_back_pin, INPUT);
  pinMode(pot_A_Upper_side_side_pin, INPUT);



  pid_Upper_A_front_back.SetMode(AUTOMATIC);
  pid_Upper_A_front_back.SetOutputLimits(-100, 100);
  pid_Upper_A_front_back.SetSampleTime(20);

  pid_Upper_A_side_side.SetMode(AUTOMATIC);
  pid_Upper_A_side_side.SetOutputLimits(-100, 100);
  pid_Upper_A_side_side.SetSampleTime(20);

  //////////////////////////////////////////////////////////////

  // Right Leg
  //Lower motors
  pinMode(motorBLower1_pwm, OUTPUT);
  pinMode(motorBLower1_dir, OUTPUT);
  pinMode(motorBLower2_pwm, OUTPUT);
  pinMode(motorBLower2_dir, OUTPUT);
  pinMode(pot_B_lower_front_back_pin, INPUT);


  pid_lower_B_front_back.SetMode(AUTOMATIC);
  pid_lower_B_front_back.SetOutputLimits(-100, 100);
  pid_lower_B_front_back.SetSampleTime(20);

  pid_lower_B_side_side.SetMode(AUTOMATIC);
  pid_lower_B_side_side.SetOutputLimits(-100, 100);
  pid_lower_B_side_side.SetSampleTime(20);


  //Upper motors
  pinMode(motorBUpper1_pwm, OUTPUT);
  pinMode(motorBUpper1_dir, OUTPUT);
  pinMode(motorBUpper2_pwm, OUTPUT);
  pinMode(motorBUpper2_dir, OUTPUT);
  pinMode(pot_B_Upper_front_back_pin, INPUT);

  pid_Upper_B_front_back.SetMode(AUTOMATIC);
  pid_Upper_B_front_back.SetOutputLimits(-100, 100);
  pid_Upper_B_front_back.SetSampleTime(20);

  pid_Upper_B_side_side.SetMode(AUTOMATIC);
  pid_Upper_B_side_side.SetOutputLimits(-100, 100);
  pid_Upper_B_side_side.SetSampleTime(20);

  stallAll();
}

int fl = 0;
void loop()

{
  //printReadA();
  //printReadB();
  //printReadSideA();
  //printReadSideB();

  //legupA();
  //legstraightA();
  //legstraightB();
  //legstraightB();
  //legTiltStraightA();
  //legTiltStraightB();
  //legTiltA();
  /*if (fl == 0) {
     legupA();
     delay(2000);
     legstraightA();
     delay(2000);
     legupB();
     delay(2000);
     legstraightB();
     //combined();
     //legstraightA();//Serial.println("changing");
     delay(2000);
     fl = 1;
    }*/
  /*if (fl == 0) {

    SitDown();
    delay(1000);
    SitUp();
    //    legupB();
    //    delay(3000);
    //    legstraightB();
    fl = 1;
  }*/
  /*if (fl == 0) {
    doSitup();
    Serial.println("changing");
    delay(5000);
    sitBack();
    fl = 1;
    }*/

  if  (fl == 0) {
    legupB();
    delay(500);
    legstraightB();
    delay(500);
     legupA();
    delay(500);
    legstraightA();
      //legTiltB();
     //combined2();
    //ombined3();
     //legupA();
     //delay(1000);
     legTiltA();
     fl=1;
    }

  stallAll();
}

