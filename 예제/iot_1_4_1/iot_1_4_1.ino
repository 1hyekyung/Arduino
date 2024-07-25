int  ledPin = 9; 

void  setup()  {  
} 

void  loop()  { 
       analogWrite(ledPin, 0);         
       delay(1000); 
       analogWrite(ledPin, 50);         
       delay(1000); 
       analogWrite(ledPin, 100);         
       delay(1000); 
       analogWrite(ledPin, 150);         
       delay(1000);                           
       analogWrite(ledPin, 200);         
       delay(1000); 
       analogWrite(ledPin, 255);         
       delay(1000);                                          
}
