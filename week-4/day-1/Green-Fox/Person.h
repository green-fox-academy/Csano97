#ifndef DAY_1_PERSON_H
#define DAY_1_PERSON_H


#include <string>

enum class Gender
{
    MALE,
    FEMALE
};

class Person
{
public:
    Person(const std::string &name, int age, Gender gender);

    Person();

    virtual void introduce();

    virtual void getGoal();

    static std::string genderToString(Gender gender);


protected:
    std::string _name;
    int _age;
    Gender _gender;
};


#endif //DAY_1_PERSON_H
