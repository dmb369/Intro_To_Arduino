// Controlling LED by button
// Turns on and off LED when the button is pushed

const int buttonPin = 12; // the button connect to pin 12
const int ledPin = 13; // the led connect to pin 13
int buttonState = 0; // variable for reading the pushbutton status

void setup() 
{
  pinMode(buttonPin, INPUT); // initialize button as input
  pinMode(ledPin, OUTPUT); // initialize LED as output
}

void loop() 
{
  buttonState = digitalRead(buttonPin); // read the state of the button value

  if (buttonState == HIGH)
  {
    digitalWrite(ledPin, HIGH);
  }

  else
  {
    digitalWrite(ledPin, LOW);
  }
}

