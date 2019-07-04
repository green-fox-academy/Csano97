#include <iostream>
#include <vector>

//We are going to represent our expenses in a list containing integers.

//Create a list with the following items.
//500, 1000, 1250, 175, 800 and 120
//Create an application which solves the following problems.
//How much did we spend?
//Which was our greatest expense?
//Which was our cheapest spending?
//What was the average amount of our spending?
void calculator(const std::vector<int>& bruh);

int main()
{
    std::vector<int> spending = {500, 1000, 1250, 175, 800, 120};
    calculator(spending);


    return 0;
}

void calculator(const std::vector<int>& bruh)
{
    int sum =0;
    for (int k : bruh) {
        sum += k;

    }
    std::cout << "Our overall expense: " << sum << std::endl;

    int greatest = bruh[0];
    for (int i : bruh) {
        if(greatest < i){
            greatest = i;
        }
    }
    std::cout << "Our greatest expense was: " << greatest << std::endl;

    int cheapest = bruh[0];
    for (int j : bruh) {
        if(cheapest > j){
            cheapest = j;
        }
    }
    std::cout << "Our cheapest expense was: " << cheapest << std::endl;

    int avg = 0;
    int holder = 0;

    for (int l = 0; l < bruh.size(); ++l) {
        holder += bruh[l];
        avg = holder / bruh.size();
    }
    std::cout << "Our average spending: " << avg << std::endl;
}