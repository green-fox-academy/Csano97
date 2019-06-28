#include <iostream>

int main() {
    int number;
    std::cout << "Insert a number:";
    std::cin >> number;
    int i, j;
    for ( i = 1; i <= number; ++i) {
        for (j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}