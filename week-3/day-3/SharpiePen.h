#ifndef DAY_3_SHARPIEPEN_H
#define DAY_3_SHARPIEPEN_H
#include <string>

class SharpiePen
{
public:
    SharpiePen(std::string color, float width);
    void use();
    void remains();
private:
    std::string _color;
    float _width;
    float _inkAmount;
};


#endif //DAY_3_SHARPIEPEN_H
