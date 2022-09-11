#include <LiquidCrystal.h>

// Some Global Variable
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
// Ultra Sonic Sensor
int trigPin = 7;
int echoPin = 6;

int buzzer = 9; // and red led same pin here
int ledGreen = 8;

// Some Parameter Declaration
long duration, inches, cm;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Welcome You to ");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("our 1th Project");
  delay(1000);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delay(1000);
  digitalWrite(trigPin, HIGH);
  delay(1000);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);


  // This is for the Serial Monitor
  Serial.print(inches);
  Serial.print("Inches, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(100);

  // This is for the LCD Monitor
  lcd.setCursor(0, 0);
  lcd.print(inches);
  lcd.print(" Inches");
  lcd.setCursor(0, 1);
  lcd.print(cm);
  lcd.print(" cm");
  delay(100);

  if (inches <= 12 && cm <= 30) {
    digitalWrite(ledGreen, LOW);
    for (int i = 0; i <= 10; i++) {
      digitalWrite(buzzer, HIGH);
      delay(100);
      digitalWrite(buzzer, LOW);
      delay(100);
    }
    lcd.setCursor(0, 0);
    lcd.print("You are Close");
    lcd.setCursor(0, 1);
    lcd.print(" To the Screen ");
    delay(1500);
    lcd.clear();


    lcd.setCursor(0, 0);
    lcd.print("Go Back");
    lcd.setCursor(0, 1);
    lcd.print("Make Distance");
    delay(1000);
    lcd.clear();

  } else {
    digitalWrite(ledGreen, HIGH);
    delay(100);
    digitalWrite(ledGreen, LOW);
    delay(100);
  }
}

long microsecondsToInches(long microseconds) {
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}
