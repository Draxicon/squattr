// rotaryEncoder library, used to help define functionality of our rotaryEncoder


#ifndef INPUT_MANAGER_H
#define INPUT_MANAGER_H

#include <Arduino.h>
#include "config.h"

/*
* \brief used to help get current direction of the 
* rotary encoder if it is in motion
*/
class RotaryEncoder
{
    public:
        /*
        * \brief Constructor for rotary encoder library
        * \param void
        * \return void 
        * 
        */ 
        RotaryEncoder();
        
        /*
        * \brief connect this with a ISR to run when it detects a change from the pins
        * call digital read and then calculate if
        * \param void
        * \return void
        */
        void ISR_CheckAndUpdatePositon();
        
        volatile int8_t Direction;

    private:
    // holds prior direction to help with  direction calculations
    volatile int8_t _OldDirection;

    // holds updated postion of encoder to help with direction calculations
    volatile int8_t _currentDirection;

    // holds digital read values for encoder
    volatile int8_t _pinA, _pinB;

};
#endif