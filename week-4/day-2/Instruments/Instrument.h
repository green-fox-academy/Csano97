#ifndef DAY_2_INSTRUMENT_H
#define DAY_2_INSTRUMENT_H


#include <string>

class Instrument
{
public:
    Instrument(const std::string &name);

    Instrument();

    virtual void play()=0;
protected:
    std::string _name;
};


#endif //DAY_2_INSTRUMENT_H
