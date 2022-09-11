int redLed = 0;
int greenLed = 1;
int orangeLed = 2;
int onTime = 1000;
int offTime = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(orangeLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i <=5; i++) {
    digitalWrite(redLed, HIGH);
    delay(onTime);
    digitalWrite(redLed, LOW);
    delay(offTime);
  }

  // Green Light
  for (int j = 0; j <=3; j++) {
    digitalWrite(greenLed, HIGH);
    delay(onTime);
    digitalWrite(greenLed, LOW);
    delay(offTime);
  }

  // Orange Led Light
  for (int k = 0; k <=2; k++) {
    digitalWrite(orangeLed, HIGH);
    delay(onTime);
    digitalWrite(orangeLed, LOW);
    delay(offTime);
  }

}
