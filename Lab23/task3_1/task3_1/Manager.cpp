#include "Manager.h"
#include "Visitor.h"

Manager::Manager(double salary) : salary(salary) {}

double Manager::getSalary()
{
    return salary;
}

void Manager::accept(Visitor& visitor)
{
    visitor.visit(*this);
}

void Manager::increaseSalary(double percentage)
{
    salary *= (1 + percentage / 100);
}

void Manager::applyPenalty(double amount)
{
    salary -= amount;
}
