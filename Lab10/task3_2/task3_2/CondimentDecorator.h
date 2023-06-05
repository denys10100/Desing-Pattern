#pragma once
#include "Beverage.h"

class CondimentDecorator : public Beverage
{
protected:
    Beverage* beverage;

public:
    CondimentDecorator(Beverage* beverage) : beverage(beverage)
    {
    }

    std::string description() override
    {
        return beverage->description();
    }

    double cost() override
    {
        return beverage->cost();
    }
};
