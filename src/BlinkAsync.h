#ifndef _BlinkAsync_H
#define _BlinkAsync_H

#ifdef ARDUINO_ARCH_ESP8266
  #define PIN LED_BUILTIN
  #define ON LOW
  #define OFF HIGH
#endif

#ifdef ARDUINO_ARCH_AVR
  #define PIN 13
  #define ON HIGH
  #define OFF LOW
#endif

#ifndef PIN
  #warning "No builtin led defined"
#endif

#include <Arduino.h>
#include <inttypes.h>

namespace g3rb3n
{

  class BlinkAsync
  {
    
  private:
    uint8_t pin = PIN;
    long next = 0;
    long now = 0;
    bool state = false;
    long high = 100;
    long low = 900;
    uint8_t lowState = OFF;
    uint8_t highState = ON;
    
  public:
    BlinkAsync();
    BlinkAsync(uint8_t pin);
    BlinkAsync(uint8_t _lowState, uint8_t _highState);
    BlinkAsync(uint8_t pin, uint8_t _lowState, uint8_t _highState);
    ~BlinkAsync();

    void setInterval(long interval);
    void setIntervals(long low, long high);
    void handle();
    
  };
  
}

#endif
