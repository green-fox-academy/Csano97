#include <iostream>
#include "Person.h"

Person::Person(const std::string &name, int age, Gender gender) : _name(name), _age(age), _gender(gender)
{}

Person::Person()
{
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
}

std::string Person::genderToString(Gender gender)
{
    switch (gender) {
        case Gender::MALE:
            return "Male";
        case Gender::FEMALE:
            return "Female";
        default:
            return "Unknown";
    }
}


    void Person::introduce()
    {
        std::cout << "Hi, I'm " << _name << ", a " << _age << " years old " << genderToString(_gender) << std::endl;
    }

    void Person::getGoal()
    {
        std::cout << "My goal is: Live for the moment!" << std::endl;
    }

