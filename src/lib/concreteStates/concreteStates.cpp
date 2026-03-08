#include "concreteStates.h"
#include "House.h"
#include "houseState.h"
#include "config.h"


// ---- Living Room Class Functions ----
void livingRoom::enter(House* house)
{
    Serial.println("entered living room");
}

void livingRoom::toggle(House* house, int whichbuttonpressed)
{
    /*
   switch (whichbuttonpressed)
   {
   case LEFTBUTTON:
        house->setState(Bathroom::getInstance());
    break;

   case MIDDLEBUTTON:
        house->setState(Settings::getInstance());
    break;
    case RIGHTBUTTON:
        house->setState(setTimer::getInstance());
    break;

   default:
    break;
   }
    */
   if(whichbuttonpressed == LEFTBUTTON)
   {
        house->setState(Bathroom::getInstance());
   }
   else if(whichbuttonpressed == MIDDLEBUTTON)
   {
        house->setState(Settings::getInstance());
   }
   else if(whichbuttonpressed == RIGHTBUTTON)
   {
        house->setState(setTimer::getInstance());
   }
}

void livingRoom::exit(House* house)
{
    Serial.println("leaving living room");
}

houseState& livingRoom::getInstance()
{
    static livingRoom singleInstanceOfLivingRoom;
    return singleInstanceOfLivingRoom;
}

// ---- Bathroom Class Functions ----
void Bathroom::enter(House* house)
{
   Serial.println("entered Bathroom"); 
}

void Bathroom::toggle(House* house, int whichbuttonpressed)
{
   switch (whichbuttonpressed)
   {
   case LEFTBUTTON:
        // invalid input
    break;

   case MIDDLEBUTTON:
        house->setState(livingRoom::getInstance());
    break;
    case RIGHTBUTTON:
        // invalid input
    break;

   default:
    break;
   }
}

void Bathroom::exit(House* house)
{
    Serial.println("leaving bathroom");
}

houseState& Bathroom::getInstance()
{
    static Bathroom singleInstanceOfBathroom;
    return singleInstanceOfBathroom;
}
// ---- Settings Class Functions ----
void Settings::enter(House* house)
{
   Serial.println("entered Settings"); 
}

void Settings::toggle(House* house, int whichbuttonpressed)
{
       switch (whichbuttonpressed)
   {
   case LEFTBUTTON:
        // invalid input
    break;

   case MIDDLEBUTTON:
        house->setState(livingRoom::getInstance());
    break;
    case RIGHTBUTTON:
        // invalid input
    break;

   default:
    break;
   }
}

void Settings::exit(House* house)
{
    Serial.println("leaving Settings");
}

houseState& Settings::getInstance()
{
    static Settings singleInstanceOfSettings;
    return singleInstanceOfSettings;
}
// ---- setTimer Class Functions ----
void setTimer::enter(House* house)
{
   Serial.println("entered setTimer"); 
}

void setTimer::toggle(House* house, int whichbuttonpressed)
{
       switch (whichbuttonpressed)
   {
   case LEFTBUTTON:
        house->setState(livingRoom::getInstance());
    break;

   case MIDDLEBUTTON:
        // Invalid input 
    break;
    case RIGHTBUTTON:
        house->setState(livingRoom::getInstance());
    break;

   default:
    break;
   }
}

void setTimer::exit(House* house)
{
    Serial.println("leaving setTimer");
}

houseState& setTimer::getInstance()
{
    static setTimer singleInstanceOfsetTimer;
    return singleInstanceOfsetTimer;
}

// ---- studyTime Class Functions ----

// ---- breakTime Class Functions ----