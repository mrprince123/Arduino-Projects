// C++ code

int pos = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
}

void loop()
{
  if (digitalRead(A0) == HIGH) {
    tone(8, 440, 100);
  }
  if (digitalRead(A1) == HIGH) {
    tone(8, 494, 100);
  }
  if (digitalRead(A2) == HIGH) {
    tone(8, 323, 100);
  }
  if ( digitalRead(A3) == HIGH) {
    tone(8, 432, 100);
  }
  if (digitalRead(A4) == HIGH) {
    tone(8, 435, 100);
  }

  delay(20);
}
