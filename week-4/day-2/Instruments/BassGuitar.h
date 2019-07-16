#ifndef DAY_2_BASSGUITAR_H
#define DAY_2_BASSGUITAR_H


#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument
{
public:
    BassGuitar();

    BassGuitar(int numberOfStrings);
    std::string sound() override;
};


#endif //DAY_2_BASSGUITAR_H
