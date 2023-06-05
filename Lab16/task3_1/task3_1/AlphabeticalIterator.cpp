#include "AlphabeticalIterator.h"
#include <algorithm>

bool compareEmployees(Employee* a, Employee* b)
{
    return a->getName() < b->getName();
}

AlphabeticalIterator::AlphabeticalIterator(const std::vector<Employee*>& employees)
    : employees(employees), currentIndex(0)
{
    std::sort(this->employees.begin(), this->employees.end(), compareEmployees);
}

bool AlphabeticalIterator::hasNext() const
{
    return currentIndex < employees.size();
}

Employee* AlphabeticalIterator::next()
{
    if (hasNext())
    {
        return employees[currentIndex++];
    }
    return nullptr;
}
