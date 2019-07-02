#include <iostream>

int main ()
{
    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;
    float *tempPtr = &temperature;
    std::cout << *tempPtr + 5 << std::endl;

    return 0;
}
