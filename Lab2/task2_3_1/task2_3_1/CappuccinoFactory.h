#pragma once

#include "CoffeeFactory.h"
#include "Cappuccino.h"

class CappuccinoFactory : public CoffeeFactory
{
public:
    std::unique_ptr<Coffee> createCoffee() override
    {
        return std::make_unique<Cappuccino>();
    }
};
