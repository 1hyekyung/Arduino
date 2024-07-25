int tPin = 2;
int ePin = 3;

void setup() {
  Serial.begin(9600);   
  pinMode(tPin, OUTPUT);
  pinMode(ePin, INPUT);
}

void loop() {
  long d1 , d2;

  digitalWrite(tPin, LOW);
  delayMicroseconds(2);
  digitalWrite(tPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(tPin, LOW);

  d1 = pulseIn(ePin, HIGH);

  d2 = d1 * 17 / 1000;
Serial.println(d2);

     if (d2 < 10) {
            analogWrite(10, 0);
            analogWrite(9, 0);
            analogWrite(11,  255);
      } else if (d2 < 20) {
            analogWrite(9, 0);
            analogWrite(10, 255);
            analogWrite(11,  0);
      } else if (d2 < 30) {
            analogWrite(9,  255);
            analogWrite(10, 0);
            analogWrite(11, 0);
      }
     delay(100);


}