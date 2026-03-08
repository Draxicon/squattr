#include "concreteStates.h"
#include "houseState.h"
#include "House.h"

//LIVING ROOM
houseState& livingRoom::getInstance() 
{
    static livingRoom instance;
    return instance;
}
void livingRoom::enter(House* house) 
{
    Serial.println("Entering Living Room");
}
void livingRoom::toggle(House* house,ButtonSelect Select) 
{
    switch(Select)
    {
        case LBUTTON:
            house->setState(Bathroom::getInstance());
            break;
        case MBUTTON:
            house->setState(Settings::getInstance());
            break;
        case RBUTTON:
            house->setState(setTimer::getInstance());
            break;
    }
}
void livingRoom::exit(House* house) {
    Serial.println("Exiting Living Room");
}

//BATHROOM
houseState& Bathroom::getInstance() {
    static Bathroom instance;
    return instance;
}
void Bathroom::enter(House* house) 
{
    Serial.println("Entering Bathroom");
}
void Bathroom::toggle(House* house,ButtonSelect Select) 
{
    switch(Select)
    {
        case LBUTTON:
            house->setState(livingRoom::getInstance());
            break;
        case MBUTTON:
            break;
        case RBUTTON:
            break;
    }
}
void Bathroom::exit(House* house) 
{
    Serial.println("Exiting Bathroom");
}
//SETTINGS
houseState& Settings::getInstance() 
{
    static Settings instance;
    return instance;
}
void Settings::enter(House* house) 
{
    Serial.println("Entering Settings"); 
}
void Settings::toggle(House* house,ButtonSelect Select) 
{ 
    switch(Select)
    {
        case LBUTTON:
            house->setState(livingRoom::getInstance());
            break;
        case MBUTTON:
            break;
        case RBUTTON:
            break;
    }
}
void Settings::exit(House* house) 
{ 
    Serial.println("Exiting Settings"); 
}
//SETTIMER
houseState& setTimer::getInstance() 
{
    static setTimer instance;
    return instance;
}
void setTimer::enter(House* house) 
{
    Serial.println("Entering setTimer"); 
}
void setTimer::toggle(House* house,ButtonSelect Select) 
{ 
    switch(Select)
    {
        case LBUTTON:
            house->setState(livingRoom::getInstance());
        case MBUTTON:
            break;
        case RBUTTON:
            break;
    }
}
void setTimer::exit(House* house) 
{ 
    Serial.println("Exiting setTimer"); 
}
//STUDYTIME
houseState& studyTime::getInstance() 
{
    static studyTime instance;
    return instance;
}
void studyTime::enter(House* house) 
{
    Serial.println("Entering setTimer"); 
}
void studyTime::toggle(House* house,ButtonSelect Select) 
{ 
    switch(Select)
    {
        case LBUTTON:
            break;
        case MBUTTON:
            break;
        case RBUTTON:
            break;
    }
}
void studyTime::exit(House* house) 
{ 
    Serial.println("Exiting setTimer"); 
}
//BREAKTIME
houseState& breakTime::getInstance() 
{
    static breakTime instance;
    return instance;
}
void breakTime::enter(House* house) 
{
    Serial.println("Entering setTimer"); 
}
void breakTime::toggle(House* house,ButtonSelect Select) 
{ 
    switch(Select)
    {
        case LBUTTON:
            break;
        case MBUTTON:
            break;
        case RBUTTON:
            break;
    }
}
void breakTime::exit(House* house) 
{ 
    Serial.println("Exiting setTimer"); 
}
