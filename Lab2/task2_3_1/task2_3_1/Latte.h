#pragma once

#include "Coffee.h"

class Latte : public Coffee
{
public:
    std::string getType() override
    {
        return "Latte";
    }

    double getPrice() override
    {
        return 2.5;
    }
};