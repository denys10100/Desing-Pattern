#pragma once
#include "Cappuccino.h"

class NespressoCappuccino : public Cappuccino
{
public:
    NespressoCappuccino()
    {
        cost = 0.6; 
        price = 2.0;
        coffeeMachineModel = "Nespresso XYZ"; 
    }
};