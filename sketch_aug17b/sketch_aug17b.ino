void setup() {
  // put your setup code here, to run once:
  unsigned char i;
  for(int i = 1; i<=4; i++)
  pinMode(i, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned char i;
  for(i=1; i<=4; i++){
    digitalWrite(i,HIGH);
    delay(1000);
  }
  for(i=1; i<=4; i++){
    digitalWrite(i,LOW);
    delay(1000);
  }
}
