#include "concreteStates.h"
#include "House.h"

House::House()
{
    currentState = &livingRoom::getInstance();
}

void House::setState(houseState& nextState)
{
    currentState->exit(this); // call current states exit function
    currentState = &nextState; // actually switch states
    currentState->enter(this); // new states entrance function
}

void House::Toggle()
{
    currentState->toggle(this); 
}