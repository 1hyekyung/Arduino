int  btnPin = 2;

void  setup( ) {
      Serial.begin(9600);
      //내부 풀업 모드 적용
      pinMode(btnPin, INPUT_PULLUP);     
}

void  loop( ) {
      int  btnState = digitalRead(btnPin);
      Serial.println(btnState);
      delay(10);
}
