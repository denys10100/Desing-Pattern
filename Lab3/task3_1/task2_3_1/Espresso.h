#pragma once

#include "Coffee.h"

class Espresso : public Coffee
{
public:
    double getCost() const override
    {
        return cost;
    }
    double getPrice() const override
    {
        return price;
    }
    std::string getCoffeeMachineModel() const override
    {
        return coffeeMachineModel;
    }
    std::string getCoffeeType() const override
    {
        return coffeeType;
    }
protected:
    double cost;
    double price;
    std::string coffeeMachineModel;
    std::string coffeeType = "Espresso";

};