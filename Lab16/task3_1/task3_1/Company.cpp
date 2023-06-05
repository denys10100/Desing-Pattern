#include "Company.h"
#include "AlphabeticalIterator.h"

void Company::addEmployee(Employee* employee)
{
    employees.push_back(employee);
}

Iterator* Company::createIterator()
{
    return new AlphabeticalIterator(employees);
}
