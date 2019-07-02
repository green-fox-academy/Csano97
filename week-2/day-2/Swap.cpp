#include <iostream>

void swapper(int *a, int *b);

int main()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void function and pointers

    int a = 10;
    int b = 316;
    std::cout << "Before swap:\n" << "a: " << a << "\n" << "b: " << b << std::endl;
    int *a2 = &a;
    int *b2 = &b;
    swapper(a2, b2);

    return 0;
}

void swapper(int *a, int *b)
{
    int c;
    int *c2 = &c;
    *c2 = *a;
    *a = *b;
    *b = *c2;
    std::cout << "After swap:\n" << "a: " << *a << "\n" << "b:" << *b << std::endl;
}