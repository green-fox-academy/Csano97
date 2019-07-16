#include "BassGuitar.h"

BassGuitar::BassGuitar() : BassGuitar(4)
{}

BassGuitar::BassGuitar( int numberOfStrings) : StringedInstrument("Bass guitar", numberOfStrings)
{}
std::string BassGuitar::sound()
{
    std::string noise = "Duum-duum-duum";
    return noise;
}