#pragma once

#include "Americano.h"
#include "Cappuccino.h"
#include "Espresso.h"
#include "Latte.h"

class CoffeeMachineFactory
{
public:
    virtual ~CoffeeMachineFactory() = default;
    virtual std::string getModel() const = 0;
    virtual double getCost() const = 0;
    virtual double getMaintenanceCost() const = 0;
    virtual Coffee* createMachine(const std::string& type) const = 0;
};
