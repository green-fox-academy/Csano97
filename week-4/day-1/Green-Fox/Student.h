#ifndef DAY_1_STUDENT_H
#define DAY_1_STUDENT_H


#include "Person.h"

class Student : public Person
{
public:




    Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization);

    Student();

    void getGoal() override ;
    void introduce() override ;
    void skipDays(int numberofDays);
private:
    std::string _previousOrganization;
    int _skippedDays = 0;
};


#endif //DAY_1_STUDENT_H
