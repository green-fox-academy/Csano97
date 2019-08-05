#ifndef DAY_2_SCANNER_H
#define DAY_2_SCANNER_H

#include <iostream>

class Scanner
{
public:
    Scanner(int speed);

    void scan();
protected:
    int _speed;
};


#endif //DAY_2_SCANNER_H
