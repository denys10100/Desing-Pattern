#pragma once

#include "Coffee.h"

class Cappuccino : public Coffee
{
public:
    std::string getType() override
    {
        return "Cappuccino";
    }

    double getPrice() override
    {
        return 2.0;
    }
};