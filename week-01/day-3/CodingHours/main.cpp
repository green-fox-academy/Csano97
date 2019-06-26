#include <iostream>

int main() {
    int hours = (6 * 5) * 17;
    int semester = 17 * 52;

    std::cout << "Average coding hours: " << hours << std::endl;
    std::cout << "Percentage of a semester spent with coding: " << (float)hours / semester * 100 << std::endl;
    return 0;
}