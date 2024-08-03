/*************Motor*****************/
void RIGHT(){
  analogWrite(right_motor_speed,speed_right);
  analogWrite(left_motor_speed,speed_left);
  digitalWrite(right_motor_A,HIGH);
  digitalWrite(right_motor_B,LOW);
  digitalWrite(left_motor_A,HIGH);
  digitalWrite(left_motor_B,LOW); 
  }
void LEFT(){
  analogWrite(right_motor_speed,speed_right);
  analogWrite(left_motor_speed,speed_left);
  digitalWrite(right_motor_A,LOW);
  digitalWrite(right_motor_B,HIGH);
  digitalWrite(left_motor_A,LOW);
  digitalWrite(left_motor_B,HIGH); 
  }
void BACKWORD(){
  analogWrite(right_motor_speed,speed_right);
  analogWrite(left_motor_speed,speed_left);
  digitalWrite(right_motor_A,LOW);
  digitalWrite(right_motor_B,HIGH);
  digitalWrite(left_motor_A,HIGH);
  digitalWrite(left_motor_B,LOW); 
  }
void FORWARD(){
  analogWrite(right_motor_speed,speed_right);
  analogWrite(left_motor_speed,speed_left);
  digitalWrite(right_motor_A,HIGH);
  digitalWrite(right_motor_B,LOW);
  digitalWrite(left_motor_A,LOW);
  digitalWrite(left_motor_B,HIGH); 
  }
void STOP(){
  digitalWrite(right_motor_A,LOW);
  digitalWrite(right_motor_B,LOW);
  digitalWrite(left_motor_A,LOW);
  digitalWrite(left_motor_B,LOW); 
  //digitalWrite(PUMP_PIN,HIGH);
  }

void Automatic(){
  
  FORWARD();
    
     if (digitalRead(FORWARD_FLAME_SENSOR)==1)
     {
      FORWARD();
      fire=true;
     }
     else if (digitalRead(RIGHT_FLAME_SENSOR)==1)
     {
      RIGHT();
     }
    
         delay(800);
     while(fire==true)
     {  
      
     STOP();
      delay(500);
      PUMP_WORK();
     }
}
