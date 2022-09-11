
int ledPin[] = {1, 2, 3, 4};
int ledCount = 4;

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i<ledCount; i++){
     pinMode(ledPin[i], OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i<4; i++){
    digitalWrite(ledPin[i], HIGH);
    delay(1000);
    digitalWrite(ledPin[i], LOW);
    delay(1000);
  }
}
