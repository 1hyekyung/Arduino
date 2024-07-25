# include <SoftwareSerial.h>
 int  BT_TX  = 2;
 int  BT_RX  = 3;

 // SoftwareSerial(RX, TX) 형식으로 블루투스 모듈과  교차하여 연결
 SoftwareSerial  BTSerial(BT_TX, BT_RX);

void setup() {
        Serial.begin(9600);
        BTSerial.begin(9600);
}
void  loop() {
       if(BTSerial.available()) {     // 블루투스 모듈  아두이노  시리얼 모니터
               Serial.write(BTSerial.read());
       }
       if(Serial.available()) {        // 시리얼 모니터  아두이노  블루투스 모듈
               BTSerial.write(Serial.read());
       }
}
