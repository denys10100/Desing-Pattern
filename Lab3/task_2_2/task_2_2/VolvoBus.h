#pragma once

#include "Bus.h"

class VolvoBus : public Bus
{
public:
    int getPurchaseCost() override
    {
        return 6000000;
    }
    int getOperationalCost() override
    {
        return 20;
    }
};