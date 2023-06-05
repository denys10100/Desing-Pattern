#pragma once
#include "Iterator.h"
#include <vector>

class AlphabeticalIterator : public Iterator
{
private:
    std::vector<Employee*> employees;
    size_t currentIndex;

public:
    AlphabeticalIterator(const std::vector<Employee*>& employees);
    bool hasNext() const override;
    Employee* next() override;
};


