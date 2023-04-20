#pragma once

#include "CoffeeMachine.h"

class PhilipsCoffeeMachine : public CoffeeMachine
{
public:
    virtual std::string getModel() const override { return "Philips"; }
    virtual double getCost() const override { return 200.0; }
    virtual double getMaintenanceCost() const override { return 50.0; }
};