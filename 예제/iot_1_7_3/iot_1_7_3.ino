int redPin = 9;
int greenPin = 6;
int bluePin = 5;

void setup(){
  Serial.begin(9600);
}

void loop(){
analogWrite(redPin,255);
analogWrite(greenPin,0);
analogWrite(bluePin,0);  
delay(1000);

       analogWrite(redPin,0);
       analogWrite(greenPin,255);
       analogWrite(bluePin,0);  
       delay(1000);

       analogWrite(redPin,0);
       analogWrite(greenPin,0);
       analogWrite(bluePin,255);  
       delay(1000);

       analogWrite(redPin,255);
       analogWrite(greenPin,0);
       analogWrite(bluePin,255);  
       delay(1000);

       analogWrite(redPin,255);
       analogWrite(greenPin,255);
       analogWrite(bluePin,255);  
       delay(1000);

}

