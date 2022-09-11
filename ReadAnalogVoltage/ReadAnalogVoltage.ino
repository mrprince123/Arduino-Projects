#include <LiquidCrystal.h>

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  lcd_1.begin(16, 2);
}
void loop() {
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperature = voltage * 100;
  lcd_1.setCursor(0, 1);
  lcd_1.print("Voltage ");
  lcd_1.print(voltage);
  lcd_1.setCursor(0, 0);
  lcd_1.print("Temp ");
  lcd_1.print(temperature);
  delay(1000);
  Serial.println("voltage : ");
  Serial.println(voltage);
  Serial.println("Temprature : ");
  Serial.println(temperature);
  delay(1000);
}
