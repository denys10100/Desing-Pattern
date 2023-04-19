#pragma once

#include "Bus.h"
class HyundaiBus : public Bus
{
public:
    int getPurchaseCost()
    {
        return 5500000;
    }
    int getOperationalCost()
    {
        return 20;
    }
};