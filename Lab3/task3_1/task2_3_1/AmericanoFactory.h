#pragma once

#include "CoffeeFactory.h"
#include "Americano.h"

class AmericanoFactory : public CoffeeFactory
{
public:
    std::unique_ptr<Coffee> createCoffee() override
    {
        return std::make_unique<Americano>();
    }
};

