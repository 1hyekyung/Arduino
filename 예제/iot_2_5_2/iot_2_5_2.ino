 #include  <Servo.h>             //Servo라이브러리 선언 

 Servo   myServo;

 void   setup() {
        myServo.attach(9);      //서보 모터를 연결한 디지털 핀 번호
 }

void   loop() {
       int   angle;

       for  (angle = 0 ;  angle <= 180 ;  angle++ ) {
              myServo.write(angle);      //서보 모터 각도 설정
              delay(20);                   
        }
       myServo.write(0);
       delay(1000);
  }
