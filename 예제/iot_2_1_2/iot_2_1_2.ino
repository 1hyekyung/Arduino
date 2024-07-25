 int poPin = 0;
 int ledPin = 9;
 int poVal = 0;

 void  setup()   {
 }

 void  loop()  {
       poVal = analogRead(poPin);
       poVal = map(poVal, 300,1000, 255,0); 
       analogWrite(ledPin, poVal);
       delay(10);
 } 
