#include <iostream>

int main() {
    int boys;
    int girls;
    std::cout << "How many boys are coming?: ";
    std::cin >> boys;
    std::cout << "How many girls are coming?: ";
    std::cin >> girls;
    bool popular = true;
    bool flirt = true;
    if(boys + girls >= 20 && boys == girls){
        std::cout << "This is an excellent party" << std::endl;
    }else if(girls == 0) {
        std::cout << "Sausage party!" << std::endl;
    }else if(boys + girls >= 20 && boys != girls){
        std::cout << "Quite cool party" << std::endl;
    }else if(boys + girls < 20){
        std::cout << "Average party" << std::endl;
    }
    return 0;
}