/*

state manager library, houses the house 
D

*/
#ifndef STATE_MANAGER_H
#define STATE_MANAGER_H

#include <Arduino.h>
#include "config.h"
#include "houseState.h"

class House
{
    public:
        House();
        void Toggle();
        inline houseState* getCurrentState() const {return currentState;}
        void setState();
    private:
        houseState* currentState;
};

#endif