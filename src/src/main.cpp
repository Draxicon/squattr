#include <Arduino.h>

#define light 2 // the s3 verison has a rgb led try using builtin_led

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