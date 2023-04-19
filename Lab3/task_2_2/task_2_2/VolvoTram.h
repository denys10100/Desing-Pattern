#pragma once

#include "Tram.h"
class VolvoTram : public Tram
{
public:
    int getPurchaseCost() override
    {
        return 10000000;
    }
    int getOperationalCost() override
    {
        return 7;
    }
};