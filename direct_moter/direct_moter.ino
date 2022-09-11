
int ledPin1[] = {0, 1, 2, 3, 4, 5, 6};
int ledPin2[] = {7, 8, 9, 10, 11, 12, 13};

void setup() {
  for(int i = 0; i<=6; i++){
    pinMode(ledPin1[i], OUTPUT);
  }

  for(int j = 7; j<=13; j++){
    pinMode(ledPin2[j], OUTPUT);
  }
  
}

void loop() {
  for( int i = 0; i<=6; i++){
    digitalWrite(ledPin1[i], HIGH);
    delay(100);
    digitalWrite(ledPin1[i], LOW);
    delay(100);
  }
   for(int j = 7; j<=13; j++){
    digitalWrite(ledPin2[j], HIGH);
    delay(100);
    digitalWrite(ledPin2[j], LOW);
    delay(100);
  }
}
