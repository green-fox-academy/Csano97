#include <iostream>
// Write a program that asks for two numbers and prints the bigger one
int main()
{
    int a;
    int b;
    std::cout << "Give the first number:";
    std::cin >> a;
    std::cout << "Give the second number:";
    std::cin >> b;
    if(a > b){
        std::cout << a << std::endl;
    }else{
        std::cout << b << std::endl;
    }

    return 0;
}