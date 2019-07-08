#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main () {
    // Write a program that opens a file called "my-file.txt", then prints
    // each line from the file.
    // You will have to create the file, you may use C-programming, although it is not mandatory
    std::vector<std::string> names = {"John", "Edward", "Hector", "Annabelle", "Amy"};
    std::ofstream myFile("my-file.txt");
    if(myFile.is_open()){
        for (const auto & name : names) {
            myFile << name << "\n";
        }
    }
    myFile.close();
    std::string line;
    std::ifstream file("my-file.txt");
    if(file.is_open()){
        while (getline(file, line)){
            std::cout << line << std::endl;
        }
    }
    return 0;
}