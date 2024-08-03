
void SERVO_UP()
  {
      if(SERVO_POSITION>0 && SERVO_POSITION<90)
      {
        myservo.write(SERVO_POSITION + DEGREE_SERVO_MOVE );              // tell servo to go to position in variable 'SERVO_POSITION'
        delay(30);                                                     // waits 15ms for the servo to reach the position
      }
  }
 
void SERVO_DOWN()
{
    if(SERVO_POSITION>0 && SERVO_POSITION<90)
  {
     myservo.write(SERVO_POSITION - DEGREE_SERVO_MOVE );              // tell servo to go to position in variable 'SERVO_POSITION'
     delay(30);                                                     // waits 15ms for the servo to reach the position
  }
}

void PUMP_WORK()
{
    digitalWrite(PUMP_PIN,LOW);
}
void PUMP_OFF()
{
   digitalWrite(PUMP_PIN,HIGH);
}

void Project_INIT(){
   // put your setup code here, to run once:
  pinMode(right_motor_speed,OUTPUT);
  pinMode(right_motor_A,OUTPUT);
  pinMode(right_motor_B,OUTPUT);
  pinMode(left_motor_speed,OUTPUT);
  pinMode(left_motor_A,OUTPUT);
  pinMode(left_motor_B,OUTPUT);
 
  Serial.begin(9600); // Serial Port setup
  MyBlue.begin(9600); 
  pinMode(PUMP_PIN, OUTPUT); // Set pin as OUTPUT
}
