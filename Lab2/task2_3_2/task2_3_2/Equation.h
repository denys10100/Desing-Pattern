#pragma once
#include <vector>

class Equation
{
public:
    virtual std::vector<double> solve() = 0;
};