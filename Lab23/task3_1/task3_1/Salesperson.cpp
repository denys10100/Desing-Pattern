#include "Salesperson.h"
#include "Visitor.h"

Salesperson::Salesperson(double salary) : salary(salary) {}

double Salesperson::getSalary()
{
    return salary;
}

void Salesperson::accept(Visitor& visitor)
{
    visitor.visit(*this);
}

void Salesperson::increaseSalary(double percentage)
{
    salary *= (1 + percentage / 100);
}

void Salesperson::applyPenalty(double amount)
{
    salary -= amount;
}
