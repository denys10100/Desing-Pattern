#pragma once

#include "Tram.h"
class HyundaiTram : public Tram
{
public:
    int getPurchaseCost()
    {
        return 9500000;
    }
    int getOperationalCost()
    {
        return 6;
    }
};