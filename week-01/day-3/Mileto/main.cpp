#include <iostream>

int main() {
    double mile;
    double converter = 1.609344;

    std::cout << "Please insert a distance in miles: ";
    std::cin >> mile;
    std::cout << "Your distance in miles: " << mile << std::endl;
    std::cout << "Your distance in kilometers: " << mile * converter << std::endl;
    return 0;
}