#include <Arduino.h>
#include "Button.h"
#include "config.h"

Button::Button(int p) : pin(p) {}

void Button::begin()
{
  pinMode(pin, INPUT_PULLUP);
}

bool Button::isPressed()
{
  return digitalRead(pin) == LOW;
}

