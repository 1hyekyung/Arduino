# include <SoftwareSerial.h>

SoftwareSerial  BTSerial(2,3);
 
void setup() {
        Serial.begin(9600);
        BTSerial.begin(9600);

        pinMode(13, OUTPUT); 
        digitalWrite(13,LOW);     
}

void  loop() {
    if (BTSerial.available()) {
            char  d1 = BTSerial.read();   

            if ( d1 == 'a' )   digitalWrite(13,HIGH); 
            else  if ( d1 == 'b')   digitalWrite(13,LOW);         
               
    }
}
