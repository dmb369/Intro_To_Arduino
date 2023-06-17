// Controlling LED by Potentiometer
// Rotating the shaft of the potentiometer will change the luminance of the LED.

const int analogPin = 0; // the analog pin attach to
const int ledPin = 9; // the LED attach to
int inputValue = 0; //variable to store the input value coming from sensor
int outputValue =0; //variable to store the output value

void setup() 
{
  Serial.begin(9600); // Making the baud rate (number of signal units transmitted per second ) as 9600
}

void loop()
{
  inputValue = analogRead(analogPin); // read the value from the potentiometer
  Serial.print("Input: ");
  Serial.println(inputValue);
  outputValue = map(inputValue, 0, 1023, 0, 255); // reducing the value from 0 to 1023 proportionally to 0 to 255

  // As the range of led Pin (pin 9) is 0-255, we need to map 0-1023 with 0-255.
  // map(value, fromLow, fromHigh, toLow, toHigh)
  
  Serial.print("Output: ");
  Serial.println(outputValue);
  analogWrite(ledPin, outputValue);
  delay(1000);
}
