#pragma once
#include "Beverage.h"

class Espresso : public Beverage
{
public:
    std::string description() override
    {
        return "Espresso";
    }

    double cost() override
    {
        return 1.99;
    }
};