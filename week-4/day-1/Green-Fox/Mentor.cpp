#include "Mentor.h"
#include <iostream>

Mentor::Mentor(const std::string &name, int age, Gender gender, Level level) : Person(name,
                                                                                      age,
                                                                                      gender),
                                                                               _level(level)
{}

Mentor::Mentor() : Person(), _level(Level::INTERMEDIATE)
{}

void Mentor::introduce()
{
    Person::introduce();
    std::cout << levelToString(_level) << " mentor" << std::endl;
}

void Mentor::getGoal()
{
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

std::string Mentor::levelToString(Level level)
{
    switch (level) {
        case Level::JUNIOR:
            return "junior";
        case Level::INTERMEDIATE:
            return "Intermediate";
        case Level::SENIOR:
            return "Senior";
        default:
            return "Unknown";
    }
}