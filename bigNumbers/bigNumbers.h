#ifndef BIGNUMBERS_H
#define BIGNUMBERS_H

#include <avr/pgmspace.h>

const PROGMEM  uint8_t number[] = {
  0xFF, 0x00, 0xFF, 0xFF, 0x01, 0xFF, //0
  0x00, 0xFF, 0x20, 0x01, 0xFF, 0x01, //1
  0x00, 0x00, 0xFF, 0xFF, 0x02, 0x01, //2
  0x00, 0x02, 0xFF, 0x01, 0x01, 0xFF, //3
  0xFF, 0x20, 0xFF, 0x00, 0x00, 0xFF, //4
  0xFF, 0x02, 0x02, 0x01, 0x01, 0xFF, //5
  0xFF, 0x02, 0x02, 0xFF, 0x01, 0xFF, //6
  0x00, 0x00, 0xFF, 0x20, 0x20, 0xFF, //7
  0xFF, 0x02, 0xFF, 0xFF, 0x01, 0xFF, //8
  0xFF, 0x02, 0xFF, 0x01, 0x01, 0xFF, //9
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20 //' '
};

template <class L>
class bigNumbers
{
  private:
    L *lcd;
  public:
    bigNumbers(L *_lcd);
    void printNumber(uint8_t n, uint8_t posx, uint8_t posy = 0);
    void intNumbers();
};

#include "bigNumbers.cpp"

#endif