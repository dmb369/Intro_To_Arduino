//Relay

const int relayPin = 8; // the base of the transistor attach to

void setup() 
{
  pinMode(relayPin, OUTPUT); // initializing relayPin as an output
}

void loop() 
{
  digitalWrite(relayPin, HIGH); // driving the relay closed conduction
  delay(1000); // wait for a second
  digitalWrite(relayPin, LOW); // driving the relay is closed off
  delay(1000); // wait for a second
}
