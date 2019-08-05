#ifndef DAY_2_PRINTER3D_H
#define DAY_2_PRINTER3D_H

#include "Printer.h"

class Printer3D : public Printer
{
public:
    Printer3D(int sizeX, int sizeY, int sizeZ);
    std::string getSize() override;
private:
    int _sizeZ;
};


#endif //DAY_2_PRINTER3D_H
