// RGB LED
// The RGB LED will appear red, blue and green first. Then, red, orange, yellow, green, blue, indigo, and purple.

const int redPin = 11;  // R petal on RGB module connected to Pin 11
const int greenPin = 10;  // G petal on RGB module connected to Pin 10 
const int bluePin = 9;  // B petal on RGB module connected to Pin 9

void setup() 
{
  pinMode(redPin, OUTPUT);  // sets redPin as an output
  pinMode(greenPin, OUTPUT);  // sets greenPin as an output
  pinMode(bluePin, OUTPUT);  // sets bluePin as an output
}

void loop() 
{
  // Basic colors  
  color(255, 0, 0); // turn the RGB LED red 
  delay(1000); // delay for 1 second  
  color(0,255, 0); // turn the RGB LED green  
  delay(1000); 
  color(0, 0, 255); // turn the RGB LED blue  
  delay(1000); 
  
  // Blended Colors
  color(255,0,252); // turn the RGB LED red  
  delay(1000); 
  color(237,109,0); // turn the RGB LED orange  
  delay(1000);  
  color(255,215,0); // turn the RGB LED yellow  
  delay(1000); 
  color(34,139,34);  
  delay(1000); 
  color(0,112,255);
  delay(1000); 
  color(0,46,90); // turn the RGB LED  indigo 
  delay(1000); 
  color(128,0,128); // turn the RGB LED purple  
  delay(1000); 
}

// Color Generating Function

void color(unsigned char red, unsigned char green, unsigned char blue)
{
  analogWrite(redPin, red); // analogWrite writes an analog value (PWM wave) to a pin
  analogWrite(greenPin, green); // here PWM means " Pulse Width Modulation"
  analogWrite(bluePin, blue);
}
