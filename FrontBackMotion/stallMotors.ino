void stallAUpper(){
  digitalWrite(motorAUpper1_cloc, HIGH);
  digitalWrite(motorAUpper1_anticloc, HIGH);
  digitalWrite(motorAUpper2_cloc, HIGH);
  digitalWrite(motorAUpper2_anticloc, HIGH);
}

void stallALower(){
  digitalWrite(motorALower1_cloc, HIGH);
  digitalWrite(motorALower1_anticloc, HIGH);
  digitalWrite(motorALower2_cloc, HIGH);
  digitalWrite(motorALower2_anticloc, HIGH);
}

void stallBUpper(){
  analogWrite(motorBUpper1_pwm, 0);
  analogWrite(motorBUpper2_pwm, 0);
}

void stallBLower(){
  analogWrite(motorBLower1_pwm, 0);
  analogWrite(motorBLower2_pwm, 0);
}

void stallAll(){
  stallAUpper();
  stallALower();
  stallBLower();
  stallBUpper(); 
}

