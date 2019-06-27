#include <iostream>

int main() {
    int number = 13;
    int guess;
    std::cout << "Guess the number: ";
    std::cin >> guess;
    while(guess < number){
        std::cout << "The stored number is higher" << std::endl;
        std::cout << "Guess the number:";
        std::cin >> guess;
    }while(guess > number){
        std::cout << "The stored number is lower" << std::endl;
        std::cout << "Guess the number:";
        std::cin >> guess;
    }if(guess == number){
        std::cout << "You found the number!" <<std::endl;
    }
    return 0;
}