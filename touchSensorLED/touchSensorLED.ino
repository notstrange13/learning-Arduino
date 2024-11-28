void setup() {
  pinMode(13, OUTPUT);
  pinMode(9, INPUT);

  Serial.begin(9600);

}

void loop() {
  int a= digitalRead(9);

  if(a==1){
    digitalWrite(13, HIGH);
    Serial.println(a);
  }
  else{
    digitalWrite(13, LOW);
    Serial.println(a);
  }
}
