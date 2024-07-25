int  ledPin = 10;

void  setup() {           
      Serial.begin(9600);
      pinMode(ledPin, OUTPUT);
}

void  loop() {                     
      int  poValue = analogRead(0);   //센서 값 읽음

      if (poValue  < 300)   digitalWrite(ledPin, HIGH);   //어두우면 LED 켬
      else                  digitalWrite(ledPin, LOW);    // 밝으면 LED 끔

      Serial.print(“Photoregister  Value    :   “);
      Serial.println(poValue);
      delay(200);
}
