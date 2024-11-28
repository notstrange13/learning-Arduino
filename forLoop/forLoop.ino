void setup() {
  pinMode(8, OUTPUT);    
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  
  for(int i=0; i<=4; i++){
    digitalWrite(8, HIGH);
    delay(100);                //unit of delay is milliseconds
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    delay(100);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(100);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    delay(100);
    digitalWrite(11, LOW);
  }
  exit(0);
}
