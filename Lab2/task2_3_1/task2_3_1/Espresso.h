#pragma once

#include "Coffee.h"

class Espresso : public Coffee
{
public:
    std::string getType() override
    {
        return "Espresso";
    }

    double getPrice() override
    {
        return 1.0;
    }
};