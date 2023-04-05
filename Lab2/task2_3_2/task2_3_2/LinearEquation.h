#pragma once

#include "Equation.h"

class LinearEquation : public Equation
{
public:
    LinearEquation(double b, double c) : b(b), c(c) {}

    virtual std::vector<double> solve()
    {
        std::vector<double> solutions;

        if (b == 0)
        {
            if (c == 0)
            {
                solutions.push_back(INFINITY);
            }
        }
        else
        {
            solutions.push_back(-c / b);
        }

        return solutions;
    }

private:
    double b, c;
};