void setup() {
  
  //Declaration of pins

  pinMode(8,  OUTPUT);    
  pinMode(9,  OUTPUT);
  pinMode(10,  OUTPUT);
  pinMode(11,  OUTPUT);

}

void loop() {

  // digitalWrite(8, HIGH);
  // digitalWrite(10, HIGH);
  // delay(1000);                //unit of delay is milliseconds
  // digitalWrite(8, LOW);
  // digitalWrite(10, LOW);
  // //delay(1000);
  // digitalWrite(9, HIGH);
  // digitalWrite(11, HIGH);
  // delay(1000);
  // digitalWrite(9, LOW);
  // digitalWrite(11, LOW);
  // //delay(100);

  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);

  delay(1000);

  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);

  delay(1000);

  

}

