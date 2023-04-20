#pragma once

#include "Latte.h"

class PhilipsLatte : public Latte
{
public:
    PhilipsLatte()
    {
        cost = 0.6; // Cost of ingredients for a Latte
        price = 2.5; // Price to sell a Latte to a customer
        coffeeMachineModel = "Philips ABC"; // Specific Philips Coffee machine model used to make Latte
    }
};