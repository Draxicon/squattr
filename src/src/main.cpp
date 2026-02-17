#include <Arduino.h>
#include "config.h"
#include "inputManager.h"
 #include "tft_test.h"// uncomment if testing tft screen

RotaryEncoder *encoder;
u_int8_t lastState = LOW;
u_int8_t currentState;

void checkpos()
{
    encoder->ISR_CheckAndUpdatePositon();
}
void setup()
{
    basicdraw(); // uncomment if testing tft screen
    Serial.begin(115200);
    Serial.println("== Serial Start ==");
    encoder = new RotaryEncoder();
    Serial.println("== Encoder Class Created ==");
    attachInterrupt(digitalPinToInterrupt(RotaryEncoderPinA), checkpos, CHANGE);
    attachInterrupt(digitalPinToInterrupt(RotaryEncoderPinB), checkpos, CHANGE);
    Serial.println("== Interupts Attached ==");
    delay(1000);
    basicdraw();
    Serial.println("== Setup Complete ==");
    
   
}

void loop()
{
    Serial.printf("pos: %d\n", encoder->Direction);
   
    
}
