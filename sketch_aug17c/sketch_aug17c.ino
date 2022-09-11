
int ledPinNumber = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPinNumber, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    int instruction;
    if(instruction="1"){
       digitalWrite(ledPinNumber,HIGH);
       delay(1000);
    }

    if(instruction="0"){
      digitalWrite(ledPinNumber,LOW);
      delay(1000);
    }
}
