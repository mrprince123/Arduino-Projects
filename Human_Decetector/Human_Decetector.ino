int ledPin = 13;
int pirPin = 2;
int priStat = 0;
int buzzer = 8;

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
}

void loop(){
  priStat = digitalRead(pirPin);
  if(priStat == HIGH) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(100);
    Serial.println("Hey I got you!!");
    delay(500);
  } else {
    Serial.println("Your are not human");
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzer, LOW);
  }
}
