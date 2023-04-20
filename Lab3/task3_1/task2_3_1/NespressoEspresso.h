#pragma once


#include "Espresso.h"
class NespressoEspresso : public Espresso
{
public:
    NespressoEspresso()
    {
        cost = 0.5; 
        price = 1.5; 
        coffeeMachineModel = "Nespresso XYZ"; 
    }
};