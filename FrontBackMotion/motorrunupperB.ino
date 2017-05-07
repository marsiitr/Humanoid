void readUpperPotB() {
  pot_B_Upper_front_back_value = analogRead(pot_B_Upper_front_back_pin);
  potvalueBUpper_front_back = pot_B_Upper_front_back_value - offsetpot_B_Upper_front_back_value;
  Serial.print("Upper pot B reading: ");
  Serial.println(potvalueBUpper_front_back);
}

void motorrunupperB(double setpoint)
{

  setpoint_Upper_B_front_back = setpoint;
  readUpperPotB();
  input_Upper_B_front_back = potvalueBUpper_front_back;

  pid_Upper_B_front_back.Compute();
  motorBUpper1Speed = output_Upper_B_front_back;
  motorBUpper2Speed = output_Upper_B_front_back;

  if (motorBUpper1Speed < 0) {
    /*Serial.print("motorBUpper1Speed<0");
      Serial.println(motorBUpper1Speed);*/
    digitalWrite(motorBUpper1_dir, HIGH);
    motorBUpper1Speed = abs(motorBUpper1Speed);
    analogWrite(motorBUpper1_pwm, motorBUpper1Speed);
  }
  else if (motorBUpper1Speed >= 0) {
    /*Serial.print("motorBUpper1Speed>0  ");
      Serial.println(motorBUpper1Speed);*/
    digitalWrite(motorBUpper1_dir, LOW);
    analogWrite(motorBUpper1_pwm, motorBUpper1Speed);
  }

  if (motorBUpper2Speed < 0) {
    /*Serial.print("motorBUpper2Speed<0");
      Serial.println(motorBUpper2Speed);*/
    digitalWrite(motorBUpper2_dir, HIGH);
    motorBUpper2Speed = abs(motorBUpper2Speed);
    analogWrite(motorBUpper2_pwm, motorBUpper2Speed);
  }
  else if (motorBUpper2Speed >= 0) {
    /*Serial.print("motorBUpper2Speed>0");
      Serial.println(motorBUpper2Speed);*/
    digitalWrite(motorBUpper2_dir, LOW);
    analogWrite(motorBUpper2_pwm, motorBUpper2Speed);
  }
}
