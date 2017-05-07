void readUpperPotA() {
  pot_A_Upper_front_back_value = analogRead(pot_A_Upper_front_back_pin);
  potvalueAUpper_front_back = pot_A_Upper_front_back_value - offsetpot_A_Upper_front_back_value;
  Serial.print("Upper pot A reading: ");
  Serial.println( potvalueAUpper_front_back);

}

void motorrunupperA(double setpoint)
{

    setpoint_Upper_A_front_back = setpoint;
    readUpperPotA();
    input_Upper_A_front_back = potvalueAUpper_front_back;
    
    pid_Upper_A_front_back.Compute();
    motorAUpper1Speed = output_Upper_A_front_back;
    motorAUpper2Speed = output_Upper_A_front_back;
    
    if (motorAUpper1Speed < 0) {
      // Serial.println("motorAUpper1Speed<0"); Serial.println(motorAUpper1Speed);
      digitalWrite(motorAUpper1_cloc, LOW);
      digitalWrite(motorAUpper1_anticloc, HIGH);
      motorAUpper1Speed = abs(motorAUpper1Speed);
      analogWrite(motorAUpper1_pwm, motorAUpper1Speed);
    }
    else if (motorAUpper1Speed > 0) {
      /*Serial.println("motorAUpper1Speed>0");
        Serial.println(motorAUpper1Speed);*/
      digitalWrite(motorAUpper1_cloc, HIGH);
      digitalWrite(motorAUpper1_anticloc, LOW);
      analogWrite(motorAUpper1_pwm, motorAUpper1Speed);
    }

    if (motorAUpper2Speed < 0) {
      /* Serial.println("motorAUpper2Speed<0");
        Serial.println(motorAUpper2Speed);*/
      digitalWrite(motorAUpper2_cloc, LOW);
      digitalWrite(motorAUpper2_anticloc, HIGH);
      motorAUpper2Speed = abs(motorAUpper2Speed);
      analogWrite(motorAUpper2_pwm, motorAUpper2Speed);
    }
    else if (motorAUpper2Speed > 0) {
      /*Serial.println("motorAUpper2Speed>0");
        Serial.println(motorAUpper2Speed);*/
      digitalWrite(motorAUpper2_cloc, HIGH);
      digitalWrite(motorAUpper2_anticloc, LOW);
      analogWrite(motorAUpper2_pwm, motorAUpper2Speed);
    }
}

