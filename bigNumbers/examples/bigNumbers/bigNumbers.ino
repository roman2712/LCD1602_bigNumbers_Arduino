#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

#include "bigNumbers.h"
bigNumbers bigNumbers(&lcd);

void setup() {
  lcd.begin(16, 2);
  bigNumbers.intNumbers();
}

void loop()
{
  bigNumbers.printNumber(0, 0);
  bigNumbers.printNumber(1, 4);
  bigNumbers.printNumber(2, 8);
  bigNumbers.printNumber(3, 12);
  delay(1000);
  bigNumbers.printNumber(4, 0);
  bigNumbers.printNumber(5, 4);
  bigNumbers.printNumber(6, 8);
  bigNumbers.printNumber(7, 12);
  delay(1000);
  bigNumbers.printNumber(10, 0);
  bigNumbers.printNumber(8, 4);
  bigNumbers.printNumber(9, 8);
  bigNumbers.printNumber(10, 12);
  delay(1000);
}
