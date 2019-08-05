#ifndef DAY_2_COPIER_H
#define DAY_2_COPIER_H


#include "Printer.h"
#include "Scanner.h"

class Copier : public Printer, Scanner
{
public:
    Copier(int sizeX, int sizeY, int speed);
    void copy();
    std::string getSize() override;

};


#endif //DAY_2_COPIER_H
