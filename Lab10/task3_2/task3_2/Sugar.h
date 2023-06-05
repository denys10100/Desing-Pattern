#pragma once

#include "CondimentDecorator.h"

class Sugar : public CondimentDecorator
{
public:
    Sugar(Beverage* beverage) : CondimentDecorator(beverage)
    {
    }

    std::string description() override
    {
        return beverage->description() + ", Sugar";
    }

    double cost() override
    {
        return beverage->cost() + 0.10;
    }
};