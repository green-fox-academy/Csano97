#include "Apple.h"

std::string Apples::getApple()
{
    return "apple";
}

int Apples::sum(std::vector<int> apples)
{

    int sum = 0;

    for (int i = 0; i < apples.size(); ++i) {
        sum += apples[i];
    }
    return sum;
}