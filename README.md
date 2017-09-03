Simple utility for letting a led blink in patterns without blocking calls.

Of course this only works properly if other calls in loop will also return quickly.

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
