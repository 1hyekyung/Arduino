#include "DHT.h"
#define DHTPIN 2  
#define DHTTYPE DHT11   

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  pinMode(12,OUTPUT);

  Serial.println(F("DHTxx test!"));

  dht.begin();
}

void loop() {
  delay(2000);

  float t = dht.readTemperature();

  if ( tmp > 25 )  digitalWrite(12,HIGH);
  else             digitalWrite(12,LOW);   

}