#include <iostream>
#include "StringedInstrument.h"

StringedInstrument::StringedInstrument(const std::string &name, int numberOfStrings) : Instrument(name),
                                                                                       _numberOfStrings(numberOfStrings)
{}

void StringedInstrument::play()
{
    std::cout << _name << ", a " << _numberOfStrings << "-stringed instrument that goes " <<  sound() << std::endl;
}


