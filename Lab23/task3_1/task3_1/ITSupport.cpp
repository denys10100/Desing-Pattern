#include "ITSupport.h"
#include "Visitor.h"

ITSupport::ITSupport(double salary) : salary(salary) {}

double ITSupport::getSalary()
{
    return salary;
}

void ITSupport::accept(Visitor& visitor)
{
    visitor.visit(*this);
}

void ITSupport::increaseSalary(double percentage)
{
    salary *= (1 + percentage / 100);
}

void ITSupport::applyPenalty(double amount)
{
    salary -= amount;
}
