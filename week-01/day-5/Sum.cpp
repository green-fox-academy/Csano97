#include <iostream>

int sum(int a);

int main(){
    int number = 10;
    //std::cout << "Give a number:";
    //std::cin >> number;
    std::cout << sum(number) << std::endl;

    return 0;
}
int sum(int a){
    int i;
    for (i = 0; a > 0; i += a % 10, a /= 10);

    return i;
}