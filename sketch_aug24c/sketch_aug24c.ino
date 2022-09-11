#include <LiquidCrystal.h>

int seconds = 0;

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd_1.begin(16, 2);
  lcd_1.print("All Team Member");
}

String name[] = {"All Member" , "Avas", "Aditya", "Prince", "Suhana", "Khushi", "Anisha", "Shubranshu", "kavikant", "Manish", "Abhishek", "Fuck you all", "Group 2"};
void loop()
{
  lcd_1.setCursor(0, 1);
  for (int i = 1; i <= 16; i++) {
    lcd_1.print(name[i]);
    delay(1000);
    lcd_1.clear();

  }
}
