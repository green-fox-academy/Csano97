#include <iostream>

int number( int a[], int b, int c);

int main()
{
    // Create a function which takes an array (and it's length) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return -1
    int numers[5] = {5, 6, 7, 4, 5};
    int lengthofnumers = sizeof(numers) / sizeof(numers[0]);
    int index;
    std::cout << "Give a number:";
    std::cin >> index;
    std::cout << number(numers, lengthofnumers, index) << std::endl;

    return 0;
}

int number( int a[], int b, int c)
{
    for (int i = 0; i < b; ++i) {
        if (c == a[i]) {
            return i;
        }
    }return -1;

}