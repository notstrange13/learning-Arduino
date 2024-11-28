int i=0;

void setup() {
  
  pinMode(11, OUTPUT);

}

void loop() {
  
  Serial.begin(9600);
  
  if(i<=255){
    while(i<255){
      
      analogWrite(11, i);
      
      delay(10);
      i++;
      Serial.println(i);    //ln= newline
    }

  }
  if(i<=255){
    while(i>0){
      
      analogWrite(11,i);
      
      delay(10);
      i--;
      Serial.println(i);
    }
  }

  else{
    exit(0);
  }

}
