#include <Servo.h> 

Servo myServo;

void setup() {
  myServo.attach(9);
  myServo.write(0);  
  Serial.begin(9600);       
}

void loop() {
  int angle;

  for  (angle = 0 ;  angle <= 180 ;  angle++ ) {
    myServo.write(angle);
    delay(20);                   
  }

  myServo.write(0);
  delay(1000);
}
