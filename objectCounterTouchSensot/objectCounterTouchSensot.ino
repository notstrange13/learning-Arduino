int i=0;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(9, INPUT);
  Serial.begin(9600);
}

void loop() {

  int a = digitalRead(9);

  if(a==1){
    for(int x=0; x<=i; x++){
      
      digitalWrite(13, HIGH);
      delay(100);
      digitalWrite(13, LOW);
      delay(100);
      //Serial.println(a);

    }
    i++;
    Serial.print("LED blinks for ");
    Serial.print(i);
    Serial.println(" times.");
  }
  
  else{
    digitalWrite(13, LOW);
    //Serial.println(a);
  }
}
