#include <iostream>

std::string appendAfunc(std::string a);

int main(){
    std::string typo = "Chinchill";
    std::cout << appendAfunc(typo) << std::endl;
    return 0;
}
std::string appendAfunc(std::string a){
   return a += "a";
}