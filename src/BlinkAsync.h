#ifndef _BlinkAsync_H
#define _BlinkAsync_H

namespace g3rb3n
{

  class BlinkAsync
  {
    
  private:
    uint8_t pin = LED_BUILTIN;
    long next = 0;
    long now = 0;
    bool state = false;
    long high = 100;
    long low = 900;
    uint8_t lowState = LOW;
    uint8_t highState = HIGH;
    
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
