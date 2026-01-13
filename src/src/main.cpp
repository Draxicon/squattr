#include <Arduino.h>
#include "config.h"
#include "inputManager.h"
// #include "tft_test.h"// uncomment if testing tft screen

RotaryEncoder *encoder;
u_int8_t lastState = LOW;
u_int8_t currentState;

void checkpos()
{
    encoder->ISR_CheckAndUpdatePositon();
}
void setup()
{
//  basicdraw(); // uncomment if testing tft screen
    Serial.begin(9600);
    encoder = new RotaryEncoder();

    attachInterrupt(digitalPinToInterrupt(RotaryEncoderPinA), checkpos, CHANGE);
    attachInterrupt(digitalPinToInterrupt(RotaryEncoderPinB), checkpos, CHANGE);
}

void loop()
{
    Serial.printf("pos: %d\n", encoder->Direction);
}
