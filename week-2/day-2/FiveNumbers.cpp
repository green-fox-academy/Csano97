#include <iostream>
#include <string>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again
    int fiveArr[5];
    int fiver;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Give 5 numbers:";
        std::cin >> fiver;
        fiveArr[i] = fiver;
    }
    int arraycont = sizeof(fiveArr) / sizeof(fiveArr[0]);
    for (int j = 0; j < arraycont; ++j) {
        int *five = &fiveArr[j];
        std::cout << *five << std::endl;
    }


    return 0;
}