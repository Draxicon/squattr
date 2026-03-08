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
  return stable == LOW;
}

bool Button::isReleased()
{
  return stable == HIGH;
}

unsigned long Button::holdTime()
{
  if(stable == LOW)
  {
    return millis() - startTime;
  }
  return 0;
}

