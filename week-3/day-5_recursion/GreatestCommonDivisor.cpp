#include <iostream>
//Find the greatest common divisor of two numbers using recursion.
int greatComDiv(int a, int b);

int main(){
    std::cout << greatComDiv(6, 9) << std::endl;
    return 0;
}
int greatComDiv(int a, int b){
    int divisor = 0;
    if(a <= 1 || b <= 1){
        return 1;
    }else if( a == b){
        return a;
    }else if( a > b){
        divisor = greatComDiv(a-b, b);
        return divisor;
    }else{
        divisor = greatComDiv(a, b-a);
        return divisor;
    }
}