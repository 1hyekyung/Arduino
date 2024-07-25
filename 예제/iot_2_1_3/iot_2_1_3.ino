int  tPin = 2;          
int  ePin = 3;       

void  setup() {
     Serial.begin(9600);       
     pinMode(tPin, OUTPUT);      
     pinMode(ePin, INPUT);
}
void  loop() {
     long d1 , d2;   
 
     digitalWrite(tPin, LOW);
     delayMicroseconds(2);
     digitalWrite(tPin, HIGH);
     delayMicroseconds(10);
     digitalWrite(tPin, LOW);

           d1 = pulseIn(ePin, HIGH);

      d2 = d1 * 17 / 1000; 

      Serial.print("Distance : ");
      Serial.print(d2);
      Serial.println("cm");
      delay(100);  
}

