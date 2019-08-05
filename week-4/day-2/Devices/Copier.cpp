#include "Copier.h"

Copier::Copier(int sizeX, int sizeY, int speed) : Printer(sizeX, sizeY), Scanner(speed)
{}
void Copier::copy()
{
     scan();
     std::cout << "And ";
     print();
}
std::string Copier::getSize() {
    return std::to_string(_sizeX) + "X" + std::to_string(_sizeY);
}