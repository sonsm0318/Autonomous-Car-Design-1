int a = 24;

void setup(){
  Serial.begin(9600);
  Serial.print("DEX:");
  Serial.println(a);
  Serial.print("Bin:");
  Serial.println(a,BIN);
  Serial.print("OCT:");
  Serial.println(a,OCT);
  Serial.print("HEX:");
  Serial.println(a,HEX);
}

void loop(){}
