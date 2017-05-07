void doSitup(){
  readLowerPotA();
  readUpperPotA();
  readLowerPotB();
  readUpperPotB();
  readLowerPotSideA();
  readUpperPotSideA();

  
  while ( (abs(finalsetpointAUpper_front_back - potvalueAUpper_front_back) > range2 ) || (abs(finalsetpointALower_front_back - potvalueALower_front_back) > range2) 
          || (abs(finalsetpointBUpper_front_back - potvalueBUpper_front_back) > range2 ) || (abs(finalsetpointBLower_front_back - potvalueBLower_front_back) > range2))
  {
    motorrunupperA(finalsetpointAUpper_front_back);
    motorrunlowerA(finalsetpointALower_front_back);
    motorrunupperB(finalsetpointBUpper_front_back);
    motorrunlowerB(finalsetpointBLower_front_back );
    legTiltStraightA();
    //legTiltStraightB();    
  }
  stallAll();
}

void sitBack(){
  readLowerPotA();
  readUpperPotA();
  readLowerPotB();
  readUpperPotB();
  readLowerPotSideA();
  readUpperPotSideA();
  while ( abs(initsetpointAUpper_front_back - potvalueAUpper_front_back) > range  || abs(initsetpointALower_front_back - potvalueALower_front_back) > range  || 
            abs(initsetpointBUpper_front_back - potvalueBUpper_front_back) > range  || abs(initsetpointBLower_front_back - potvalueBLower_front_back) > range  )
  {
    motorrunupperA(initsetpointAUpper_front_back);
    motorrunlowerA(initsetpointALower_front_back);
    motorrunupperB(initsetpointBUpper_front_back );
    motorrunlowerB(initsetpointBLower_front_back);
    legTiltStraightA();
    //legTiltStraightB();    
  }
  stallAll();
}

