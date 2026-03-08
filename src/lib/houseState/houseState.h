// house State library, handles base functions that all concrete states should have

#ifndef HOUSE_STATE_H
#define HOUSE_STATE_H
#include <Arduino.h>
#include "config.h"
#include "House.h"

// to avoid circular dependency/include
class House;


class houseState
{
    public:
        /*
        *  \brief handles what the current state should do upon entrance
        * \param House* 
        * \return void
        */
        virtual void enter(House* house) = 0;
         /*
        *  \brief handles the current state's transition to the next state
        * \param House* 
        * \return void
        */
        virtual void toggle(House* house, int whichbuttonpressed) = 0;
         /*
        *  \brief handles what the current state should do as its leaving
        * \param House* 
        * \return void
        */
        virtual void exit(House* house) = 0;

        virtual ~houseState() {}

};

#endif