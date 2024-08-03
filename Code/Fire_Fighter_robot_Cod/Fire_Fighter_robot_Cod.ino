/*_________________________________LIB_________________________________*/
#include <Servo.h>
#include <SoftwareSerial.h> 
#include "Inerface.h"
SoftwareSerial MyBlue(0, 1); // RX | TX 

/*_________________________________variables_________________________________*/

void setup()
{
 void Project_INIT();
}

void loop() 
{
    
     if(MyBlue.available() )
      {
         switch(MyBlue.read())
        {
         case 'A' : Automatic();               break;
         case 'F' : FORWARD();                 break;
         case 'B' : BACKWORD();                break;
         case 'R' : RIGHT();                   break;
         case 'L' : LEFT();                    break;
         case 'W' : PUMP_WORK();               break;
         case 'O':  PUMP_OFF();                break;
         default:   STOP();                    break; 
        }
        delay(10);
     }
}
