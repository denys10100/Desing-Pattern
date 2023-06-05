#pragma once
#include "Employee.h"

// Salesperson - concrete class for salespeople
class Salesperson : public Employee
{
private:
    double salary;
public:
    Salesperson(double salary);

    double getSalary();

    void accept(Visitor& visitor) override;
    void increaseSalary(double percentage) override;
    void applyPenalty(double amount) override;
};
