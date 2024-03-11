char b;

void setup(){
  Serial.begin(9600);
}

void loop(){
  if(Serial.available()>0){
    b = Serial.read();
    Serial.print("b:");
    Serial.println(b);
    }
  }
