#include <sstream>
#include <map>
#include <iostream>
#include "ARagMan.h"

bool ARagMan::angram(std::string ana, std::string gram)
{
    int size = ana.length();
    int size2 = gram.length();
    int temp;
    std::string temp2;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size2; ++j) {
            if(temp < i){
                temp = i;
            }
        }
    }
}