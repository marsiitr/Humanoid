void readUpperPotSideA()
{
  pot_A_Upper_side_side_value = analogRead(pot_A_Upper_side_side_pin);
  potvalueUpperA_side_side = pot_A_Upper_side_side_value - offsetpot_A_Upper_side_side_value;
  Serial.print("Upper pot Side A reading: ");
  Serial.println( potvalueUpperA_side_side);
}
void motorrunSideupperA(double setpoint)
{

  setpoint_Upper_A_side_side = setpoint;
  readUpperPotSideA();
  input_Upper_A_side_side = potvalueUpperA_side_side;

  pid_Upper_A_side_side.Compute();
  motorAUpper1Speed = -output_Upper_A_side_side;
  motorAUpper2Speed = output_Upper_A_side_side;

  if (motorAUpper1Speed < 0) {
    /*Serial.println("motorAUpper1Speed<0");
      Serial.println(motorAUpper1Speed);*/
    digitalWrite(motorAUpper1_cloc, HIGH);
    digitalWrite(motorAUpper1_anticloc, LOW);
    motorAUpper1Speed = abs(motorAUpper1Speed);
    analogWrite(motorAUpper1_pwm, motorAUpper1Speed);
  }
  else if (motorAUpper1Speed >= 0) {
    /*Serial.println("motorAUpper1Speed>0");
      Serial.println(motorAUpper1Speed);*/
    digitalWrite(motorAUpper1_cloc, LOW);
    digitalWrite(motorAUpper1_anticloc, HIGH);
    analogWrite(motorAUpper1_pwm, motorAUpper1Speed);
  }

  if (motorAUpper2Speed < 0) {
    /*Serial.println("motorAUpper2Speed<0");
      Serial.println(motorAUpper2Speed);*/
    digitalWrite(motorAUpper2_cloc, HIGH);
    digitalWrite(motorAUpper2_anticloc, LOW);
    motorAUpper2Speed = abs(motorAUpper2Speed);
    analogWrite(motorAUpper2_pwm, motorAUpper2Speed);
  }
  else if (motorAUpper2Speed >= 0) {
    /*Serial.println("motorAUpper2Speed>0");
      Serial.println(motorAUpper2Speed);*/
    digitalWrite(motorAUpper2_cloc, LOW);
    digitalWrite(motorAUpper2_anticloc, HIGH);
    analogWrite(motorAUpper2_pwm, motorAUpper2Speed);
  }
}

void  readLowerPotSideA()
{
  pot_A_lower_side_side_value = analogRead(pot_A_lower_side_side_pin);
  potvalueLowerA_side_side = pot_A_lower_side_side_value - offsetpot_A_lower_side_side_value;
  Serial.print("Lower pot Side A reading: ");
  Serial.println(potvalueLowerA_side_side);
}

void motorrunSidelowerA(double setpoint)
{
  setpoint_lower_A_side_side = setpoint;
  readLowerPotSideA();
  input_lower_A_side_side = potvalueLowerA_side_side;

  pid_lower_A_side_side.Compute();
  motorALower1Speed = output_lower_A_side_side;
  motorALower2Speed = -output_lower_A_side_side;

  if (motorALower1Speed < 0) {
    /*Serial.println("motorALower1Speed<0");
      Serial.println(motorALower1Speed);*/
    digitalWrite(motorALower1_cloc, HIGH);
    digitalWrite(motorALower1_anticloc, LOW);
    motorALower1Speed = abs(motorALower1Speed);
    analogWrite(motorALower1_pwm, motorALower1Speed);
  }
  else if (motorALower1Speed >= 0) {
    /*Serial.println("motorALower1Speed>0");
      Serial.println(motorALower1Speed);*/
    digitalWrite(motorALower1_cloc, LOW);
    digitalWrite(motorALower1_anticloc, HIGH);
    analogWrite(motorALower1_pwm, motorALower1Speed);
  }

  if (motorALower2Speed < 0) {
    /*Serial.println("motorALower2Speed<0");
      Serial.println(motorALower2Speed);*/
    digitalWrite(motorALower2_cloc, HIGH);
    digitalWrite(motorALower2_anticloc, LOW);
    motorALower2Speed = abs(motorALower2Speed);
    analogWrite(motorALower2_pwm, motorALower2Speed);
  }
  else if (motorALower2Speed >= 0) {
    /*Serial.println("motorALower2Speed>0");
      Serial.println(motorALower2Speed);*/
    digitalWrite(motorALower2_cloc, LOW);
    digitalWrite(motorALower2_anticloc, HIGH);
    analogWrite(motorALower2_pwm, motorALower2Speed);
  }

}


