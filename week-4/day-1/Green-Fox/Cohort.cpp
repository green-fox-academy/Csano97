#include <iostream>
#include "Cohort.h"

Cohort::Cohort(const std::string &name) : _cohortName(name)
{}

void Cohort::info()
{
    std::cout << "The " << _cohortName << " cohort has " << _Students.size() << " students and " << _Mentors.size()
              << " mentors." << std::endl;
}
void Cohort::addStudent(Student* student)
{
    _Students.push_back(student);
}
void Cohort::addMentor(Mentor* mentor)
{
    _Mentors.push_back(mentor);
}