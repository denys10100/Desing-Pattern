#pragma once

#include "Trolleybus.h"
class VolvoTrolleybus : public Trolleybus
{
public:
    int getPurchaseCost() override
    {
        return 7000000;
    }
    int getOperationalCost() override
    {
        return 13;
    }
};