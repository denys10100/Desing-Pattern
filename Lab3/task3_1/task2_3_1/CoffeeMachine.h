#pragma once

#include <string>

class CoffeeMachine
{
public:
    virtual ~CoffeeMachine() {}
    virtual std::string getModel() const = 0;
    virtual double getCost() const = 0;
    virtual double getMaintenanceCost() const = 0;
};