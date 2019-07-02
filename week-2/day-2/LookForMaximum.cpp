#include <iostream>

int *MaxPtr(const int num[], int numSize);

int main()
{
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it
    int arrSize;
    std::cout << "Give a number:";
    std::cin >> arrSize;
    int num[arrSize];
    int filler;
    for (int i = 0; i < arrSize; ++i) {
        std::cout << "Give an array number:";
        std::cin >> filler;
        num[i] = filler;
    }
    int numSize = sizeof(num) / sizeof(num[0]);
    std::cout << "Biggest number: " << *MaxPtr(num, numSize) << "\n" << "Memory address: " << MaxPtr(num, numSize) << std::endl;

    return 0;
}

int *MaxPtr(const int num[], int numSize)
{
    int max = num[0];
    for (int i = 0; i < numSize; ++i) {
        if(num[i] > max){
            max = num[i];
        }
    }
    int *maxPtr = &max;
    return maxPtr;
}
