#pragma once


#include <memory>
#include "Coffee.h"

class CoffeeFactory
{
public:
    virtual ~CoffeeFactory() {}
    virtual std::unique_ptr<Coffee> createCoffee() = 0;
};