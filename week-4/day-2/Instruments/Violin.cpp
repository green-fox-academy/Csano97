#include "Violin.h"

Violin::Violin() : StringedInstrument("Violin", 4)
{}
Violin::Violin(const std::string &name, int numberOfStrings) : StringedInstrument(name, numberOfStrings)
{}
std::string Violin::sound()
{
    std::string noise = "Screech";
    return noise;
}