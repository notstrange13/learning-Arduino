//Turn off and on the LED without using for loop

int i=4;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  
}
  

void loop()
{
  
    if(i>=0)
  {
  	
    digitalWrite(13, HIGH);
    delay(100);                //unit of delay is milliseconds
    digitalWrite(13, LOW);
    digitalWrite(7, HIGH);
    delay(100);
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    delay(100);
    digitalWrite(5, LOW);	
    i--;
  } 

 else 
   exit(0);
  
}
