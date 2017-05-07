void readLowerPotA() {
  pot_A_lower_front_back_value = analogRead(pot_A_lower_front_back_pin); 
  potvalueALower_front_back = pot_A_lower_front_back_value - offsetpot_A_lower_front_back_value;
  Serial.print("Lower pot A reading: ");
  Serial.println(potvalueALower_front_back);
}

void motorrunlowerA(double setpoint)
{
  
    setpoint_lower_A_front_back = setpoint;
    readLowerPotA();
    input_lower_A_front_back = potvalueALower_front_back;
    
    pid_lower_A_front_back.Compute();
    motorALower1Speed = output_lower_A_front_back;
    motorALower2Speed = output_lower_A_front_back;

    if (motorALower1Speed < 0) {
      /*Serial.println("motorALower1Speed<0");
        Serial.println(motorALower1Speed);*/
      digitalWrite(motorALower1_cloc, LOW);
      digitalWrite(motorALower1_anticloc, HIGH);
      motorALower1Speed = abs(motorALower1Speed);
      analogWrite(motorALower1_pwm, motorALower1Speed);
    }
    else if (motorALower1Speed >= 0) {
      /* Serial.println("motorALower1Speed>0");
        Serial.println(motorALower1Speed);*/
      digitalWrite(motorALower1_cloc, HIGH);
      digitalWrite(motorALower1_anticloc, LOW);
      analogWrite(motorALower1_pwm, motorALower1Speed);
    }

    if (motorALower2Speed < 0) {
      /*Serial.println("motorALower2Speed<0");
        Serial.println(motorALower2Speed);*/
      digitalWrite(motorALower2_cloc, LOW);
      digitalWrite(motorALower2_anticloc, HIGH);
      motorALower2Speed = abs(motorALower2Speed);
      analogWrite(motorALower2_pwm, motorALower2Speed);
    }
    else if (motorALower2Speed >= 0) {
      /* Serial.println("motorALower2Speed>0");
        Serial.println(motorALower2Speed);*/
      digitalWrite(motorALower2_cloc, HIGH);
      digitalWrite(motorALower2_anticloc, LOW);
      analogWrite(motorALower2_pwm, motorALower2Speed);
    }
  
}
