/*

state manager library, houses the 


*/
#ifndef HOUSE_H
#define HOUSE_H

#include <Arduino.h>
#include "config.h"
#include "houseState.h"


/*
* \brief acts as the skeleton that can transistion to other states basically the main "house"
*/
class House
{
    public:
        /*
        * \brief The constructor that sets the intial state
        * \param void
        *  \returns void
        */
        House();

        void Toggle();

        /*
        * \brief Just lets us know what state were currently at
        * \param void
        *  \returns houseState*
        */
        inline houseState* getCurrentState() const {return currentState;}

        /*
        * \brief called by concrete states to transition to the next state internally sets current state to point what ever state is used as a parameter
        * \param houseState&
        */
        void setState(houseState& nextState);
    private:
        houseState* currentState;
};

#endif