#include <iostream>

int *MinPtr(const int numbers[], int lengthof);

int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int lengthOfnumbers = sizeof(numbers) / sizeof(numbers[0]);
    std::cout << *MinPtr(numbers, lengthOfnumbers) << std::endl;

    return 0;
}

int *MinPtr(const int numbers[], int lengthof)
{

    int small = numbers[0];
    for (int i = 0; i < lengthof; ++i) {
        if (numbers[i] < small) {
            small = numbers[i];
        }
    }
    int *smallptr = &small;


    return smallptr;
}