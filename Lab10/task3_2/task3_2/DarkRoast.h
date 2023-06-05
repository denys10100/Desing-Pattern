#pragma once
#include "Beverage.h"

class DarkRoast : public Beverage
{
public:
    std::string description() override
    {
        return "Dark Roast Coffee";
    }

    double cost() override
    {
        return 0.99;
    }
};