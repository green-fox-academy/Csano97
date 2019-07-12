#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> names;
    for (int i = 0; i < names.size(); i++) {
        std::cout << names[i] << std::endl;
    }
    names.emplace_back("William");
    std::cout << names.empty() << std::endl;
    names.emplace_back("John");
    names.emplace_back("Amanda");
    std::cout << names.size() << std::endl;
    std::cout << names[2] << std::endl;
    std::cout << "" << std::endl;
    for (int i = 0; i < names.size(); i++) {
        std::cout << names[i] << std::endl;
    }
    std::cout << "" << std::endl;
    for (int i = 0; i < names.size(); i++) {

        std::cout << i + 1 << ". " << names[i] << std::endl;
    }
    names.erase(names.begin() + 1);
    std::cout << "" << std::endl;
    for (int i = 1; i < names.size() + 1; --i) {
        std::cout << names[i] << std::endl;
    }
    names.clear();
    return 0;
}