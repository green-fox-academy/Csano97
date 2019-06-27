#include <iostream>

int main() {
    int number;
    std::cout << "Insert a number: ";
    std::cin >> number;
    for (int i = 1; i < 11 ; ++i) {
        std::cout << i << "*" << number << "=" << i * number << std::endl;
    }
    return 0;
}