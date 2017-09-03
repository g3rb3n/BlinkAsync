Simple utility for letting a led blink in patterns without blocking calls.

# Example #
```
#include <BlinkAsync.h>

BlinkAsync led;

void setup()
{
  led.setIntervals(900, 100);
}

void loop()
{
  led.handle();
}
```
