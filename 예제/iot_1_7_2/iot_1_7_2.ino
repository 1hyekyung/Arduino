int redPin = 9;
int greenPin = 6; 
int bluePin = 5; 

void  setup()  { 
       Serial.begin(9600);
       pinMode(redPin, OUTPUT);
       pinMode(greenPin, OUTPUT);
       pinMode(bluePin, OUTPUT);
} 

void  loop()  { 
       digitalWrite(redPin,1);
       digitalWrite(greenPin,0);
       digitalWrite(bluePin,0);  
       delay(1000);
       digitalWrite(redPin,0);
       digitalWrite(greenPin,1);
       digitalWrite(bluePin,0);  
       delay(1000);

       digitalWrite(redPin,0);
       digitalWrite(greenPin,0);
       digitalWrite(bluePin,1);  
       delay(1000);

        digitalWrite(redPin,1);
       digitalWrite(greenPin,0);
       digitalWrite(bluePin,1);  
       delay(1000);

       digitalWrite(redPin,1);
       digitalWrite(greenPin,1);
       digitalWrite(bluePin,1);  
       delay(1000);
}

