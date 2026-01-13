#include <Arduino.h>
#include "config.h"
#include "tft_test.h"// uncomment if testing tft screen

u_int8_t lastState = LOW;
u_int8_t currentState;

void setup()
{
    basicdraw(); // uncomment if testing tft screen
    Serial.begin(9600);
    pinMode(LEFTBUTTON, INPUT_PULLUP);
    Serial.println("Hello World");

}

void loop()
{
    currentState = digitalRead(LEFTBUTTON);

    if(lastState == HIGH && currentState == LOW)
    {
        Serial.println("The button is pressed");
    }
    else if (lastState == LOW && currentState == HIGH)
    {
        Serial.println("The button is released");
    }

    lastState = currentState;
}