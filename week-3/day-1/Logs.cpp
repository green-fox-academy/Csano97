#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.
std::vector<std::string> ipstorage(const std::vector<std::string> &string);

int main()
{
    std::string read;
    std::string ipnumber;
    std::vector<std::string> ipblock;
    std::ifstream log("log.txt");
    if (log.is_open()) {
        while (getline(log, read)) {
            std::istringstream logsstream(read);
            for (int i = 0; i < 9; ++i) {
                std::getline(logsstream, ipnumber, ' ');

            }
            ipblock.push_back(ipnumber);
        }
    }
    int a = 0;
    std::vector<std::string> ipresult;
    ipresult = ipstorage(ipblock);
    for (const auto & j : ipresult) {
        ++a;
        std::cout << a << std::endl;
    }
    return 0;
}

std::vector<std::string> ipstorage(const std::vector<std::string> &string)
{
    std::vector<std::string> unique;
    std::string temporal;
    for (unsigned int i = 0; i < string.size(); ++i) {
        for (unsigned int j = i + 1; j < string.size(); ++j) {
            if (string[i] != string[j]) {
                unique.push_back(string[i]);

            }

        }
    }
    for (int k = 0; k < unique.size(); ++k) {
        if(unique.size() > string.size()){
            std::cout << "fucken infi loop" << std::endl;
        }
    }

    return unique;

}