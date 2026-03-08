#include <Arduino.h>
#include "config.h"
#include "Button.h"
#include "house.h"
#include "rotaryEncoder.h"
//#include "tft_test.h"// uncomment if testing tft screen



RotaryEncoder *encoder;
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
void leftchangestate()
{
    leftButton.debounce();
    if(leftButton.isPressed())
    {
        squattrHouse.Toggle(LEFTBUTTON);
    }
}
void middlechangestate()
{
    middleButton.debounce();
    if(middleButton.isPressed())
    {
        squattrHouse.Toggle(MIDDLEBUTTON);
    }
}
void rightchangestate()
{
    rightButton.debounce();
    if(rightButton.isPressed())
    {
        squattrHouse.Toggle(RIGHTBUTTON);
    }
}
*/

void setup()
{
    Serial.begin(115200);
    delay(1000);
    //log_d("TEST");
    Serial.println("== Serial Start ==");
    //basicdraw(); // uncomment if testing tft screen
    encoder = new RotaryEncoder();
     leftButton.begin();
     middleButton.begin();
     rightButton.begin();
    Serial.println("== Encoder Class Created ==");
    //attachInterrupt(digitalPinToInterrupt(RotaryEncoderPinA), checkpos, CHANGE);
    //attachInterrupt(digitalPinToInterrupt(RotaryEncoderPinB), checkpos, CHANGE);
    
    //attachInterrupt(digitalPinToInterrupt(LEFTBUTTON), leftchangestate, CHANGE);
    //attachInterrupt(digitalPinToInterrupt(MIDDLEBUTTON), middlechangestate, CHANGE);
    //attachInterrupt(digitalPinToInterrupt(RIGHTBUTTON), rightchangestate, CHANGE);
    Serial.println("== Interupts Attached ==");
    delay(1000);
    Serial.println("== Setup Complete ==");
   
    
   
}

void loop()
{  
     middleButton.debounce();
    if(middleButton.isPressed())
    {
        squattrHouse.Toggle(MIDDLEBUTTON);
    }
    leftButton.debounce();
    if(leftButton.isPressed())
    {
        squattrHouse.Toggle(LEFTBUTTON);
    }
   
    rightButton.debounce();
    if(rightButton.isPressed())
    {
        squattrHouse.Toggle(RIGHTBUTTON);
    }

    delay(100);
}
