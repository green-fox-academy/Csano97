#ifndef DAY_2_WIRELESSADAPTER_H
#define DAY_2_WIRELESSADAPTER_H

#include "USBDevice.h"
#include "NetworkDevice.h"

class WirelessAdapter : virtual public USBDevice, NetworkDevice
{
public:
    WirelessAdapter( int id, int usbType, int bandwidth);
    void info();

};


#endif //DAY_2_WIRELESSADAPTER_H
