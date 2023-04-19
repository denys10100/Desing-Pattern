#pragma once

#include "Trolleybus.h"
class SkodaTrolleybus : public Trolleybus
{
public:
    int getPurchaseCost() override
    {
        return 6800000;
    }
    int getOperationalCost() override
    {
        return 12;
    }
};