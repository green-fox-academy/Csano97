#include <iostream>
#include <map>
//We are going to represent our products in a map where the keys are strings representing the product's name and the values are numbers representing the product's price.
//Create a map with the following key-value pairs.
//Product name (key)	Price (value)
//Eggs	200
//Milk	200
//Fish	400
//Apples	150
//Bread	50
//Chicken	550
//Create an application which solves the following problems.
//Which products cost less than 201? (just the name)
//Which products cost more than 150? (name + price)
int main(){
    std::map<std::string, int> products = {
            {"Eggs",    200},
            {"Milk",    200},
            {"Fish",    400},
            {"Apples",  150},
            {"Bread",   50},
            {"Chicken", 550}

    };
    for(auto it = products.begin(); it != products.end(); it++){
        if(it->second < 201){
            std::cout << it->first << std:: endl;
        }
    }
    for(auto it = products.begin(); it != products.end(); it++){
        if(it->second > 150){
            std::cout << it->first << ": " << it->second << std:: endl;
        }
    }




    return 0;
}