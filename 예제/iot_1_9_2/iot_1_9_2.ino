void  setup() {           
      Serial.begin(9600);
}

void  loop() {                     
       int   sa = analogRead(0); 
       Serial.print(“Photo Value    :   “);
       Serial.println(sa);
       delay(200);
}
