// C++ code
const int greenLED = 8;
const int greenDelay = 2000;
const int yellowLED = 11;
const int yellowDelay = 4000;
const int redLED = 12;
const int redDelay = 5000;
const int btnPin = 13;

void setup()
{
  pinMode(redLED, OUTPUT); //Red LED
  pinMode(yellowLED,OUTPUT);// yellow LED
  pinMode(greenLED,OUTPUT);// GREEN LED
  pinMode(btnPin,INPUT_PULLUP); // when pushed, low signal passed. This way no external resistor needed
}

void loop()
{

  // red light 5 seconds
  digitalWrite(redLED, HIGH);
  if(handleDelayandButtonPress(5000)) return ;
  digitalWrite(redLED, LOW);



  // green light 2 seconds
  digitalWrite(greenLED,HIGH);
  if(handleDelayandButtonPress(2000)) return ;
  digitalWrite(greenLED,LOW);
  
  // yellow light 4 seconds 
  digitalWrite(yellowLED,HIGH);
  if(handleDelayandButtonPress(4000)) return ;
  digitalWrite(yellowLED,LOW);
 
}

bool handleDelayandButtonPress(long int delay)
{
  /*
    Works like a delay but with condition
    millis() - startchecks for time elapsed since led turned on

    if inturrupted in between it will automatically restart cycle

    else it will only run till delay given
  */
  long int start = millis();

  while(millis() - start <= delay)
  {
    if(digitalRead(btnPin) == LOW)
    {
      handlePedestrian();
      return true;
    }
  }

  return false;

}

void handlePedestrian()
{
  digitalWrite(redLED, HIGH);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);
}