#pragma once

#include "Americano.h"

class PhilipsAmericano : public Americano
{
public:
    PhilipsAmericano()
    {
        cost = 0.3; 
        price = 1.5;
        coffeeMachineModel = "Philips ABC";     }
};