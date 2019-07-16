#include <iostream>
#include "ElectricGuitar.h"

ElectricGuitar::ElectricGuitar() : ElectricGuitar(6)
{}

ElectricGuitar::ElectricGuitar(int numberOfStrings) : StringedInstrument("Electric guitar", numberOfStrings)
{}
std::string ElectricGuitar::sound()
{
    std::string noise = "Twang";
    return noise;
}
