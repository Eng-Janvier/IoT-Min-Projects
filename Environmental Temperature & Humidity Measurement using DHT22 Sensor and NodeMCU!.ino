#include"DHT.h"
#define DHTPIN D8
#define DHTTYPE DHT22
DHT dht(DHTPIN,DHTTYPE);
void setup(){
  Serial.begin(115200); //baud rate
  dht.begin();
}
void loop(){
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();
  Serial.print(" TEMPERATURE = ");
  Serial.print(temp);
  Serial.print("*C");
  Serial.print("  Humidity = ");
  Serial.println(hum);
  Serial.print("%RH");
  delay(1000);
}
