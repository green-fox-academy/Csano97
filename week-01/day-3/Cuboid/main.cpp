#include <iostream>

int main()
{
    int sideA;
    int sideB;
    int sideC;
    std::cout << "Give side A: ";
    std::cin >> sideA;
    std::cout << "Give side B: ";
    std::cin >> sideB;
    std::cout << "Give side C: ";
    std::cin >> sideC;
    int surface = (sideA * sideB) *2;
    int volume = (sideA*sideB*sideC)*3;
    std::cout << "Surface Area: " << surface << std::endl;
    std::cout << "Volume: " << volume << std::endl;
    return 0;
}