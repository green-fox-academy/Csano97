#ifndef DAY_2_VIOLIN_H
#define DAY_2_VIOLIN_H


#include "StringedInstrument.h"

class Violin : public StringedInstrument
{
public:
    Violin();
    Violin(const std::string &name, int numberOfStrings);
    std::string sound() override;
};


#endif //DAY_2_VIOLIN_H
