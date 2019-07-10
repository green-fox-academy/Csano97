#ifndef DAY_3_ANIMALCLASS_H
#define DAY_3_ANIMALCLASS_H
#include <string>

class AnimalClass
{
public:

    AnimalClass(int hunger, int thirst);

    void eat();
    void drink();
    void play();

    int getHunger() const;

    int getThirst() const;

private:
    int _hunger;
    int _thirst;
};


#endif //DAY_3_ANIMALCLASS_H
