#ifndef DAY_2_STRINGEDINSTRUMENT_H
#define DAY_2_STRINGEDINSTRUMENT_H

#include "Instrument.h"

class StringedInstrument : public Instrument
{
public:
    StringedInstrument(const std::string &name, int numberOfStrings);

    virtual std::string sound()=0;
    void play() override;
protected:
    int _numberOfStrings;
};


#endif //DAY_2_STRINGEDINSTRUMENT_H
