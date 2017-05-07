void legupA()
{
  readLowerPotA();
  readUpperPotA();
  while ( (abs(finalsetpointAUpper_front_back - potvalueAUpper_front_back) > range2 ) || (abs(finalsetpointALower_front_back - potvalueALower_front_back) > range2))
  {
    motorrunupperA(finalsetpointAUpper_front_back);
    motorrunlowerA(finalsetpointALower_front_back);
  }
  stallAll();
}

void legstraightA()
{
  do {
    motorrunupperA(initsetpointAUpper_front_back);
    motorrunlowerA(initsetpointALower_front_back);
  }
  while (( abs(initsetpointAUpper_front_back - potvalueAUpper_front_back) > range ) || (abs(initsetpointALower_front_back - potvalueALower_front_back) > range ));
  stallAll();
}

void legupB()
{
  readLowerPotB();
  readUpperPotB();

  while ( (abs(finalsetpointBUpper_front_back - potvalueBUpper_front_back) > range2 ) || (abs(finalsetpointBLower_front_back - potvalueBLower_front_back) > range2))
  {

    motorrunupperB(finalsetpointBUpper_front_back);
    motorrunlowerB(finalsetpointBLower_front_back );
  }
  stallAll();
}

void legstraightB() {

  readLowerPotB();
  readUpperPotB();

  while (( abs(initsetpointBUpper_front_back - potvalueBUpper_front_back) > range ) || (abs(initsetpointBLower_front_back - potvalueBLower_front_back) > range ))
  {
    motorrunupperB(initsetpointBUpper_front_back );
    motorrunlowerB(initsetpointBLower_front_back);
  }
  stallAll();
}

void combined() {
  readLowerPotA();
  readUpperPotA();
  readLowerPotB();
  readUpperPotB();

  int diff_halfA_Upper =  (finalsetpointAUpper_front_back - initsetpointAUpper_front_back) / 2;
  int diff_halfA_Lower =  (finalsetpointALower_front_back - initsetpointALower_front_back) / 2;

  while (( abs(initsetpointAUpper_front_back - potvalueAUpper_front_back) > range ) || (abs(initsetpointALower_front_back - potvalueALower_front_back) > range )) {
    motorrunupperA(initsetpointAUpper_front_back);
    motorrunlowerA(initsetpointALower_front_back);

    if ( potvalueAUpper_front_back > diff_halfA_Upper || potvalueALower_front_back > diff_halfA_Lower) {
      Serial.println("combined motion starts");
      motorrunupperB(finalsetpointBUpper_front_back);
      motorrunlowerB(finalsetpointBLower_front_back );
    }
  }
  stallAll();
}

void legTiltA( ) {

  readLowerPotSideA();
  readUpperPotSideA();
  while ( abs(finalsetpointALower_side_side - potvalueLowerA_side_side) > range2 || abs(finalsetpointAUpper_side_side - potvalueUpperA_side_side) > range2 )
  {
    motorrunSideupperA(finalsetpointAUpper_side_side);
    motorrunSidelowerA(finalsetpointALower_side_side);
  }
  stallAll();
}

void legTiltStraightA() {
  readLowerPotSideA();
  readUpperPotSideA();

  while (( abs(initsetpointAUpper_side_side - potvalueUpperA_side_side) > range ) || (abs(initsetpointALower_side_side - potvalueLowerA_side_side) > range ))
  {
    motorrunSideupperA(initsetpointAUpper_side_side );
    motorrunSidelowerA(initsetpointALower_side_side );
  }
  stallAll();

}

void legTiltB() {

  readLowerPotSideB();
  readUpperPotSideB();
  while ( abs(finalsetpointBUpper_side_side - potvalueUpperB_side_side) > range2  || abs(finalsetpointBLower_side_side - potvalueLowerB_side_side) > range2 )
  {
    motorrunSideupperB(finalsetpointBUpper_side_side);
    motorrunSidelowerB(finalsetpointBLower_side_side);
  }
  stallAll();
}
void legTiltStraightB() {
  readLowerPotSideB();
  readUpperPotSideB();

  while (( abs(initsetpointBUpper_side_side - potvalueUpperB_side_side) > range ) || (abs(initsetpointBLower_side_side - potvalueLowerB_side_side) > range ))
  {
    motorrunSideupperB(initsetpointBUpper_side_side );
    motorrunSidelowerB(initsetpointBLower_side_side );
  }
  stallAll();
}

void combined2() {
  readLowerPotSideB();
  readUpperPotSideB();
  readLowerPotA();
  readUpperPotA();
  readLowerPotSideA();
  readUpperPotSideA();
  while ( abs(finalsetpointBUpper_side_side - potvalueUpperB_side_side) > range2  || abs(finalsetpointBLower_side_side - potvalueLowerB_side_side) > range2 ||
          abs(finalsetpointAUpper_front_back - potvalueAUpper_front_back) > range2  || abs(finalsetpointALower_front_back - potvalueALower_front_back) > range2 ||
          abs(finalsetpointALower_side_side - potvalueLowerA_side_side) > range2 || abs(finalsetpointAUpper_side_side - potvalueUpperA_side_side) > range2) {
    motorrunSideupperB(finalsetpointBUpper_side_side);
    motorrunSidelowerB(finalsetpointBLower_side_side);
    motorrunupperA(finalsetpointAUpper_front_back);
    motorrunlowerA(finalsetpointALower_front_back);
    motorrunSideupperA(initsetpointAUpper_side_side );
    motorrunSidelowerA(initsetpointALower_side_side );
  }
  stallAll();
}
void combined3() {
  readLowerPotSideB();
  readUpperPotSideB();
  readLowerPotSideA();
  readUpperPotSideA();
  while ( abs(finalsetpointBUpper_side_side - potvalueUpperB_side_side) > range2  || abs(finalsetpointBLower_side_side - potvalueLowerB_side_side) > range2 ||
          abs(finalsetpointALower_side_side - potvalueLowerA_side_side) > range2 || abs(finalsetpointAUpper_side_side - potvalueUpperA_side_side) > range2) {
    motorrunSideupperB(finalsetpointBUpper_side_side);
    motorrunSidelowerB(finalsetpointBLower_side_side);
    motorrunSideupperA(initsetpointAUpper_side_side );
    motorrunSidelowerA(initsetpointALower_side_side );
  }
   while ( abs(-finalsetpointBUpper_side_side - potvalueUpperB_side_side) > range2  || abs(-finalsetpointBLower_side_side - potvalueLowerB_side_side) > range2 ||
          abs(-finalsetpointALower_side_side - potvalueLowerA_side_side) > range2 || abs(-finalsetpointAUpper_side_side - potvalueUpperA_side_side) > range2) {
    motorrunSideupperB(-finalsetpointBUpper_side_side);
    motorrunSidelowerB(-finalsetpointBLower_side_side);
    motorrunSideupperA(-initsetpointAUpper_side_side );
    motorrunSidelowerA(-initsetpointALower_side_side );
  }
  stallAll();
}


