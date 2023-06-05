#pragma once

#include "PrintableString.h"

class PrintableStringDecorator : public PrintableString
{
protected:
    PrintableString* printableString;

public:
    PrintableStringDecorator(PrintableString* printableString) : printableString(printableString)
    {
    }

    void print() override
    {
        printableString->print();
    }
};