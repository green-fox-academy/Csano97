#ifndef DAY_2_PRINTER2D_H
#define DAY_2_PRINTER2D_H

#include "Printer.h"

class Printer2D : public Printer
{
public:
    Printer2D(int sizeX, int sizeY);
    std::string getSize() override;
};


#endif //DAY_2_PRINTER2D_H
