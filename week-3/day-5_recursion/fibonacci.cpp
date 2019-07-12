#include <iostream>

//Define a recursive fibonacci(n) method that returns the nth fibonacci number, with n=0 representing the start of the sequence.
int fibonacci(int num)
{
    int sum = 0;
    if (num <= 0) {
        return 0;
    } else if (num <= 1) {
        return 1;
    }else{
        return sum + fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main()
{
    std::cout << fibonacci(7) << std::endl;
    return 0;
}