#include <iostream>
#include "Student.h"


Student::Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization
) : Person(name, age, gender), _previousOrganization(previousOrganization)
{}


void Student::introduce()
{
    Person::introduce();
    std::cout << "From " << _previousOrganization << " Who skipped " << _skippedDays << " days" << std::endl;
}

void Student::getGoal()
{
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::skipDays(int numberofDays)
{
    _skippedDays += numberofDays;
}

Student::Student() : Person(), _previousOrganization("The School of Life"), _skippedDays(0)
{}


