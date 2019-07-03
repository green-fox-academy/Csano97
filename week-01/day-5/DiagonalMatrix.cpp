#include <iostream>

int main(){
    int a = 0;
    std::cout << "Give a size number:";
    std::cin >> a;
    int matrix[][a] = {0, 1};

    for (int i = 0; i < a; ++i) {
        std::cout << matrix[i] << std::endl;

    }

    return 0;
}