#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

#include <bigNumbers.h>
bigNumbers <LiquidCrystal_I2C> bigNumbersLcd(&lcd);

void setup() {
  lcd.init();
  lcd.setBacklight(255);
  bigNumbersLcd.intNumbers();
}

void loop()
{
    bigNumbersLcd.printNumber(0, 0);
    bigNumbersLcd.printNumber(1, 4);
    bigNumbersLcd.printNumber(2, 8);
    bigNumbersLcd.printNumber(3, 12);
    delay(1000);
    bigNumbersLcd.printNumber(4, 0);
    bigNumbersLcd.printNumber(5, 4);
    bigNumbersLcd.printNumber(6, 8);
    bigNumbersLcd.printNumber(7, 12);
    delay(1000);
    bigNumbersLcd.printNumber(10, 0);
    bigNumbersLcd.printNumber(8, 4);
    bigNumbersLcd.printNumber(9, 8);
    bigNumbersLcd.printNumber(10, 12);
    delay(1000);
}
