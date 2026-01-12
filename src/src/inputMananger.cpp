#include <Arduino.h>
#include "inputManager.h"
#include "config.h"

// basically a k-map of potential states
int8_t RotaryLookupSheet[] =
{
    0, -1, 1, 0,
    1, 0, 0, -1,
    -1, 0, 0, 1,
    0, 1, -1, 0
};

RotaryEncoder::RotaryEncoder()
{
    _pinA = 0;
    _pinB = 0;

    _OldDirection = 0;
    _currentDirection = 0;
    Direction = 0;

    pinMode(RotaryEncoderPinA, INPUT_PULLUP);
    pinMode(RotaryEncoderPinB, INPUT_PULLUP);

    RotaryEncoder::ISR_CheckAndUpdatePositon();
   
}

void RotaryEncoder::ISR_CheckAndUpdatePositon()
{
   _pinA = digitalRead(RotaryEncoderPinA);
   _pinB = digitalRead(RotaryEncoderPinB);

   // use the values of the pins to create a code for the lookup sheet
   _currentDirection = _pinA | (_pinB << 1);

   if(_currentDirection != _OldDirection)
   {
        // calculate current direction by comparing prior state to current state
        // then covert to an index that can be used in above array
        Direction = RotaryLookupSheet[_currentDirection | (_OldDirection << 2)];
   }

}

