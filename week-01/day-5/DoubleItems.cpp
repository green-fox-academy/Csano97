#include <iostream>

int main(){
    int numList[] = {3, 4, 5, 6, 7};

    for (int i : numList) {
        std::cout << i * 2 << std::endl;

    }

    return 0;
}