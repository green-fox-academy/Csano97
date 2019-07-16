#ifndef DAY_2_NETWORKDEVICE_H
#define DAY_2_NETWORKDEVICE_H

#include "Device.h"

class NetworkDevice : virtual public Device
{
public:
    NetworkDevice(int id, int bandwidth);

protected:
    int _bandwidth;
};


#endif //DAY_2_NETWORKDEVICE_H
