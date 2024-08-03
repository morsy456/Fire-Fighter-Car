/*_________________________________PIN_DEFINES_________________________________*/
/*
*/
// PWM PINS ARE   3 ,5 ,6 ,9, 10, 11

#define right_motor_speed      10
#define right_motor_A          4
#define right_motor_B          5

#define left_motor_speed       11
#define left_motor_A           6
#define left_motor_B           7

#define FORWARD_FLAME_SENSOR   3
#define LEFT_FLAME_SENSOR      13
#define RIGHT_FLAME_SENSOR     12
#define PUMP_PIN               8  // Water Pump Pin
#define Servo_PIN              9
#define  DEGREE_SERVO_MOVE     30

/*_________________________________variables_________________________________*/
bool fire;
char Serial_Reading=0;
Servo myservo;
int speed_right = 135;
int speed_left  = 120;
int SERVO_POSITION=0 ; // this must not exceed 90  