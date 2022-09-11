int pins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
int pinCount = 10;

void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<=pinCount; i++){
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  // This is normal for loop 0 to 10
  for(int i =0; i<pinCount; i++){
    digitalWrite(pins[i], HIGH);
    delay(100);
    digitalWrite(pins[i], LOW);
  }
  // This is the reverse for loop. 10 to 0
  for(int i=pinCount; i>=0; i--){
    digitalWrite(pins[i], HIGH);
    delay(100);
    digitalWrite(pins[i], LOW);
  }
}
