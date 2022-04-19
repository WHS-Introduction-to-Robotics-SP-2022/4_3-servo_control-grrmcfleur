/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

    // variable to store the servo position
int pos=0;
int pog=73;
int pot=123;
int pon=103;
void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
{

{
 
 
    
  }

    myservo.write(pog);              // tell servo to go to position in variable 'pos'
    delay(500);                       // waits 15 ms for the servo to reach the position
  }
   {
  
    }
    
    myservo.write(pot);              // tell servo to go to position in variable 'pos'
    delay(500);    // waits 15 ms for the servo to reach the position
  
    
     
    myservo.write(pon);              // tell servo to go to position in variable 'pos'
    delay(500);                       
}
