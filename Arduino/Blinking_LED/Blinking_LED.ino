// 1. Blinking LED
// turn on/off the LED with half a second time interval

const int ledPin = 9;

void setup() 
{
  pinMode(ledPin, OUTPUT);
}

void loop() 
{
  digitalWrite(ledPin,HIGH);   // turn the LED on
  delay(500);                   // wait for 0.5 sec
  digitalWrite(ledPin, LOW);    // turn the LED off
  delay(500);                   // wait for 0.5 sec
}
