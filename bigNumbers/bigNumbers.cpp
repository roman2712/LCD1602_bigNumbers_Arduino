#ifndef BIGNUMBERS_CPP
#define BIGNUMBERS_CPP

#include "bigNumbers.h"

template <class L>
bigNumbers<L>::bigNumbers(L *_lcd)
{
  lcd = _lcd;
}

template <class L>
void bigNumbers<L>::printNumber(uint8_t n, uint8_t posx, uint8_t posy)
{
  lcd->setCursor(posx, posy);
  for (size_t i = 0; i < 3; ++i) lcd->write(pgm_read_byte_near(number + n * 6 + i));
  lcd->setCursor(posx, posy + 1);
  for (size_t i = 0; i < 3; ++i) lcd->write(pgm_read_byte_near(number + n * 6 + i + 3));
}

template <class L>
void bigNumbers<L>::intNumbers()
{
  uint8_t temp[8];
  for (size_t i = 2; i < 8; ++i) temp[i] = 0;
  temp[0] = 0xFF;
  temp[1] = 0xFF;
  lcd->createChar(0, temp);
  temp[6] = 0xFF;
  temp[7] = 0xFF;
  lcd->createChar(2, temp);
  temp[0] = 0;
  temp[1] = 0;
  lcd->createChar(1, temp);
}


#endif