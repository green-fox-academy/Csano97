#include "Scanner.h"

Scanner::Scanner(int speed) : _speed(speed)
{}
void Scanner::scan()
{
    std::cout << "I am scanning a document at " << _speed << " ppm speed ";
}
