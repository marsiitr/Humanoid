void readUpperPotSideB()
{
  pot_B_Upper_side_side_value = analogRead(pot_B_Upper_side_side_pin);
  potvalueUpperB_side_side = pot_B_Upper_side_side_value - offsetpot_B_Upper_side_side_value;
  Serial.print("Upper pot Side B reading: ");
  Serial.println( potvalueUpperB_side_side);
}
void motorrunSideupperB(double setpoint)
{

  setpoint_Upper_B_side_side = setpoint;
  readUpperPotSideB();
  input_Upper_B_side_side = potvalueUpperB_side_side;

  pid_Upper_B_side_side.Compute();
  motorBUpper1Speed = output_Upper_B_side_side;
  motorBUpper2Speed = -output_Upper_B_side_side;

  if (motorBUpper1Speed < 0) {
    /*Serial.println("motorBUpper1Speed<0");
      Serial.println(motorBUpper1Speed);*/
    digitalWrite(motorBUpper1_dir,HIGH);
    motorBUpper1Speed = abs(motorBUpper1Speed);
    analogWrite(motorBUpper1_pwm, motorBUpper1Speed);
  }
  else if (motorBUpper1Speed >= 0) {
    /*Serial.println("motorBUpper1Speed>0");
      Serial.println(motorBUpper1Speed);*/
    digitalWrite(motorBUpper1_dir,LOW);
    analogWrite(motorBUpper1_pwm, motorBUpper1Speed);
  }

  if (motorBUpper2Speed < 0) {
    /*Serial.println("motorBUpper2Speed<0");
      Serial.println(motorBUpper2Speed);*/
    digitalWrite(motorBUpper2_dir,HIGH);
    motorBUpper2Speed = abs(motorBUpper2Speed);
    analogWrite(motorBUpper2_pwm, motorBUpper2Speed);
  }
  else if (motorBUpper2Speed >= 0) {
    /*Serial.println("motorBUpper2Speed>0");
      Serial.println(motorBUpper2Speed);*/
    digitalWrite(motorBUpper2_dir,LOW);
    analogWrite(motorBUpper2_pwm, motorBUpper2Speed);
  }
}

void readLowerPotSideB()
{
  pot_B_lower_side_side_value = analogRead(pot_B_lower_side_side_pin);
  potvalueLowerB_side_side = pot_B_lower_side_side_value - offsetpot_B_lower_side_side_value;
  Serial.print("Lower pot Side B reading: ");
  Serial.println(potvalueLowerB_side_side);
}

void motorrunSidelowerB(double setpoint)
{
  setpoint_lower_B_side_side = setpoint;
  readLowerPotSideB();
  input_lower_B_side_side = potvalueLowerB_side_side;

  pid_lower_B_side_side.Compute();
  motorBLower1Speed = output_lower_B_side_side;
  motorBLower2Speed = -output_lower_B_side_side;

  if (motorBLower1Speed < 0) {
    /*Serial.println("motorBLower1Speed<0");
      Serial.println(motorBLower1Speed);*/
    digitalWrite(motorBLower1_dir, HIGH);
    motorBLower1Speed = abs(motorBLower1Speed);
    analogWrite(motorBLower1_pwm, motorBLower1Speed);
  }
  else if (motorBLower1Speed >= 0) {
    /*Serial.println("motorBLower1Speed>0");
      Serial.println(motorBLower1Speed);*/
    digitalWrite(motorBLower1_dir, LOW);
    analogWrite(motorBLower1_pwm, motorBLower1Speed);
  }

  if (motorBLower2Speed < 0) {
    /*Serial.println("motorBLower2Speed<0");
      Serial.println(motorBLower2Speed);*/
    digitalWrite(motorBLower2_dir, HIGH);
    motorBLower2Speed = abs(motorBLower2Speed);
    analogWrite(motorBLower2_pwm, motorBLower2Speed);
  }
  else if (motorBLower2Speed >= 0) {
    /*Serial.println("motorBLower2Speed>0");
      Serial.println(motorBLower2Speed);*/
    digitalWrite(motorBLower2_dir,LOW);
    analogWrite(motorBLower2_pwm, motorBLower2Speed);
  }

}

