/*Arduino-bliking-projects-
Arduino blinking light project 
Name: Boopathi */

void setup()
{ 
pinMode(5, OUTPUT); //led interfacing with arduino pin
}

void loop()
  {
  digtalWrite(5,HIGH);  //Output for 5th pin for on condition
  delay(1000); // time delay (1000=1sec)
  digtalWrite(5,LOW); //output for 5th pin for off condition
  delay(1000);
  }
