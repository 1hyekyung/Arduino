void setup() {
     Serial.begin(9600);              //시리얼 통신 할 때의 통신속도
}

void loop() {
      if (Serial.available()){  
              char  c = Serial.read();       
              Serial.println(c);
      }
}

