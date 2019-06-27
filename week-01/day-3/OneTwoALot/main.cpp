#include <iostream>

int main() {
    int number;
    std::cout << "Please type a number: ";
    std::cin >> number;
    if(number <= 0){
        std::cout << "Not enough" << std::endl;
    }else if(number == 1){
        std::cout <<"One" << std::endl;
    }else if(number == 2){
        std::cout << "Two" << std::endl;
    }else{
        std::cout << "A lot" << std::endl;
    }
    return 0;
}