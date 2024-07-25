#include  <Servo.h>

Servo  myServo;
int  tPin = 2;          
int  ePin = 3;       

void  setup() {
     myServo.attach(9);  
     myServo.write(0);
     pinMode(tPin, OUTPUT);      
     pinMode(ePin, INPUT);
}

void  loop() {
     float d1 , d2;        
  
     digitalWrite(tPin, LOW);
     delayMicroseconds(2);
     digitalWrite(tPin, HIGH);
     delayMicroseconds(10);
     digitalWrite(tPin, LOW);
  
     d1 = pulseIn(ePin, HIGH);

     d2 = d1 * 17 / 1000; 
    
     if (d2 < 20) {
           myServo.write(90);
           delay(3000);
           myServo.write(0);     
     }
}
