int  digit = 0;
int sw1 = 12;
int sw2 = 13;

boolean digits[10][8] = {
    {1,1,1,1,1,1,0,1}, // 0
    {0,1,1,0,0,0,0,1}, // 1
    {1,1,0,1,1,0,1,1}, // 2
    {1,1,1,1,0,0,1,1}, // 3
    {0,1,1,0,0,1,1,1}, // 4
    {1,0,1,1,0,1,1,1}, // 5
    {1,0,1,1,1,1,1,1}, // 6
    {1,1,1,0,0,1,0,1}, // 7
    {1,1,1,1,1,1,1,1}, // 8
    {1,1,1,1,0,1,1,1}};  // 9


void setup() {
  pinMode(sw1,INPUT_PULLUP);
  pinMode(sw2,INPUT_PULLUP);

  for (int  i = 2; i < 10; i++) 
    pinMode(i, OUTPUT);
}

void loop() {
  if (digitalRead(sw1) == LOW) {
    ++digit;
    if (digit > 9)   digit = 0;
  }

  if (digitalRead(sw2) == LOW) {
    --digit;
    if (digit < 0)   digit = 9;
  }

  displayDigit(digit);
  delay(200);
}


void displayDigit(int num) {
  int pinNo = 2;

  for (int i = 0; i < 8; i++) {
    digitalWrite(pinNo+i, digits[num][i]);
  }
}
