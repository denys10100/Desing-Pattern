#pragma once
#include "PrintableString.h"

class ConcretePrintableString : public PrintableString
{
private:
    std::string str;

public:
    ConcretePrintableString(const std::string& str) : str(str)
    {
    }

    void print() override
    {
        std::cout << str;
    }
};