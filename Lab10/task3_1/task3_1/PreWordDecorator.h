#pragma once


#include "PrintableStringDecorator.h"

class PreWordDecorator : public PrintableStringDecorator
{
private:
    std::string word;

public:
    PreWordDecorator(PrintableString* printableString, const std::string& word) : PrintableStringDecorator(printableString), word(word)
    {
    }

    void print() override
    {
        std::cout << word << " ";
        PrintableStringDecorator::print();
    }
};