#include "SharpiePen.h"
#include <utility>
#include <iostream>

SharpiePen::SharpiePen(std::string color, float width) : _color(std::move(color)), _width(width),
                                                                                 _inkAmount(100)
{}

void SharpiePen::use()
{
    _inkAmount -= _width;
}
void SharpiePen::remains()
{
    std::cout << "You marked text with the " << _color << " sharpie, you are left with: " << _inkAmount << "% of ink" << std::endl;
}