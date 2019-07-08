#include <iostream>
// Create a function that takes a number
// divides ten with it,
// and prints the result.
// It should print "fail" if the parameter is 0
int main()
{
    int number;
    std::cout << "Give a number: " << std::endl;
    std::cin >> number;
    try {
        if(number / 10 == 0){
            throw 0;
        }else{
            std::cout << number / 10 << std::endl;
        }
    }catch(...){
        std::cout << "fail" << std::endl;
    }

    return 0;
}