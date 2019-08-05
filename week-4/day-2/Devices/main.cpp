#include <iostream>
#include "Printer.h"
#include "Printer2D.h"
#include "Printer3D.h"
#include "Scanner.h"
#include "Copier.h"

int main()
{
    Copier copier(200, 300, 15);
    copier.copy();
    Printer2D tuuDeePreenter(100, 100);
    tuuDeePreenter.print();
    Scanner skenner(50);
    skenner.scan();
    Printer3D freeDeePreenter(100, 200, 300);
    freeDeePreenter.print();
    return 0;
}