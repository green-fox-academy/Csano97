#include <iostream>
#include <map>

int main()
{
    std::map<int, char> dumbmap;
    std::cout << std::boolalpha << dumbmap.empty() << std::endl;
    dumbmap.insert(std::pair<int, char>(97, 'a'));
    dumbmap.insert(std::pair<int, char>(98, 'b'));
    dumbmap.insert(std::pair<int, char>(99, 'c'));
    dumbmap.insert(std::pair<int, char>(65, 'A'));
    dumbmap.insert(std::pair<int, char>(66, 'B'));
    dumbmap.insert(std::pair<int, char>(67, 'C'));
    std::map<int, char>::iterator it;
    for (it = dumbmap.begin(); it != dumbmap.end(); it++) {
        std::cout << it->first << std::endl;

    }
    for (it = dumbmap.begin(); it != dumbmap.end(); it++) {
        std::cout << it->second << std::endl;
    }
    dumbmap.insert(std::pair<int, char>(68, 'D'));
    for (it = dumbmap.begin(); it != dumbmap.end(); it++) {
        std::cout << it->first << ": " << it->second << std::endl;
    }
    dumbmap.erase(97);
    if (dumbmap[100] == 1) {
        std::cout << dumbmap[100] << std::endl;
    } else {
        std::cout << "There's no key 100" << std::endl;
    }
    dumbmap.clear();


    return 0;
}