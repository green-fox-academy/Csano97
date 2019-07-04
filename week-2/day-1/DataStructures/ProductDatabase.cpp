#include <iostream>
#include <map>
//Create a map with the following key-value pairs.
//Product name (key)	Price (value)
//Eggs	200
//Milk	200
//Fish	400
//Apples	150
//Bread	50
//Chicken	550
//Create an application which solves the following problems.
//How much is the fish?
//What is the most expensive product?
//What is the average price?
//How many products' price is below 300?
//Is there anything we can buy for exactly 125?
//What is the cheapest product?

int main()
{
    std::map<std::string, int> products = {
            {"Eggs",    200},
            {"Milk",    200},
            {"Fish",    400},
            {"Apples",  150},
            {"Bread",   50},
            {"Chicken", 550}

    };
    std::cout << "The fish costs: " << products["Fish"] <<std:: endl;
    int currentmax = 0;
    std::map<std::string, int>::iterator it;
    for(it = products.begin(); it != products.end(); it++){
        if(it->second > currentmax){
            currentmax = it->second;
        }
    }
    std::cout << "The most expensive product is " << currentmax << std::endl;
    int sum = 0;
    for(auto it = products.begin(); it != products.end(); it++) {
            sum += it->second;
    }
    sum /= products.size();
    std::cout << "The average price is: " << sum << std::endl;

    int below = 0;
    for(auto it = products.begin(); it != products.end(); it++){
        if(it->second < 300){
            ++below;
        }
    }
    std::cout << "There are " << below << " items currently below the price of 300." << std::endl;
    for(it = products.begin(); it != products.end(); it++){
        if(it->second == 125){
            std::cout << "You can buy " << it->first << "for 125" << std::endl;
        }else{
            std::cout << "No item for that price" << std::endl;
            break;
        }
    }
    int cheapest = 0;
    for(it = products.begin(); it != products.end(); it++){
        if(it->second > cheapest){
            cheapest = it->second;
        }
    }
    std::cout << "The cheapest item is: " << cheapest << std::endl;
    return 0;
}