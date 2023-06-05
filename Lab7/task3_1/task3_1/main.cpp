#include <iostream>
#include <string>

#include "USBTypeCChargerDevice.h"
#include "MicroUSBMobileDevice.h"
#include "MicroUSBAdapter.h"

int main()
{

    USBTypeCChargerDevice usbTypeCCharger;

    MicroUSBAdapter adapter(&usbTypeCCharger);

    adapter.chargeWithMicroUSB();

    return 0;
}
