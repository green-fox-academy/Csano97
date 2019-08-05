#include <iostream>
#include "Printer.h"

Printer::Printer(int sizeX, int sizeY) : _sizeX(sizeX), _sizeY(sizeY)
{}
void Printer::print()
{
    std::cout << "I am printing something that's " << getSize() << " cm big." << std::endl;
}
