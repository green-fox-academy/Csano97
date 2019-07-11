#include <iostream>
#include <vector>

#include "domino.h"

std::vector<Domino> initializeDominoes()
{
    std::vector<Domino> dominoes;
    dominoes.emplace_back(5, 2);
    dominoes.emplace_back(4, 6);
    dominoes.emplace_back(1, 5);
    dominoes.emplace_back(6, 7);
    dominoes.emplace_back(2, 4);
    dominoes.emplace_back(7, 1);
    return dominoes;
}

int main(int argc, char* args[])
{
    std::vector<Domino> dominoes = initializeDominoes();
    // You have the list of Dominoes
    // Order them into one snake where the adjacent dominoes have the same numbers on their adjacent sides
    // eg: [2, 4], [4, 3], [3, 5] ...
    for (int i = 0; i < dominoes.size(); ++i) {
        dominoes[i].getValues();
    }

    return 0;
}