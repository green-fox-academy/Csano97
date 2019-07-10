#include "AnimalClass.h"

AnimalClass::AnimalClass(int hunger, int thirst) : _hunger(hunger), _thirst(thirst)
{}

void AnimalClass::drink()
{ --_thirst; }

void AnimalClass::eat()
{ --_hunger; }

void AnimalClass::play()
{
    ++_hunger;
    ++_thirst;
}

int AnimalClass::getHunger() const
{
    return _hunger;
}

int AnimalClass::getThirst() const
{
    return _thirst;
}

