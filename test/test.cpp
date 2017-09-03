#include <Arduino.h>
#include <unity.h>

#include "../src/BlinkAsync.h"

#ifdef UNIT_TEST

using namespace g3rb3n;

BlinkAsync led(LOW, HIGH);

void setup() 
{
  // NOTE!!! Wait for >2 secs
  // if board doesn't support software reset via Serial.DTR/RTS
  delay(2000);
  UNITY_BEGIN();
}

void loop() 
{
  UNITY_END();
}

#endif
