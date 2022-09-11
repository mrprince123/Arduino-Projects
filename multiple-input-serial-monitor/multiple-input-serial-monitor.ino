
// I have defined the red , blue and green led pins.
int redLed = 13;
int blueLed = 12;
int greenLed = 11;

// Here I have defined the on and off time.
int ontime = 1000;
int offtime = 500;

// Here I have defined the rgb variable where the rgb input will store.
int redblinks;
int blueBlinks;
int greenBlinks;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

  // To start the Serial Monitor.
  Serial.begin(9600);

  // This is for the Red Led.
  Serial.print("How many time do you want red led to blink ?");
  while (Serial.available() == 0) {}
  redblinks = Serial.parseInt();

  // This is for the Blue Led.
  Serial.print("How many time do you want blue led to blink ?");
  while (Serial.available() == 0) {}
  blueBlinks = Serial.parseInt();

  // This is for the Green Led.
  Serial.print("How many time do you want green led to blink ?");
  while (Serial.available() == 0) {}
  greenBlinks = Serial.parseInt();
}


void loop() {

  // This loop will run redblinks times. 
  for (int i = 0; i <= redblinks; i++) {
    digitalWrite(redLed, HIGH);
    delay(ontime);
    digitalWrite(redLed, LOW);
    delay(offtime);
  }
  // Give a break of 2 seconds.
  delay(2000);
  for (int i = 0; i <= blueBlinks; i++) {
    digitalWrite(blueLed, HIGH);
    delay(ontime);
    digitalWrite(blueLed, LOW);
    delay(offtime);
  }
  delay(2000);
  for (int i = 0; i <= greenBlinks; i++) {
    digitalWrite(greenLed, HIGH);
    delay(ontime);
    digitalWrite(greenLed, LOW);
    delay(offtime);
  }
  delay(2000);
}
