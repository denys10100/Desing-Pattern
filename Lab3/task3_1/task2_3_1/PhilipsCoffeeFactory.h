#pragma once

#include "CoffeeMachineFactory.h"
#include "PhilipsAmericano.h"
#include "PhilipsCappuccino.h"
#include "PhilipsLatte.h"
#include "PhilipsEspresso.h"

class PhilipsCoffeeFactory : public CoffeeMachineFactory
{
public:
    virtual std::string getModel() const override { return "Philips"; }
    virtual double getCost() const override { return 200.0; }
    virtual double getMaintenanceCost() const override { return 50.0; }

    Coffee* createMachine(const std::string& type) const override
    {
        if (type == "Espresso")
        {
            return new PhilipsEspresso();
        }
        else if (type == "Americano")
        {
            return new PhilipsAmericano();
        }
        else if (type == "Cappuccino")
        {
            return new PhilipsCappuccino();
        }
        else if (type == "Latte")
        {
            return new PhilipsLatte();
        }
        else
        {
            return nullptr;
        }
    }
};
