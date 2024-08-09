// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  // Clockwise rotation
  digitalWrite(9, HIGH);
  digitalWrite(11, LOW);
  delay(2000); // Rotates for 2 seconds
  
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);
  delay(2000); // Stops for 2 seconds
  
  // Anti-Clockwise rotation
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  delay(2000); // Rotates for 2 seconds
  
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  delay(2000); // Stops for 2 seconds
}
