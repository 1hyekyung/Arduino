 int btnPin= 2;     
void setup() {
 Serial.begin(9600);
 pinMode(btnPin, INPUT);
 }
 void loop(){
 int btnState = digitalRead(btnPin);
 Serial.println(btnState);
 delay(10);
 }
