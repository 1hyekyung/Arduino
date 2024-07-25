int poPin = 0;
int ledPin = 9;
int poVal = 0;
void setup() {
  Serial.begin(9600);

}

void loop() {
  int   val = analogRead(0); 
  Serial.print("Photo Value    :   ");
  Serial.println(val);
  delay(200);
  poVal = analogRead(poPin);
 poVal = map(poVal, 600,1000, 255,0); 
analogWrite(ledPin, poVal);
 delay(10);

}
