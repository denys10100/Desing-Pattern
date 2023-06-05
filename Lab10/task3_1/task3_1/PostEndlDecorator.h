#pragma once

#include "PrintableStringDecorator.h"

class PostEndlDecorator : public PrintableStringDecorator
{
public:
    PostEndlDecorator(PrintableString* printableString) : PrintableStringDecorator(printableString)
    {
    }

    void print() override
    {
        PrintableStringDecorator::print();
        std::cout << std::endl;
    }
};