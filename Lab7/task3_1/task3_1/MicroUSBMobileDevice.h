#pragma once

#include "MicroUSBDevice.h"

class MicroUSBMobileDevice : public MicroUSBDevice
{
public:
    void chargeWithMicroUSB() override
    {
        std::cout << "Charging with micro-USB charger" << std::endl;
    }
};