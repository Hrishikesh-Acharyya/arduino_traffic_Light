// C++ code
const int greenLED = 8;
const int greenDelay = 2000;
const int yellowLED = 11;
const int yellowDelay = 4000;
const int redLED = 12;
const int redDelay = 5000;

void setup()
{
  pinMode(redLED, OUTPUT); //Red LED
  pinMode(yellowLED,OUTPUT);// yellow LED
  pinMode(greenLED,OUTPUT);// GREEN LED
}

void loop()
{

  // red light 5 seconds
  digitalWrite(redLED, HIGH);
  delay(redDelay); // Wait for 1000 millisecond(s)
  digitalWrite(redLED, LOW);


  // green light 2 seconds
  digitalWrite(greenLED,HIGH);
  delay(greenDelay);
  digitalWrite(greenLED,LOW);
  
  // yellow light 4 seconds 
  digitalWrite(yellowLED,HIGH);
  delay(yellowDelay);
  digitalWrite(yellowLED,LOW);
 
}