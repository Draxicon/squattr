/*

*/

#ifndef HOUSE_STATE_H
#define HOUSE_STATE_H
#include <Arduino.h>
#include "config.h"
#include "stateManager.h"

class House;

class houseState
{
    public:
     virtual void enter(House* house) = 0;
     virtual void toggle(House* house) = 0;
     virtual void exit(House* house) = 0;
};

#endif