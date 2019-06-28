#include <iostream>

int main(){
    std::string Green = "lime " "forest green " "olive " "pale green " "spring green";
    std::string Red = "orange red " "red " "tomato";
    std::string Pink = "orchid " "violet " "pink " "hot pink";
    std::string colors[][3] = {Green, Red, Pink};
    std::cout << colors[0][0] << std::endl;
    std::cout << colors[0][1] << std::endl;
    std::cout << colors[0][2] << std::endl;



    return 0;
}