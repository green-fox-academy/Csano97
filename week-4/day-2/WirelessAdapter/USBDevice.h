#ifndef DAY_2_USBDEVICE_H
#define DAY_2_USBDEVICE_H

#include "Device.h"

class USBDevice : virtual public Device
{
public:
    USBDevice(int id, int usbType);

protected:
    int _usbType;
};


#endif //DAY_2_USBDEVICE_H
