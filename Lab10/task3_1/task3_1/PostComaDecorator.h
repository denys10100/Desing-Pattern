#pragma once

#include "PrintableStringDecorator.h"
class PostComaDecorator : public PrintableStringDecorator
{
public:
    PostComaDecorator(PrintableString* printableString) : PrintableStringDecorator(printableString)
    {
    }

    void print() override
    {
        PrintableStringDecorator::print();
        std::cout << ",";
    }
};