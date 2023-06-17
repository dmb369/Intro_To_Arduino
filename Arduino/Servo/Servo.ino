// Servo
// The servo will turn from 0 angle to 180 and then return to its intial state.

#include <Servo.h>
Servo myservo; // creatinga a servo object to control the servo

void setup() 
{
  myservo.attach(9); // servo is attached to the 9th pin
  myservo.write(0); // servo to 0 degrees
  delay(1000); // delay by 1 second
}

void loop() 
{
  for (int i=0; i<=180; i++)
  {
    myservo.write(i);  // increasing the angle by degrees
    delay(10); // delay by 15 ms
  }

  for (int i=180; i>=0; i--)
  {
    myservo.write(i); // decreasing the angle by i degrees
    delay(10); // delay by 15 ms
  }
}