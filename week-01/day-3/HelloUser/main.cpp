#include <iostream>

int main() {
    std::string nameoftheuser;
    std::cout << "What's your name?: ";
    std::cin >> nameoftheuser;
    std::cout << "Hello, " << nameoftheuser << std::endl;
    return 0;
}