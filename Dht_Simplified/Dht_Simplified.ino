#include "DHT.h"
#define DHTPIN 2  
#define DHTTYPE DHT11 
//#define DHTTYPE DHT22   
//#define DHTTYPE DHT21  
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);
  Serial.println("Humidity: ");
  Serial.print(h);
  Serial.println("Temperature: ");
  Serial.print(t);
}
