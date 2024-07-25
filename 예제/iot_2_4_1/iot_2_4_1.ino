#include <Wire.h>                              // I2C control library
#include <LiquidCrystal_I2C.h>           // LCD library

LiquidCrystal_I2C lcd(0x27,16,2); 

void setup()    {
      lcd.init();     
      lcd.backlight();                              
      lcd.setCursor(2,0); // (열위치, 행위치) 2열, 0행에 위치
      lcd.print("Hello World!");
      lcd.setCursor(0,1); // 0열, 1행위치
      lcd.print("My name is Jung.");
}

void loop()  {
}
