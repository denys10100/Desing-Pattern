#pragma once
#include "Employee.h"
#include "Iterator.h"
#include <vector>

class Company
{
private:
    std::vector<Employee*> employees;

public:
    void addEmployee(Employee* employee);
    Iterator* createIterator();
};

