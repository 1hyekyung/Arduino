void setup() {
   pinMode(12, OUTPUT);
   pinMode(11, OUTPUT);
   pinMode(10, OUTPUT);
   randomSeed(analogRead(0)); 
   Serial.begin(9600);
 }

void loop() {
int ran = random(1, 7);
 Serial.println(ran);
 delay(2000);
}
