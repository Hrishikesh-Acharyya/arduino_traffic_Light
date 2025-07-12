// C++ code
//
void setup()
{
  pinMode(12, OUTPUT); //Red LED
  pinMode(11,OUTPUT);// yellow LED
  pinMode(8,OUTPUT);// GREEN LED
}

void loop()
{

  // red light 5 seconds
  digitalWrite(12, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);

  // green light 2 seconds
  digitalWrite(8,HIGH);
  delay(2000);
  digitalWrite(8,LOW);
  
  // yellow light 4 seconds 
  digitalWrite(11,HIGH);
  delay(4000);
  digitalWrite(11,LOW);
 
}