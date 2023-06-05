#pragma once

#include "CondimentDecorator.h"

class Milk : public CondimentDecorator
{
public:
    Milk(Beverage* beverage) : CondimentDecorator(beverage)
    {
    }

    std::string description() override
    {
        return beverage->description() + ", Milk";
    }

    double cost() override
    {
        return beverage->cost() + 0.25;
    }
};