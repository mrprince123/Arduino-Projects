
// int range -32,768 to 32,767
// Serial.begin(9600); - to make the commmuinication with the pc and arduino.
// Serial.print();
// Serial.println();


int ledPin = 13;
int ledPin1 = 12;
float ledPin2 = 3.4;
byte ledPin3 = 255;
char ledPin4 = 'a';
int totalPins;
void setup() {

  Serial.begin(9600);


  //  for (int i = 1; i <= 10; i++) {
  //    Serial.println(i);
  //  }

  totalPins = ledPin + ledPin1;
  //  Serial.println(totalPins);
  // Post and Pre - Increment
  //  Serial.println(ledPin++);
  // Serial.println(++ledPin);

  //  Serial.println(--ledPin);
  // Serial.println(ledPin--);

  //  Serial.println(ledPin2);
  //  Serial.println(ledPin3);

  Serial.println(ledPin4 + 3);
}

void loop() {
  // put your main code here, to run repeatedly:

}
