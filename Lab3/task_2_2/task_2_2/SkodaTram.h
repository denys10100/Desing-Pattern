#pragma once

#include "Tram.h"
class SkodaTram : public Tram
{
public:
    int getPurchaseCost() override
    {
        return 9000000;
    }
    int getOperationalCost() override
    {
        return 8;
    }
};