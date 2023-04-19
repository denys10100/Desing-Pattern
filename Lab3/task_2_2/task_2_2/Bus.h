#pragma once

class Bus
{
public:
    virtual int getPurchaseCost() = 0;
    virtual int getOperationalCost() = 0;
};