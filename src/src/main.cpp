#include <Arduino.h>
#include "config.h"
#include "Button.h"
#include "concreteStates.h"
#include "houseState.h"
#include "House.h"
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
Button middleButton(MIDDLEBUTTON);
Button rightButton(RIGHTBUTTON);
House myHouse;

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
    middleButton.begin();
    rightButton.begin();
    
   
}

void loop() {
    leftButton.debounce();
    middleButton.debounce();
    rightButton.debounce();

    if(leftButton.isPressed()) 
    {
        myHouse.Toggle(LBUTTON);
    }

        // MIDDLE BUTTON
    if (middleButton.isPressed()) 
    {
        myHouse.Toggle(MBUTTON);
    }

    // RIGHT BUTTON
    if (rightButton.isPressed()) 
    {
        myHouse.Toggle(RBUTTON);
    }

    delay(10);
}