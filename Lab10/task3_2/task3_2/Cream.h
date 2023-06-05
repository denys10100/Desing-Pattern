#pragma once

#include "CondimentDecorator.h"

class Cream : public CondimentDecorator
{
public:
    Cream(Beverage* beverage) : CondimentDecorator(beverage)
    {
    }

    std::string description() override
    {
        return beverage->description() + ", Cream";
    }

    double cost() override
    {
        return beverage->cost() + 0.50;
    }
};