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
    lastStable = stable;
    return true;
  }
  lastStable = stable;
  return false;
}

bool Button::isReleased() 
{
  if (stable == HIGH && lastStable == LOW) 
  {
    lastStable = stable;
    return true;
  }
  lastStable = stable;
  return false;
}

unsigned long Button::holdTime()
{
  if(stable == LOW)
  {
    return millis() - startTime;
  }
  return 0;
}

