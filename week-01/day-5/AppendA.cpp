#include <iostream>

int main(){
    std::string animals[] = {"koal", "pand", "zebr"};
    int animalSize = sizeof(animals) / sizeof(animals[0]);
    for (int i = 0; i < animalSize; ++i) {
        std::cout << animals[i] << +"a" << std::endl;
        
    }
   


    return 0;
}