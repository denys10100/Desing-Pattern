#pragma once

#include "CoffeeFactory.h"
#include "Espresso.h"

class EspressoFactory : public CoffeeFactory
{
public:
    std::unique_ptr<Coffee> createCoffee() override
    {
        return std::make_unique<Espresso>();
    }
};