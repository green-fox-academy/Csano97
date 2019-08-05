#ifndef DAY_2_PRINTER_H
#define DAY_2_PRINTER_H


#include <string>

class Printer
{
public:
    Printer(int sizeX, int sizeY);

    virtual std::string getSize()=0;
    void print();
protected:
    int _sizeX;
    int _sizeY;
};


#endif //DAY_2_PRINTER_H
