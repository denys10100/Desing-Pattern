#pragma once


#include "MicroUSBDevice.h"
#include "USBTypeCCharger.h"

class MicroUSBAdapter : public MicroUSBDevice
{
private:
    USBTypeCCharger* charger;

public:
    MicroUSBAdapter(USBTypeCCharger* charger) : charger(charger)
    {
    }

    void chargeWithMicroUSB() override
    {
        charger->chargeWithUSBTypeC();
    }
};