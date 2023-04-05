#pragma once

#include "LinearEquation.h"
#include "QuadraticEquation.h"
#include "BiQuadraticEquation.h"

class EquationFactory
{
public:
    static Equation* createEquation(std::vector<double> coefficients)
    {
        int n = coefficients.size();

        if (n == 2)
        {
            return new LinearEquation(coefficients[0], coefficients[1]);
        }
        else if (n == 3)
        {
            return new QuadraticEquation(coefficients[0], coefficients[1], coefficients[2]);
        }
        else if (n == 4)
        {
            return new BiQuadraticEquation(coefficients[0], coefficients[1], coefficients[2]);
        }

        return NULL;
    }
};