#pragma once

#include "Trolleybus.h"
class HyundaiTrolleybus : public Trolleybus
{
public:
    int getPurchaseCost()
    {
        return 7000000;
    }
    int getOperationalCost()
    {
        return 11;
    }
};