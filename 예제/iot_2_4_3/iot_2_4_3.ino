#include <Wire.h>                            
#include <LiquidCrystal_I2C.h> 
   
#include <DHT.h>
#define  DHTPIN 2
#define  DHTTYPE  DHT11

DHT  dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C  lcd(0x27,16,2);
 
void  setup() {
      lcd.init();
      lcd.backlight();
      lcd.clear();
      dht.begin();
      }

void loop() {
     delay(2000);

     lcd.clear();

     int h = dht.readHumidity();
     int t = dht.readTemperature();

     lcd.setCursor(0,0);
     lcd.print("Temp: ");
     lcd.print(t);
     lcd.print(" C");

     lcd.setCursor(0,1);
     lcd.print("Humidity: ");
     lcd.print(h);
     lcd.print("%");
}
