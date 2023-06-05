#pragma once

#include "PrintableStringDecorator.h"

class PostWordDecorator : public PrintableStringDecorator
{
private:
    std::string word;

public:
    PostWordDecorator(PrintableString* printableString, const std::string& word) : PrintableStringDecorator(printableString), word(word)
    {
    }

    void print() override
    {
        PrintableStringDecorator::print();
        std::cout << " " << word;
    }
};