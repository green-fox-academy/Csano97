#include <iostream>

int main() {
    int number;
    std::cout << "Write a number: ";
    std::cin >> number;
    if(number % 2 == 0){
        std::cout << "Your number is even" << std::endl;
    }else{
        std::cout << "Your number is odd" << std::endl;
    }
    return 0;
}