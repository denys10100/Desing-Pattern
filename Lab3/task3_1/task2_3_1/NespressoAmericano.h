#pragma once

#include "Americano.h"
class NespressoAmericano : public Americano
{
public:
    NespressoAmericano()
    {
        cost = 0.4; 
        price = 1.7;
        coffeeMachineModel = "Nespresso XYZ";     }
};