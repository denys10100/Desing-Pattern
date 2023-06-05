#pragma once
#include "Employee.h"

class Iterator
{
public:
    virtual bool hasNext() const = 0;
    virtual Employee* next() = 0;
};

