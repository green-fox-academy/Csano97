#include <iostream>

int main() {
    int number1;
    int number2;
    std::cout << "Give the first number: ";
    std::cin >> number1;
    std::cout << "Give the second number: ";
    std::cin >> number2;
    if(number1 >= number2){
        std::cout <<"The second number should be bigger than the first." << std::endl;
    }
    for (int i = number1; i < number2; ++i) {
        std::cout << i << std::endl;
    }
    return 0;
}