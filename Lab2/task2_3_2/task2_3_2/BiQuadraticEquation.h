#pragma once

#include "Equation.h"

class BiQuadraticEquation : public Equation
{
public:
    BiQuadraticEquation(double a, double b, double c) : a(a), b(b), c(c) {}

    virtual std::vector<double> solve()
    {
        std::vector<double> solutions;

        double inner_discriminant = b * b - 4 * a * c;

        if (inner_discriminant > 0)
        {
            double x1 = (-b + sqrt(inner_discriminant)) / (2 * a);
            double x2 = (-b - sqrt(inner_discriminant)) / (2 * a);

            if (x1 > 0)
            {
                solutions.push_back(sqrt(x1));
                solutions.push_back(-sqrt(x1));
            }
            if (x2 > 0)
            {
                solutions.push_back(sqrt(x2));
                solutions.push_back(-sqrt(x2));
            }
        }
        else if (inner_discriminant == 0)
        {
            double x = -b / (2 * a);

            if (x > 0)
            {
                solutions.push_back(sqrt(x));
                solutions.push_back(-sqrt(x));
            }
        }

        return solutions;
    }

private:
    double a, b, c;
};