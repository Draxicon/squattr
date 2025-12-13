#include <Arduino.h>

#define light 2 // change this to LED_BUILTIN if you have the S2 (one of sam's)

void setup()
{
    pinMode(light, OUTPUT);
}

void loop()
{
    digitalWrite(light, HIGH);
    delay(7000);
    digitalWrite(light, LOW);
    delay(7000);
}