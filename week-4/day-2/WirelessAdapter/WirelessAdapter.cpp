#include <iostream>
#include "WirelessAdapter.h"

WirelessAdapter::WirelessAdapter( int id, int usbType, int bandwidth) : Device(id),
                                                                                         USBDevice(id, usbType),
                                                                                         NetworkDevice(id, bandwidth)
{}
void WirelessAdapter::info()
{
    std::cout << "The device's ID: " << getId() << " it's USB type: " << _usbType << " and it's bandwidth: " << _bandwidth << std::endl;
}