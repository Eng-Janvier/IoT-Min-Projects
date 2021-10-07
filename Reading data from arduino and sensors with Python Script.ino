void setup(){
  Serial.begin(9600);
  pinMode(A0,INPUT);
}
void loop(){
  int sensorvalue =analogRead(A0);
  Serial.println(sensorvalue);
  delay(2000);
}
