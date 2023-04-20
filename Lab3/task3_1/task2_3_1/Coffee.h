#pragma once

#include <string>

class Coffee
{

public:
    virtual ~Coffee() = default;
    virtual double getCost() const = 0;
    virtual double getPrice() const = 0;
    virtual std::string getCoffeeMachineModel() const = 0;
    virtual std::string getCoffeeType() const = 0;

};