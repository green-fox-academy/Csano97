#include <iostream>
#include <fstream>
#include <string>

int main () {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file
    std::string count;
    int a = 0;
    std::ifstream file("my-file.txt");
    if(file.is_open()){
        while(getline(file, count)){
            ++a;
        }
        std::cout << a << std::endl;
    }else{
        std::cout << 0 << std::endl;
    }

    return 0;
}