const int echopin=3;
const int trigpin=2;
void setup() {
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
}
void loop() {
  float distance;
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);

  distance =pulseIn(echopin,HIGH)/58.0;
  Serial.print("DISTANCE = ");
  Serial.print(distance);
  Serial.println(" Cm");
  delay(2000);

}
