#pragma once

#include "Espresso.h"
class PhilipsEspresso : public Espresso
{
public:
    PhilipsEspresso()
    {
        cost = 0.4; 
        price = 1.8;
        coffeeMachineModel = "Philips ABC"; 
    }
};