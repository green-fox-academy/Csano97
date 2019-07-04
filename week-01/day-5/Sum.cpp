#include <iostream>

int sum(int a);

int main(){
    int number;
    std::cout << "Give a number:";
    std::cin >> number;
    std::cout << sum(number) << std::endl;

    return 0;
}
int sum(int a)
{
    int summar = 0;
    for (int i = 1; i < a+1; ++i){
        summar += i;
    }
    return summar;
}
