#include <Arduino.h>
#include "config.h"
#include "Button.h"
//#include "rotaryEncoder.h"
//#include "tft_test.h"// uncomment if testing tft screen


/*
RotaryEncoder *encoder;
u_int8_t lastState = LOW;
u_int8_t currentState;
*/

/*
void checkpos()
{
    encoder->ISR_CheckAndUpdatePositon();
}
*/
Button leftButton(LEFTBUTTON);
void setup()
{
    Serial.begin(115200);
    //log_d("TEST");
    //Serial.println("== Serial Start ==");
    //basicdraw(); // uncomment if testing tft screen
    //encoder = new RotaryEncoder();
    //Serial.println("== Encoder Class Created ==");
    //attachInterrupt(digitalPinToInterrupt(RotaryEncoderPinA), checkpos, CHANGE);
    //attachInterrupt(digitalPinToInterrupt(RotaryEncoderPinB), checkpos, CHANGE);
    //Serial.println("== Interupts Attached ==");
    delay(1000);
    Serial.println("== Setup Complete ==");
    leftButton.begin();
    
   
}

void loop()
{
    //Serial.printf("pos: %d\n", encoder->Direction);
    //Button.isPressed();
    //Serial.println("Button is pressed");
    if(leftButton.isPressed())
    {
        Serial.println("Button is pressed");
    }
    else
    {
        Serial.println("Button is not pressed");
    }
    delay(50);
   
    
}
