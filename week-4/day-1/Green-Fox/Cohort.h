#ifndef DAY_1_COHORT_H
#define DAY_1_COHORT_H

#include "Student.h"
#include "Mentor.h"
#include <string>
#include <vector>

class Cohort
{
public:
    Cohort(const std::string &name);

    void addStudent(Student*);
    void addMentor(Mentor*);
    void info();
private:
    std::string _cohortName;
    std::vector<Student*> _Students;
    std::vector<Mentor*> _Mentors;
};


#endif //DAY_1_COHORT_H
