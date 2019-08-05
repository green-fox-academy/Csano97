cmake_minimum_required(VERSION 3.14)
project(day_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Instrument Instruments/main.cpp Instruments/Instrument.cpp Instruments/Instrument.h Instruments/StringedInstrument.cpp Instruments/StringedInstrument.h Instruments/ElectricGuitar.cpp Instruments/ElectricGuitar.h Instruments/BassGuitar.cpp Instruments/BassGuitar.h Instruments/Violin.cpp Instruments/Violin.h)
add_executable(Wireless WirelessAdapter/main.cpp WirelessAdapter/Device.cpp WirelessAdapter/Device.h WirelessAdapter/USBDevice.cpp WirelessAdapter/USBDevice.h WirelessAdapter/NetworkDevice.cpp WirelessAdapter/NetworkDevice.h WirelessAdapter/WirelessAdapter.cpp WirelessAdapter/WirelessAdapter.h)
add_executable(Devices Devices/main.cpp Devices/Scanner.cpp Devices/Scanner.h Devices/Printer.cpp Devices/Printer.h Devices/Printer2D.cpp Devices/Printer2D.h Devices/Printer3D.cpp Devices/Printer3D.h Devices/Copier.cpp Devices/Copier.h)