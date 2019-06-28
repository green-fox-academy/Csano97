#include <iostream>

void greeting(const std::string& a);

int main(){
    std::string al = "Green Fox";
    greeting(al);


    return 0;
}

void greeting(const std::string& a){
    std::cout << "Greetings dear, " << a << std::endl;
}