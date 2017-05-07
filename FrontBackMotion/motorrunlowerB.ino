void readLowerPotB()
{
  pot_B_lower_front_back_value = analogRead(pot_B_lower_front_back_pin);
  potvalueBLower_front_back = pot_B_lower_front_back_value - offsetpot_B_lower_front_back_value;
  Serial.print("Lower pot B reading: ");
  Serial.println(potvalueBLower_front_back);
}

void motorrunlowerB(double setpoint)
{ 
  
    setpoint_lower_B_front_back = setpoint;
    readLowerPotB();
    input_lower_B_front_back = potvalueBLower_front_back;

    pid_lower_B_front_back.Compute();
    motorBLower1Speed = output_lower_B_front_back;
    motorBLower2Speed = output_lower_B_front_back;

    if (motorBLower1Speed < 0) {
      /*Serial.print("motorBLower1Speed<0");
        Serial.println(motorBLower1Speed);*/
      digitalWrite(motorBLower1_dir, LOW);
      motorBLower1Speed = abs(motorBLower1Speed);
      analogWrite(motorBLower1_pwm, motorBLower1Speed);
    }
    else if (motorBLower1Speed > 0) {
      /* Serial.print("motorBLower1Speed>0 ");
        Serial.println(motorBLower1Speed);*/
      digitalWrite(motorBLower1_dir, HIGH);
      analogWrite(motorBLower1_pwm, motorBLower1Speed);
    }

    if (motorBLower2Speed < 0) {
      /*Serial.print("motorBLower2Speed<0");
        Serial.println(motorBLower2Speed);*/
      digitalWrite(motorBLower2_dir, LOW);
      motorBLower2Speed = abs(motorBLower2Speed);
      analogWrite(motorBLower2_pwm, motorBLower2Speed);
    }
    else if (motorBLower2Speed > 0) {
      /*Serial.print("motorBLower2Speed>0  ");
        Serial.println(motorBLower2Speed);*/
      digitalWrite(motorBLower2_dir, HIGH);
      analogWrite(motorBLower2_pwm, motorBLower2Speed);
    }

}
