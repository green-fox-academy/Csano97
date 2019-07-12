#include <iostream>
//We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).

int floppyEars(int bunnies);

int main()
{
    std::cout << floppyEars(15) << std::endl;
    return 0;
}
int floppyEars(int bunnies){
    if(bunnies <= 1){
        return 2;
    }else{

        return 2 + floppyEars(bunnies - 1);
    }
}