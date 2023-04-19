#pragma once

#include "Bus.h"
class SkodaBus : public Bus
{
public:
    int getPurchaseCost() override
    {
        return 4500000;
    }
    int getOperationalCost() override
    {
        return 25;
    }
};