// C++ code
//

int red = 2;
int blue = 1; 
int green = 0;


void setup()
{
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
}


void loop()
{
  digitalWrite(green, HIGH);
  delay(100); 
  digitalWrite(green, LOW);
  delay(1000); 
  digitalWrite(blue, HIGH);
  delay(100); 
  digitalWrite(blue, LOW);
  delay(1000); 
  digitalWrite(red, HIGH);
  delay(100); 
  digitalWrite(red, LOW);
  delay(1000); 
}
