void SitDown() {
  readLowerPotA();
  readUpperPotA();
  readLowerPotB();
  readUpperPotB();
  readLowerPotSideA();
  readUpperPotSideA();
  readLowerPotSideB();
  readUpperPotSideB();

  while ( (abs(finalsetpointAUpper_front_back - potvalueAUpper_front_back) > range2 ) || (abs(finalsetpointALower_front_back - potvalueALower_front_back) > range2)
          || (abs(finalsetpointBUpper_front_back - potvalueBUpper_front_back) > range2 ) || (abs(finalsetpointBLower_front_back - potvalueBLower_front_back) > range2)
          || ( abs(initsetpointAUpper_side_side - potvalueUpperA_side_side) > range ) || (abs(initsetpointALower_side_side - potvalueLowerA_side_side) > range )
          || ( abs(initsetpointBUpper_side_side - potvalueUpperB_side_side) > range ) || (abs(initsetpointBLower_side_side - potvalueLowerB_side_side) > range ))
  {
    if (abs(finalsetpointAUpper_front_back - potvalueAUpper_front_back) > range2 )
      motorrunupperA(finalsetpointAUpper_front_back);
    if (abs(finalsetpointALower_front_back - potvalueALower_front_back) > range2)
      motorrunlowerA(finalsetpointALower_front_back);
    if (abs(finalsetpointBUpper_front_back - potvalueBUpper_front_back) > range2 )
      motorrunupperB(finalsetpointBUpper_front_back);
    if (abs(finalsetpointBLower_front_back - potvalueBLower_front_back) > range2)
      motorrunlowerB(finalsetpointBLower_front_back );
    if ( abs(initsetpointAUpper_side_side - potvalueUpperA_side_side) > range )
      motorrunSideupperA(initsetpointAUpper_side_side );
    if (abs(initsetpointALower_side_side - potvalueLowerA_side_side) > range )
      motorrunSidelowerA(initsetpointALower_side_side );
    if ( abs(initsetpointBUpper_side_side - potvalueUpperB_side_side) > range )
      motorrunSideupperB(initsetpointBUpper_side_side );
    if (abs(initsetpointBLower_side_side - potvalueLowerB_side_side) > range )
      motorrunSidelowerB(initsetpointBLower_side_side );
  }
}
void SitUp() {
  readLowerPotA();
  readUpperPotA();
  readLowerPotB();
  readUpperPotB();
  readLowerPotSideA();
  readUpperPotSideA();
  readLowerPotSideB();
  readUpperPotSideB();

  while ( (abs(initsetpointAUpper_front_back - potvalueAUpper_front_back) > range2 ) || (abs(initsetpointALower_front_back - potvalueALower_front_back) > range2)
          || (abs(initsetpointBUpper_front_back - potvalueBUpper_front_back) > range2 ) || (abs(initsetpointBLower_front_back - potvalueBLower_front_back) > range2)
          || ( abs(initsetpointAUpper_side_side - potvalueUpperA_side_side) > range ) || (abs(initsetpointALower_side_side - potvalueLowerA_side_side) > range )
          || ( abs(initsetpointBUpper_side_side - potvalueUpperB_side_side) > range ) || (abs(initsetpointBLower_side_side - potvalueLowerB_side_side) > range ))
  {
    if (abs(initsetpointAUpper_front_back - potvalueAUpper_front_back) > range2 )
      motorrunupperA(initsetpointAUpper_front_back);
    if (abs(initsetpointALower_front_back - potvalueALower_front_back) > range2)
      motorrunlowerA(initsetpointALower_front_back);
    if (abs(initsetpointBUpper_front_back - potvalueBUpper_front_back) > range2 )
      motorrunupperB(initsetpointBUpper_front_back);
    if (abs(initsetpointBLower_front_back - potvalueBLower_front_back) > range2)
      motorrunlowerB(initsetpointBLower_front_back );
    if ( abs(initsetpointAUpper_side_side - potvalueUpperA_side_side) > range )
      motorrunSideupperA(initsetpointAUpper_side_side );
    if (abs(initsetpointALower_side_side - potvalueLowerA_side_side) > range )
      motorrunSidelowerA(initsetpointALower_side_side );
    if ( abs(initsetpointBUpper_side_side - potvalueUpperB_side_side) > range )
      motorrunSideupperB(initsetpointBUpper_side_side );
    if (abs(initsetpointBLower_side_side - potvalueLowerB_side_side) > range )
      motorrunSidelowerB(initsetpointBLower_side_side );
  }
}
