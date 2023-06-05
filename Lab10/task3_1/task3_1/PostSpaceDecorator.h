#pragma once

#include "PrintableStringDecorator.h"

class PostSpaceDecorator : public PrintableStringDecorator
{
public:
    PostSpaceDecorator(PrintableString* printableString) : PrintableStringDecorator(printableString)
    {
    }

    void print() override
    {
        PrintableStringDecorator::print();
        std::cout << " ";
    }
};