#ifndef _ARDUINO_H
#define _ARDUINO_H

#include <lint.h>
#include <8052.h>

inline void delay(unsigned int ms) {
  unsigned int i;
  do {
    i = 16000000uL / 13000;
    while (--i);
  } while (--ms);
}

#define pinMode(p, m) do {} while (0)
#define INPUT 0
#define OUTPUT 1

#define digitalWrite(p, v) do {p = v;} while(0)

#endif
