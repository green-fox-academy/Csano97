#include <iostream>
#include <map>
//Create an application which solves the following problems.

//How much does Bob pay?
//How much does Alice pay?
//Who buys more Rice?
//Who buys more Potato?
//Who buys more different products?
//Who buys more products? (piece)
int main()
{
    std::map<std::string, float> prices = {
            {"Milk",            1.07},
            {"Rice",            1.59},
            {"Eggs",            3.14},
            {"Cheese",          12.60},
            {"Chicken Breasts", 9.40},
            {"Apples",          2.31},
            {"Tomato",          2.58},
            {"Potato",          1.75},
            {"Onion",           1.10}

    };
    std::map<std::string, int> bobList = {
            {"Milk",            3},
            {"Rice",            2},
            {"Eggs",            2},
            {"Cheese",          1},
            {"Chicken Breasts", 4},
            {"Apples",          1},
            {"Tomato",          2},
            {"Potato",          1}
    };
    std::map<std::string, int> aliceList = {
            {"Rice",            2},
            {"Eggs",            2},
            {"Chicken Breasts", 4},
            {"Apples",          1},
            {"Tomato",          2}
    };


    return 0;
}