#include <Arduino.h>
#include "Button.h"
#include "config.h"

//These are for setting up the button
Button::Button(int p) : pin(p) {}

void Button::begin()
{
  pinMode(pin, INPUT_PULLUP);
}

void Button::debounce() 
{
  bool current = digitalRead(pin);
  if(current != previous) 
  {
    debounceTime = millis();
  }
  if((millis() - debounceTime) > debounceDelay) 
  {
    stable = current;
  }
  previous = current;
}

//These are for using the buttons
bool Button::isPressed() 
{
  if (stable == LOW && lastStable == HIGH) 
  {
    startTime = millis();
    lastStable = stable;
    return true;
  }
  lastStable = stable;
  return false;
}

bool Button::isReleased() 
{
  static bool low = false;
  if(stable == LOW)
  {
    low = true;
    return false;
  }
  if(stable == HIGH && low)
  {
    low = false;
    hold = millis() - startTime;
    return true;  
  }
  return false;
}

//Quick not on this function please call the .ispressed & .isreleased function even if your not using it before calling this function
unsigned long Button::holdTime()
{
  return hold / 1000;
}

