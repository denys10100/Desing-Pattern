#pragma once


#include "Cappuccino.h"
class PhilipsCappuccino : public Cappuccino
{
public:
    PhilipsCappuccino()
    {
        cost = 0.5;
        price = 2.2;
        coffeeMachineModel = "Philips ABC"; 
    }
};