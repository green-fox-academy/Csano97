#include <iostream>

int main() {
    int a = 123;
    int b = 526;
    int temp;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << "" << std::endl;
    temp = a;
    a = b;
    b = temp;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return 0;
}