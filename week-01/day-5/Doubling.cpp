#include <iostream>

int doubling(int num);

int main(){

    int baseNum = 123;
    std::cout << doubling(baseNum) << std::endl;
}

int doubling(int num){
    return num * 2;
}