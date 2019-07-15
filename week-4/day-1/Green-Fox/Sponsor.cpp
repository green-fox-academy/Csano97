#include "Sponsor.h"
#include <iostream>

Sponsor::Sponsor(const std::string &name, int age, Gender gender, const std::string &company) : Person(name, age,
                                                                                                       gender),
                                                                                                _company(company),
                                                                                                _hiredStudents(0)
{}

Sponsor::Sponsor() : Person(), _company("Google"), _hiredStudents(0)
{}

void Sponsor::introduce()
{
    Person::introduce();
    std::cout << "Who represents " << _company << " and hired " << _hiredStudents << " students so far." << std::endl;
}

void Sponsor::getGoal()
{
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}

void Sponsor::hire()
{
    _hiredStudents += 1;
}