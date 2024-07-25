int   potPin = 0;        // potentiometer 입력을 A0 핀
int   ledPin = 5; 
int   val = 0;                 // 읽은 아날로그 값을 저장하는 변수
 
void setup() { 
      Serial.begin(9600);
}

void loop() { 
      val = analogRead(potPin);  // 센서에서 값을 읽음 
      Serial.print(val);
      Serial.print("    ");
      val = map(val, 0,1023,0,255);
      Serial.println(val);
      analogWrite(ledPin, val);
      delay(20);                       
}
