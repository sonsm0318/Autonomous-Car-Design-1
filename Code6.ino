char a = 'a' ;
float a_dot= 1.245 ;

void setup(){
  Serial.begin(9600);
  Serial.print("a:");
  Serial.println(a);
  Serial.print("a_dot:");
  Serial.println(a_dot,3);
}

void loop(){}
