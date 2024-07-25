void setup() {
      pinMode(12, OUTPUT);
      pinMode(11, OUTPUT);
      pinMode(10, OUTPUT);
      randomSeed(analogRead(A0));  
      Serial.begin(9600);
}

void loop() {
       digitalWrite(12, LOW);
       digitalWrite(11, LOW);
       digitalWrite(10, LOW);
    
       int  ran = random(1, 7);
       Serial.println(ran);

       if (ran == 1)        digitalWrite(10, HIGH);
       if (ran == 2)        digitalWrite(11, HIGH);
              if (ran == 3) {
             digitalWrite(10, HIGH);
             digitalWrite(11, HIGH);
       }
       if (ran == 4)            digitalWrite(12, HIGH);
       if (ran == 5)  {
              digitalWrite(12, HIGH);
              digitalWrite(10, HIGH);
       }
       if (ran == 6) {
             digitalWrite(12, HIGH);
             digitalWrite(11, HIGH);
       }
   
    delay(3000);
 }

