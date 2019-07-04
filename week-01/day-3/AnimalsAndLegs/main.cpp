#include <iostream>
// Write a program that asks for two integers
// The first represents the number of chickens the farmer has
// The second represents the number of pigs owned by the farmer
// It should print how many legs all the animals have

int main()
{
    int chicken;
    int pig;
    std::cout << "Give an integer:";
    std::cin >> chicken;
    std::cout << "Give another integer:";
    std::cin >> pig;
    int chickenLeg = chicken*2;
    int pigLeg = pig*4;
    std::cout << "The farmer has " << chicken << " chickens and " << pig << " pigs. They together have " << chickenLeg+pigLeg << " legs, plus two, the farmer's legs" << std::endl;
    return 0;
}