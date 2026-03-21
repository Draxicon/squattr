#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

class Button
{
    private:
        int pin;
        bool previous = HIGH;
        bool stable = HIGH;
        unsigned long debounceTime = 0;
        const unsigned long debounceDelay = 25;
        unsigned long startTime = 0;
        unsigned long hold = 0;
        bool lastStable = HIGH;
    public:
        Button(int p);
        void begin();
        bool isPressed();
        void debounce();
        bool isReleased();
        unsigned long holdTime();
};

#endif