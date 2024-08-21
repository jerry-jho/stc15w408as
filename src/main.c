#include "arduino.h"

void setup() {
  pinMode(P1_0, OUTPUT);
}

void loop() {
  digitalWrite(P1_0, 0x1);
  delay(500);
  digitalWrite(P1_0, 0x0);
  delay(500);
}