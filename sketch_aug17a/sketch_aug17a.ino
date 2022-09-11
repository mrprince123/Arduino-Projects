int ledPinNumber = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPinNumber, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPinNumber,HIGH);
  delay(1000);
  digitalWrite(ledPinNumber,LOW);
  delay(0);
}
