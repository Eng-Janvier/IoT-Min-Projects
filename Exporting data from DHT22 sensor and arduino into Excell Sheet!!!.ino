#include"DHT.h"
#define DHTPIN 8
#define DHTTYPE DHT22
DHT dht(DHTPIN,DHTTYPE);

void setup(){
  Serial.begin(9600);
  dht.begin();
  Serial.println("CLEARSHEET");
  Serial.println("LABEL,DATE,TIME,TEMPERATURE,HUMIDITY");
  Serial.println("RESTERTIMER");
}
void loop(){
  float temp = dht.readTemperature();
  float hum =dht.readHumidity();
  Serial.print("DATA,DATE,TIME,");
  Serial.print(temp);
  Serial.print(",");
  Serial.println(hum);
  delay(2000);
}
