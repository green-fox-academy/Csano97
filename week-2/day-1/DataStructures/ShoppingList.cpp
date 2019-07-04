#include <iostream>
#include <vector>
//We are going to represent a shopping list in a list containing strings.

//Create a list with the following items.
//Eggs, milk, fish, apples, bread and chicken
//Create an application which solves the following problems.
//Do we have milk on the list?
//Do we have bananas on the list?
bool banan = false;
bool malk = false;
int main(){
    std::vector<std::string> list ={"Eggs", "Milk", "Fish", "Apples", "Bread", "Chicken"};
    for (const auto & i : list) {
        if(i == "Milk"){
            malk = true;
        }
    }
    if(malk) {
        std::cout << "We have milk on the list" << std::endl;
    }else{
        std::cout << "No we don't have milk on the list" << std::endl;
    }


    for (const auto & j : list) {

        if(j == "Bananas"){
            banan = true;
        }
    }
    if(banan){
        std::cout << "We have bananas on the list" << std::endl;
    }else{
        std::cout << "We don't have any bananas on the list" << std::endl;
    }


    return 0;
}