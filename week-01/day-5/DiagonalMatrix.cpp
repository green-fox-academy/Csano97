#include <iostream>

int main(){
    int matrix[][4] = {
            {1, 0, 0, 0},
            {0, 1, 0, 0},
            {0, 0, 1, 0},
            {0, 0, 0, 1}
    };
    std::cout << matrix[0][0] << std::endl;
    int soize = sizeof(matrix) / sizeof(matrix[0][0]);
    for (int i = 0; i < soize; ++i) {
        for (int j = 0; j < soize; ++j) {


            std::cout << matrix[i][j] << std::endl;
        }
        }

    return 0;
}