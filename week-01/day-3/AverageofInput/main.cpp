#include <iostream>

// Write a program that asks for 5 integers in a row,
// then it should print the sum and the average of these numbers like:
//
// Sum: 22, Average: 4.4
int main()
{
    int numbah;
    float sum =0;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Give a number:";
        std::cin >> numbah;
        sum += numbah;
    }
    float avg = sum / 5;
    std::cout << "Sum: " << sum << ", " << "Average: " << avg << std::endl;

    return 0;
}