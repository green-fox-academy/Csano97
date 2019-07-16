#ifndef DAY_2_ELECTRICGUITAR_H
#define DAY_2_ELECTRICGUITAR_H

#include "StringedInstrument.h"

class ElectricGuitar : public StringedInstrument
{
public:
    ElectricGuitar();

    ElectricGuitar(int numberOfStrings);
    std::string sound() override;
};


#endif //DAY_2_ELECTRICGUITAR_H
