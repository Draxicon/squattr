// concrete states library, handles all possible states of the device

#ifndef CONCRETE_STATES_H
#define CONCRETE_STATES_H
#include <Arduino.h>
#include "config.h"
#include "House.h"
#include "houseState.h"

// \brief initial state that the house will start in and shall return to, can transition to bathroom, and setTimer
class livingRoom : public houseState
{
    public:
        
};

// \brief state where user can change current active pet then return to living room
class Bathroom : public houseState
{
    public:
        
};

// \brief state where user can change settings relating to software and hardware then return to living room
class Settings : public houseState
{
    public:
        
};

// \brief state where user can choose how long they want to study for then go to study
class setTimer : public houseState
{
    public:
            
};

// \brief state where user studies for specified time
class studyTime : public houseState
{
    public:
        
};

// \brief state where user takes a break then returns to study time, after 4 itterations user takes long break then returns to living room
class BreakTime : public houseState
{
    public:
        
};


#endif