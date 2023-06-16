// Doorbell
// Turns on and off using the button

const int buttonPin = 2;
const int buzzerPin = 8;
int buttonState = 0; // variable for reading the pushbutton status

void setup() 
{
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() 
{
  unsigned char i;  // define a variable

  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH)
  {
    for (i=0; i<50; i++)
    {
      digitalWrite(buzzerPin, HIGH);
      delay(3);                         // delay for 3ms
      digitalWrite(buzzerPin, LOW);
      delay(3);
    }

    for (i=0; i<80; i++)
    {
      digitalWrite(buzzerPin, HIGH);
      delay(3);
      digitalWrite(buzzerPin, LOW);
      delay(3);
    }
  }
}
