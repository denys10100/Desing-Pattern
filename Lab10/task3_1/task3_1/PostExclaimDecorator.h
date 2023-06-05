#pragma once

#include "PrintableStringDecorator.h"
class PostExclaimDecorator : public PrintableStringDecorator
{
public:
    PostExclaimDecorator(PrintableString* printableString) : PrintableStringDecorator(printableString)
    {
    }

    void print() override
    {
        PrintableStringDecorator::print();
        std::cout << "!";
    }
};