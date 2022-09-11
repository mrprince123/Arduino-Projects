
int ledPin[] = {2, 3, 4,5,6};

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i <= 4; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i <= 4; i++) {
    digitalWrite(ledPin[i], HIGH);
    delay(100);
    digitalWrite(ledPin[i], LOW);
    delay(100);
  }
  for (int i = 4; i >= 0; i--) {
    digitalWrite(ledPin[i], HIGH);
    delay(100);
    digitalWrite(ledPin[i], LOW);
    delay(100);
  }

}
