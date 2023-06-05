#pragma once
#include "RequestHandler.h"


class DivisionHandler : public RequestHandler
{
public:
    void handleRequest(int a, int b, const std::string& operation) override
    {
        if (operation == "/")
        {
            if (b != 0)
            {
                int result = a / b;
                std::cout << a << " / " << b << " = " << result << std::endl;
            }
            else
            {
                std::cout << "Error: Division by zero!" << std::endl;
            }
        }
        else
        {
            std::cout << "Error: Unsupported operation!" << std::endl;
        }
    }
};