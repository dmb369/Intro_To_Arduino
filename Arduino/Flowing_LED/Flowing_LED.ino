// Flowing LED
// 8 LEDs will light one ny one and go out one by one. This process will go on indefintely.

void setup() 
{
  // set pins from 2 to 9 as OUTPUT

  for (int i=2;  i<=9; i++)
  {
    pinMode(i, OUTPUT);
  }

}

void loop() 
{
  for (int i=2; i<=9; i++)
  {
    digitalWrite(i, HIGH);
    delay(100);
  }

  for (int i=9; i>=2; i--)
  {
    digitalWrite(i ,LOW);
    delay(100);
  }

  for (int i=9; i>=2; i--)
  {
    digitalWrite(i, HIGH);
    delay(100);
  }

  for (int i=2; i<=9; i++)
  {
    digitalWrite(i, LOW);
    delay(100);
  }
}
