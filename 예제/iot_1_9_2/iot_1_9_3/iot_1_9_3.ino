int redLed = 10;
int greenLed = 12
;
void setup(){
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, LOW);   
}

void loop() {
  digitalWrite(redLed, HIGH);
  digitalWrite(greenLed, LOW);
  delay(3000);
  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, HIGH);
  delay(1500);
  for(int i=0; i<5; i++) {
    digitalWrite(greenLed, LOW);
    delay(50);
    digitalWrite(greenLed, HIGH);
    delay(50);
  }
}
