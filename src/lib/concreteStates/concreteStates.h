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
        /*
        *  \brief handles what the current state should do upon entrance
        * \param House* 
        * \return void
        */
        void enter(House* house);

        /*
        *  \brief handles the current state's transition to the next state
        * \param House* 
        * \return void
        */
        void toggle(House* house);

        /*
        *  \brief handles what the current state should do as its leaving
        * \param House* 
        * \return void
        */
         void exit(House* house);

        static houseState& getInstance();
    private:
        livingRoom() {}
        livingRoom(const livingRoom& other);
        livingRoom& operator = (const livingRoom& other);

};

// \brief state where user can change current active pet then return to living room
class Bathroom : public houseState
{
    public:
        /*
        *  \brief handles what the current state should do upon entrance
        * \param House* 
        * \return void
        */
        void enter(House* house);

        /*
        *  \brief handles the current state's transition to the next state
        * \param House* 
        * \return void
        */
        void toggle(House* house);

        /*
        *  \brief handles what the current state should do as its leaving
        * \param House* 
        * \return void
        */
         void exit(House* house);

        static houseState& getInstance();
    private:
        Bathroom() {}
        Bathroom(const Bathroom& other);
        Bathroom& operator = (const Bathroom& other);   
};

// \brief state where user can change settings relating to software and hardware then return to living room
class Settings : public houseState
{
    public:
        /*
        *  \brief handles what the current state should do upon entrance
        * \param House* 
        * \return void
        */
        void enter(House* house);

        /*
        *  \brief handles the current state's transition to the next state
        * \param House* 
        * \return void
        */
        void toggle(House* house);

        /*
        *  \brief handles what the current state should do as its leaving
        * \param House* 
        * \return void
        */
         void exit(House* house);

        static houseState& getInstance();
    private:
        Settings() {}
        Settings(const Settings& other);
        Settings& operator = (const Settings& other);
        
};

// \brief state where user can choose how long they want to study for then go to study
class setTimer : public houseState
{
    public:

        /*
        *  \brief handles what the current state should do upon entrance
        * \param House* 
        * \return void
        */
        void enter(House* house);

        /*
        *  \brief handles the current state's transition to the next state
        * \param House* 
        * \return void
        */
        void toggle(House* house);

        /*
        *  \brief handles what the current state should do as its leaving
        * \param House* 
        * \return void
        */
         void exit(House* house);

        static houseState& getInstance();
    private:
        setTimer() {}
        setTimer(const setTimer& other);
        setTimer& operator = (const setTimer& other);       
};

// \brief state where user studies for specified time
class studyTime : public houseState
{
    public:
        /*
        *  \brief handles what the current state should do upon entrance
        * \param House* 
        * \return void
        */
        void enter(House* house);

        /*
        *  \brief handles the current state's transition to the next state
        * \param House* 
        * \return void
        */
        void toggle(House* house);

        /*
        *  \brief handles what the current state should do as its leaving
        * \param House* 
        * \return void
        */
         void exit(House* house);

        static houseState& getInstance();
    private:
        studyTime() {}
        studyTime(const studyTime& other);
        studyTime& operator = (const studyTime& other);     
};

// \brief state where user takes a break then returns to study time, after 4 itterations user takes long break then returns to living room
class breakTime : public houseState
{
    public:
        /*
        *  \brief handles what the current state should do upon entrance
        * \param House* 
        * \return void
        */
        void enter(House* house);

        /*
        *  \brief handles the current state's transition to the next state
        * \param House* 
        * \return void
        */
        void toggle(House* house);

        /*
        *  \brief handles what the current state should do as its leaving
        * \param House* 
        * \return void
        */
         void exit(House* house);

        static houseState& getInstance();
    private:
        breakTime() {}
        breakTime(const breakTime& other);
        breakTime& operator = (const breakTime& other);     
};


#endif