#include <iostream>
#include "AnimalClass.h"


int main(){
    AnimalClass Cheetah{50, 50};
    for (int i = 0; i < 50; ++i) {
        Cheetah.eat();
        Cheetah.drink();
    }
    std::cout << "Cheetah's hunger: " << Cheetah.getHunger() << "\n" << "Cheetah's thirst: " << Cheetah.getThirst() << std::endl;
    std::cout << std::endl;
    for (int j = 0; j < 75; ++j) {
        Cheetah.play();
    }
    std::cout << "Cheetah's hunger after playing: " << Cheetah.getHunger() << "\n" << "Cheetah's thirst after playing: " << Cheetah.getThirst() << std::endl;
    return 0;
}