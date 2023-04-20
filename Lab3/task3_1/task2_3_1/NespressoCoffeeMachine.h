#pragma once

#include "CoffeeMachine.h"

class NespressoCoffeeMachine : public CoffeeMachine
{
public:
    virtual std::string getModel() const override { return "Nespresso"; }
    virtual double getCost() const override { return 100.0; }
    virtual double getMaintenanceCost() const override { return 30.0; }
};