#include <iostream>
#include <fstream>
#include <string>

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful
bool copysuccess = false;

void copy(const std::string &path, const std::string&path2);

int main()
{
    copy("tomato.txt", "copied-files.txt");
    std::cout << std::boolalpha << copysuccess << std::endl;
    return 0;
}

void copy(const std::string &path, const std::string& path2)
{
    std::ofstream newFile(path2);
    std::ifstream originalFile(path);
    std::string holder;
    if(originalFile.is_open()){
        while(getline(originalFile, holder)){
            newFile << holder << "\n";
        }
        copysuccess = true;
    }
}