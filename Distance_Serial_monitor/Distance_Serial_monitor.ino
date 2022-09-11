#include <LiquidCrystal.h>

// some Global Variable.
LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);
int pingPin = 7;
int echoPin = 6;
int ledRed = 12;
int ledGreen = 11;



void setup() {
  Serial.begin(9600);
  lcd_1.begin(16, 2);
}

void loop() {
  long duration, inches, cm;
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pingPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);

  if (inches <= 12 && cm <= 30) {
    digitalWrite(ledRed, HIGH);
    delay(10);
    digitalWrite(ledRed, LOW);
    delay(10);
    digitalWrite(ledGreen, LOW);
  } else if (inches >= 12 && cm >= 30) {
    digitalWrite(ledGreen, HIGH);
  }
  Serial.print(inches);
  Serial.print("Inches, ");
  Serial.print(cm);
  Serial.print("Cm");
  Serial.println();
  delay(1000);

  lcd_1.setCursor(0, 0);
  lcd_1.print(inches);
  lcd_1.print(" Inches");
  lcd_1.setCursor(0, 1);
  lcd_1.print(cm);
  lcd_1.print(" cm");
  delay(1000);
}

long microsecondsToInches(long microseconds) {
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}
