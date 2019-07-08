#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open a file called "my-file.txt"
    // Write your name in it as a single line
    std::ofstream myfile ("my-file2.txt");
    if(myfile.is_open()){
        myfile << "Kornel";
    }

    return 0;
}