boolean  digits[10][8] = {
       {1,1,1,1,1,1,0,1}, // 0
       {0,1,1,0,0,0,0,1}, // 1
       {1,1,0,1,1,0,1,1}, // 2
       {1,1,1,1,0,0,1,1}, // 3
       {0,1,1,0,0,1,1,1}, // 4
       {1,0,1,1,0,1,1,1}, // 5
       {1,0,1,1,1,1,1,1}, // 6
       {1,1,1,0,0,1,0,1}, // 7
       {1,1,1,1,1,1,1,1}, // 8
       {1,1,1,1,0,1,1,1}  // 9
};

void  setup() {
      for (int  i = 2; i < 10; i++) {
            pinMode(i, OUTPUT);
      } 
}

void  loop() {
     for (int  i = 0; i < 10; i++) {    
          displayDigit(i);
          delay(1000);
    }
}

void  displayDigit(int  num) {
     int  pinNo = 2;
     for (int i = 0; i < 8; i++) {
         digitalWrite(pinNo + i, digits[num][i]);
     }
}
