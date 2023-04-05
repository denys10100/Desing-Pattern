#pragma once

#include "Equation.h"

class QuadraticEquation : public Equation
{
public:
    QuadraticEquation(double a, double b, double c) : a(a), b(b), c(c) {}

    virtual std::vector<double> solve()
    {
        std::vector<double> solutions;

        double discriminant = b * b - 4 * a * c;

        if (discriminant > 0)
        {
            solutions.push_back((-b + sqrt(discriminant)) / (2 * a));
            solutions.push_back((-b - sqrt(discriminant)) / (2 * a));
        }
        else if (discriminant == 0)
        {
            solutions.push_back(-b / (2 * a));
        }

        return solutions;
    }

private:
    double a, b, c;
};