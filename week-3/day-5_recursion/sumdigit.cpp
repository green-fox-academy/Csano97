#include <iostream>

//Given a non-negative integer n, return the sum of its digits recursively (without loops).
int sumOfDigits(int n);

int main()
{
    int num = 98765;
    int result = sumOfDigits(num);
    std::cout << result << std::endl;
    return 0;
}

int sumOfDigits(int n)
{
    if (n == 0) {
        return 0;
    }
    return (n % 10 + sumOfDigits(n / 10));
}