/*
* Input manager library, used to help define functionality of our inputs (rotary encoder, buttons, ect)
* Drax: 12.24.2025 created class for rotary encoder
*
*/

#ifndef INPUT_MANAGER_H
#define INPUT_MANAGER_H

#include <Arduino.h>
<<<<<<< HEAD
#include <config.h>
=======
#include "config.h"
>>>>>>> aff260a9ab5a0f78ab96197cb4d15e7619fcf6a6

/*
* \brief used to help get current direction of the 
* rotary encoder if it is in motion
*/
class RotaryEncoder
{
    public:
<<<<<<< HEAD
        enum class Direction
        {
            NOROTATION = 0,
            UP = 1,
            DOWN = -1
        };
        
        int RotaryEncoderSetup();
        
    private:
=======
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

>>>>>>> aff260a9ab5a0f78ab96197cb4d15e7619fcf6a6
};
/*
* \brief 
*
*
*/
class Button
{
    public:

    private:

};


#endif