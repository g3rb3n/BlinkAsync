#include "BlinkAsync.h"

#include <Arduino.h>

namespace g3rb3n
{

  BlinkAsync::BlinkAsync():
    pin(PIN)
  {
    pinMode(pin, OUTPUT);
  }

  BlinkAsync::BlinkAsync(uint8_t _pin):
    pin(_pin)
  {
    pinMode(pin, OUTPUT);
  }

  BlinkAsync::BlinkAsync(uint8_t _lowState, uint8_t _highState):
    pin(PIN), lowState(_lowState), highState(_highState)
  {
    pinMode(pin, OUTPUT);
  }

  BlinkAsync::BlinkAsync(uint8_t _pin, uint8_t _lowState, uint8_t _highState):
    pin(_pin), lowState(_lowState), highState(_highState)
  {
    pinMode(pin, OUTPUT);
  }

  BlinkAsync::~BlinkAsync()
  {}

  void BlinkAsync::setInterval(long _interval)
  {
    high = _interval;
    low = _interval;
  }

  void BlinkAsync::setIntervals(long _low, long _high)
  {
    low = _low;
    high = _high;
  }
  
  void BlinkAsync::handle()
  {
    now = millis();
    if (now < next)
      return;
    state = !state;
    next = now + (state ? high : low);
    digitalWrite(pin, (state ? highState : lowState));
  }

}
