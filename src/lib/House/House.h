// state manager library, the dummy file that helps define state transistons

#ifndef HOUSE_H
#define HOUSE_H

#include <Arduino.h>
#include "config.h"
#include "houseState.h"

// to avoid circular dependency/include
class houseState;

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

         /*
        * \brief calls the currentState's toggle function referencing itself to transition states
        * \param void
        *  \returns void
        */
        void Toggle(int whichbutton);

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
        // internal definition of where we currently are
        houseState* currentState;
};

#endif