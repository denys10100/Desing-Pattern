#pragma once
#include "USBTypeCCharger.h"

class USBTypeCChargerDevice : public USBTypeCCharger
{
public:
    void chargeWithUSBTypeC() override
    {
        std::cout << "Charging with USB Type-C charger" << std::endl;
    }
};