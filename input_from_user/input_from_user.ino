
// I have defined the red led pin.
int redled = 13;

// Here I have defined the on and off time.
int ontime = 1000;
int offtime = 500;

// This is the variable where redblinks input will store.
int redblinks;

void setup() {
  pinMode(redled, OUTPUT);

  // To start the Serial Monitor.
  Serial.begin(9600);

  // This is for the Red Led.
  Serial.print("How many times do you want red led to blink?");
  while (Serial.available() == 0) {}

  // It will only accept integer as an input. 
  redblinks = Serial.parseInt();
}

void loop() {

  // This loop will run redblinks times. 
  for (int i = 0; i <= redblinks; i++) {
    digitalWrite(redled, HIGH);
    delay(ontime);
    digitalWrite(redled, LOW);
    delay(offtime);
  }

  // Give a break of 2 seconds.
  delay(2000);
}
