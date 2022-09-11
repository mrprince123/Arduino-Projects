#define t   30
#define t1  20
#define t2  100
#define t3  50

void setup() {

  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {

  animation_1();
  animation_1();
  animation_2();
  animation_2();
  animation_3();
  animation_3();
  animation_4();
  animation_4();
  animation_4();
  animation_4();
  animation_5();
  animation_5();
  animation_7();
  animation_7();
  animation_7();
  animation_7();
  animation_8();
  animation_8();
  animation_8();
  animation_8();
  animation_9();
  animation_9();
  animation_9();
}

/////////////////////////////////////////////////////////////////////////////////
void animation_1()
{
  clear();
  for (int i = 2; i < 14; i++) {
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
  }
  for (int i = 13; i > 1; i--) {
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
    delay(50);
  }
}
/////////////////////////////////////////////////////////////////////////////////
void animation_2()
{
  int count = 13;

  for (int i = 2; i < 13; i++) {
    clear();
    digitalWrite(i, HIGH);      // chaser 1
    digitalWrite(count, HIGH); // chaser 2
    count--;

    if (count != 7) {
      delay(70);
    }
  }

  for (int i = 13; i > 2; i--) {
    clear();
    digitalWrite(i, HIGH);
    digitalWrite(count, HIGH);
    count++;

    if (count != 8) {
      delay(70);
    }
  }
}

////////////////////////////////////////////////////////////////////////////////

void animation_3()
{
  clear();
  for (int i = 2; i < 14; i++) {
    digitalWrite(i, HIGH);
    delay(50);
  }
  for (int i = 2; i < 14; i++) {
    digitalWrite(i, LOW);
    delay(50);
  }


  for (int i = 14; i >= 2; i--) {
    digitalWrite(i, HIGH);
    delay(50);
  }
  for (int i = 14; i >= 2; i--) {
    digitalWrite(i, LOW);
    delay(50);
  }
}
///////////////////////////////////////////////////////////////////////////
void animation_4()
{
  digitalWrite (2, HIGH); digitalWrite (4, HIGH); digitalWrite (6, HIGH); digitalWrite (8, HIGH); digitalWrite (10, HIGH); digitalWrite (12, HIGH);
  delay (500);
  digitalWrite (2, LOW); digitalWrite (4, LOW); digitalWrite (6, LOW); digitalWrite (8, LOW); digitalWrite (10, LOW); digitalWrite (12, LOW);
  digitalWrite (13, HIGH); digitalWrite (11, HIGH); digitalWrite (9, HIGH); digitalWrite (7, HIGH); digitalWrite (5, HIGH); digitalWrite (3, HIGH);
  delay (500);
  digitalWrite (13, LOW); digitalWrite (11, LOW); digitalWrite (9, LOW); digitalWrite (7, LOW); digitalWrite (5, LOW); digitalWrite (3, LOW);
}
///////////////////////////////////////////////////////////////////////////
void animation_5()
{

  int count = 13;



  for (int i = 2; i < 13; i++) {
    clear();
    delay(50);
    digitalWrite(i, LOW);
    digitalWrite(count, LOW);
    digitalWrite(i, HIGH);      // chaser 1
    digitalWrite(count, HIGH); // chaser 2

    count--;


    if (count != 7) {
      delay(20);
    }
  }


  for (int i = 13; i > 2; i--) {
    clear();
    delay(50);
    digitalWrite(i, LOW);
    digitalWrite(i, HIGH);
    digitalWrite(count, HIGH);
    count++;

    if (count != 8) {
      delay(20);
    }
  }

  digitalWrite (2, HIGH); digitalWrite (13, HIGH);
  delay (70);
  digitalWrite (3, HIGH); digitalWrite (12, HIGH);
  delay (70);
  digitalWrite (4, HIGH); digitalWrite (11, HIGH);
  delay (70);
  digitalWrite (5, HIGH); digitalWrite (10, HIGH);
  delay (70);
  digitalWrite (6, HIGH); digitalWrite (9, HIGH);
  delay (70);
  digitalWrite (7, HIGH); digitalWrite (8, HIGH);
  delay (70);
  digitalWrite (8, HIGH); digitalWrite (7, HIGH);
  delay (70);

  digitalWrite (2, LOW); digitalWrite (13, LOW);
  delay (70);
  digitalWrite (3, LOW); digitalWrite (12, LOW);
  delay (70);
  digitalWrite (4, LOW); digitalWrite (11, LOW);
  delay (70);
  digitalWrite (5, LOW); digitalWrite (10, LOW);
  delay (70);
  digitalWrite (6, LOW); digitalWrite (9, LOW);
  delay (70);
  digitalWrite (7, LOW); digitalWrite (8, LOW);
  delay (70);
  digitalWrite (8, HIGH); digitalWrite (7, HIGH);
  delay (20);
  digitalWrite (8, LOW); digitalWrite (7, LOW);
  delay (20);
  digitalWrite (8, HIGH); digitalWrite (7, HIGH);
  delay (20);
  digitalWrite (8, LOW); digitalWrite (7, LOW);
  delay (20);
  digitalWrite (8, HIGH); digitalWrite (7, HIGH);
  delay (20);
  digitalWrite (8, LOW); digitalWrite (7, LOW);
  delay (20);
  digitalWrite (8, HIGH); digitalWrite (7, HIGH);
  delay (20);
  digitalWrite (8, LOW); digitalWrite (7, LOW);
  delay (20);
  digitalWrite (8, HIGH); digitalWrite (7, HIGH);
  delay (20);
  digitalWrite (8, LOW); digitalWrite (7, LOW);
  delay (20);
  digitalWrite (8, HIGH); digitalWrite (7, HIGH);
  delay (20);
  digitalWrite (8, LOW); digitalWrite (7, LOW);
  delay (20);
  digitalWrite (8, HIGH); digitalWrite (7, HIGH);
  delay (20);
  digitalWrite (8, LOW); digitalWrite (7, LOW);
  delay (20);
  digitalWrite (8, HIGH); digitalWrite (7, HIGH);
  delay (20);
  digitalWrite (8, LOW); digitalWrite (7, LOW);
  delay (20);
  digitalWrite (8, HIGH); digitalWrite (7, HIGH);
  delay (20);
  digitalWrite (8, LOW); digitalWrite (7, LOW);
  delay (20);
  digitalWrite (8, HIGH); digitalWrite (7, HIGH);
  delay (20);
  digitalWrite (8, LOW); digitalWrite (7, LOW);
  delay (20);
  digitalWrite (8, HIGH); digitalWrite (7, HIGH);
  delay (20);
  digitalWrite (8, LOW); digitalWrite (7, LOW);
  delay (20);
  digitalWrite (8, HIGH); digitalWrite (7, HIGH);
  delay (20);
  digitalWrite (8, LOW); digitalWrite (7, LOW);
  delay (20);
  digitalWrite (8, HIGH); digitalWrite (7, HIGH);
  delay (20);
  digitalWrite (8, LOW); digitalWrite (7, LOW);
  delay (20);
  digitalWrite (8, HIGH); digitalWrite (7, HIGH);
  delay (20);
  digitalWrite (8, LOW); digitalWrite (7, LOW);
  delay (20);

}

///////////////////////////////////////////////////////////////////////////
void animation_7()
{
  digitalWrite (2, HIGH); digitalWrite (13, HIGH);
  delay (70);
  digitalWrite (3, HIGH); digitalWrite (12, HIGH);
  delay (70);
  digitalWrite (4, HIGH); digitalWrite (11, HIGH);
  delay (70);
  digitalWrite (5, HIGH); digitalWrite (10, HIGH);
  delay (70);
  digitalWrite (6, HIGH); digitalWrite (9, HIGH);
  delay (70);
  digitalWrite (7, HIGH); digitalWrite (8, HIGH);
  delay (70);
  digitalWrite (8, HIGH); digitalWrite (7, HIGH);
  delay (70);

  digitalWrite (2, LOW); digitalWrite (13, LOW);
  delay (70);
  digitalWrite (3, LOW); digitalWrite (12, LOW);
  delay (70);
  digitalWrite (4, LOW); digitalWrite (11, LOW);
  delay (70);
  digitalWrite (5, LOW); digitalWrite (10, LOW);
  delay (70);
  digitalWrite (6, LOW); digitalWrite (9, LOW);
  delay (70);
  digitalWrite (7, LOW); digitalWrite (8, LOW);
  delay (70);
  digitalWrite (8, LOW); digitalWrite (7, LOW);
  delay (70);
}
///////////////////////////////////////////////////////////////////////////

void animation_8()
{
  digitalWrite (2, HIGH); digitalWrite (3, HIGH); digitalWrite (4, HIGH); digitalWrite (5, HIGH); digitalWrite (6, HIGH); digitalWrite (7, HIGH);
  delay (70);
  digitalWrite (2, LOW); digitalWrite (3, LOW); digitalWrite (4, LOW); digitalWrite (5, LOW); digitalWrite (6, LOW); digitalWrite (7, LOW);
  delay (70);
  digitalWrite (2, HIGH); digitalWrite (3, HIGH); digitalWrite (4, HIGH); digitalWrite (5, HIGH); digitalWrite (6, HIGH); digitalWrite (7, HIGH);
  delay (70);
  digitalWrite (2, LOW); digitalWrite (3, LOW); digitalWrite (4, LOW); digitalWrite (5, LOW); digitalWrite (6, LOW); digitalWrite (7, LOW);
  delay (70);
  digitalWrite (2, HIGH); digitalWrite (3, HIGH); digitalWrite (4, HIGH); digitalWrite (5, HIGH); digitalWrite (6, HIGH); digitalWrite (7, HIGH);
  delay (70);
  digitalWrite (2, LOW); digitalWrite (3, LOW); digitalWrite (4, LOW); digitalWrite (5, LOW); digitalWrite (6, LOW); digitalWrite (7, LOW);
  delay (500);

  digitalWrite (13, HIGH); digitalWrite (12, HIGH); digitalWrite (11, HIGH); digitalWrite (10, HIGH); digitalWrite (9, HIGH); digitalWrite (8, HIGH);
  delay (70);
  digitalWrite (13, LOW); digitalWrite (12, LOW); digitalWrite (11, LOW); digitalWrite (10, LOW); digitalWrite (9, LOW); digitalWrite (8, LOW);
  delay (70);

  digitalWrite (13, HIGH); digitalWrite (12, HIGH); digitalWrite (11, HIGH); digitalWrite (10, HIGH); digitalWrite (9, HIGH); digitalWrite (8, HIGH);
  delay (70);
  digitalWrite (13, LOW); digitalWrite (12, LOW); digitalWrite (11, LOW); digitalWrite (10, LOW); digitalWrite (9, LOW); digitalWrite (8, LOW);
  delay (70);

  digitalWrite (13, HIGH); digitalWrite (12, HIGH); digitalWrite (11, HIGH); digitalWrite (10, HIGH); digitalWrite (9, HIGH); digitalWrite (8, HIGH);
  delay (70);
  digitalWrite (13, LOW); digitalWrite (12, LOW); digitalWrite (11, LOW); digitalWrite (10, LOW); digitalWrite (9, LOW); digitalWrite (8, LOW);
  delay (500);
}
///////////////////////////////////////////////////////////////////////////

void animation_9()
{
  digitalWrite (2, HIGH); digitalWrite (3, HIGH); digitalWrite (4, HIGH); digitalWrite (5, HIGH); digitalWrite (6, HIGH); digitalWrite (7, HIGH); digitalWrite (8, HIGH); digitalWrite (9, HIGH); digitalWrite (10, HIGH); digitalWrite (11, HIGH); digitalWrite (12, HIGH); digitalWrite (13, HIGH);
  delay(500);
  digitalWrite (2, LOW); digitalWrite (3, LOW); digitalWrite (4, LOW); digitalWrite (5, LOW); digitalWrite (6, LOW); digitalWrite (7, LOW); digitalWrite (8, LOW); digitalWrite (9, LOW); digitalWrite (10, LOW); digitalWrite (11, LOW); digitalWrite (12, LOW); digitalWrite (13, LOW);
  delay(500);
}
///////////////////////////////////////////////////////////////////////////
void clear(void)
{
  for (int i = 2; i <= 13; i++) {
    digitalWrite(i, LOW);
  }
}
