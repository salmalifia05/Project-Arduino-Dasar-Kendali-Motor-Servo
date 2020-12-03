/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
Servo servo1;
Servo servo2;
int sudut = 0;

void setup() {
  servo1.attach(9); // attaches the servo on pin 9 to the servo object
  servo2.attach(7);
}

void loop() {
  for (sudut = 0; sudut < 180; sudut += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo1.write(sudut);              // tell servo to go to position in variable 'degree'
    servo2.write(sudut);
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (sudut = 180; sudut >= 1; sudut -= 1) { // goes from 180 degrees to 0 degrees
    servo1.write(sudut);              // tell servo to go to position in variable 'degree'
    servo2.write(sudut);
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
