#include <Arduino.h>
#include "config.h"
#include "Button.h"
#include "concreteStates.h"
#include "houseState.h"
#include "House.h"
//#include "rotaryEncoder.h"
//#include "tft_test.h"// uncomment if testing tft screen



//RotaryEncoder *encoder;
House squattrHouse;
u_int8_t lastState = LOW;
u_int8_t currentState;

Button leftButton(LEFTBUTTON);
Button middleButton(MIDDLEBUTTON);
Button rightButton(RIGHTBUTTON);

/*
void checkpos()
{
    encoder->ISR_CheckAndUpdatePositon();
}
*/
House myHouse;

void setup()
{
    Serial.begin(115200);
    delay(1000);
    //log_d("TEST");
    Serial.println("== Serial Start ==");
    //basicdraw(); // uncomment if testing tft screen
    //encoder = new RotaryEncoder();
    leftButton.begin();
    middleButton.begin();
    //middleButton.begin();
    //rightButton.begin();
    //Serial.println("== Encoder Class Created ==");
    //attachInterrupt(digitalPinToInterrupt(RotaryEncoderPinA), checkpos, CHANGE);
    //attachInterrupt(digitalPinToInterrupt(RotaryEncoderPinB), checkpos, CHANGE);
    
    //attachInterrupt(digitalPinToInterrupt(LEFTBUTTON), leftchangestate, CHANGE);
    //attachInterrupt(digitalPinToInterrupt(MIDDLEBUTTON), middlechangestate, CHANGE);
    //attachInterrupt(digitalPinToInterrupt(RIGHTBUTTON), rightchangestate, CHANGE);
    //Serial.println("== Interupts Attached ==");
    //delay(1000);
    Serial.println("== Setup Complete ==");
    //leftButton.begin();
    //middleButton.begin();
    //rightButton.begin();
    
   
}

void loop() {
    /*
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
    */
    middleButton.debounce();
    if(middleButton.isPressed())
    {
        Serial.println("Button got pressed");
    }
    if(middleButton.isReleased())
    {
        Serial.print("Held For: ");
        Serial.print(middleButton.holdTime());
        Serial.println(" Seconds");
    }

    delay(10);
}