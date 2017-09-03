#include "BlinkAsync.h"

using namespace g3rb3n;

BlinkAsync led;

void setup() 
{
  Serial.begin(230400);
  Serial.println();
  Serial.println("BlinkAsync");
  led.setIntervals(900, 100);
}

void loop()
{
  led.handle();
}
