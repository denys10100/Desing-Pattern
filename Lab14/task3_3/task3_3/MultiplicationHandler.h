#pragma once
#include "RequestHandler.h"

class MultiplicationHandler : public RequestHandler
{
public:
    void handleRequest(int a, int b, const std::string& operation) override
    {
        if (operation == "*")
        {
            int result = a * b;
            std::cout << a << " * " << b << " = " << result << std::endl;
        }
        else
        {
            successor->handleRequest(a, b, operation);
        }
    }
};