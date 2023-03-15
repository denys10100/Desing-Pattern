#pragma once

#include "CoffeeFactory.h"
#include "Latte.h"

class LatteFactory : public CoffeeFactory
{
public:
    std::unique_ptr<Coffee> createCoffee() override
    {
        return std::make_unique<Latte>();
    }
};