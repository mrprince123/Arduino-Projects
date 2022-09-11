
int ledPins = 5;

void setup() {
  Serial.begin(9600);
  //  for (int i = 1; i<=10000; i++)
  //    Serial.println(i);

  Serial.println("I am Starting the predefine loop");
  Serial.println(ledPins);
  Serial.println();

}

void loop() {
  Serial.print("I am Printing the loop");
  Serial.println(ledPins);
  delay(500);
}
