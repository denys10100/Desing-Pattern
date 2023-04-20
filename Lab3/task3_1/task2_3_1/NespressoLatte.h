#pragma once

#include "Latte.h"
class NespressoLatte : public Latte
{
public:
    NespressoLatte()
    {
        cost = 0.7; 
        price = 2.2;
        coffeeMachineModel = "Nespresso XYZ"; 

    }
};