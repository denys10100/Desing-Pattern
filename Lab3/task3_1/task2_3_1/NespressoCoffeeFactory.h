#pragma once

#include "CoffeeMachine.h"
#include "CoffeeMachineFactory.h"
#include "NespressoAmericano.h"
#include "NespressoCappuccino.h"
#include "NespressoLatte.h"
#include "NespressoEspresso.h"
class NespressoCoffeeFactory : public CoffeeMachineFactory
{
public:

    virtual std::string getModel() const override { return "Nespresso"; }
    virtual double getCost() const override { return 100.0; }
    virtual double getMaintenanceCost() const override { return 30.0; }

    Coffee* createMachine(const std::string& type) const override
    {
        if (type == "Espresso")
        {
            return new NespressoEspresso();
        }
        else if (type == "Americano")
        {
            return new NespressoAmericano();
        }
        else if (type == "Cappuccino")
        {
            return new NespressoCappuccino();
        }
        else if (type == "Latte")
        {
            return new NespressoLatte();
        }
        else
        {
            return nullptr;
        }
    }
};
