#include <iostream>
//Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

int factorial(int num) {
    if (num <= 1) { //base case
        return 1;
    } else {
        return num + factorial(num - 1);
    }
}
int main()
{
    int n = 100;
    std::cout << factorial(n) << std::endl;
    return 0;
}