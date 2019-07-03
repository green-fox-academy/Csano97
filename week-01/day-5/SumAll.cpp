#include <iostream>

int main(){
    int ai[] = {3, 4, 5, 6, 7};
    int n = sizeof(ai) / sizeof(ai[0]);
    for (int i = 0; i < n; ++i) {
        std::cout << ai[i] + ai[i] << std::endl;

    }


    return 0;
}