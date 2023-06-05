#pragma once
#include "Employee.h"

// Manager - concrete class for managers
class Manager : public Employee
{
private:
    double salary;
public:
    Manager(double salary);

    double getSalary();

    void accept(Visitor& visitor) override;
    void increaseSalary(double percentage) override;
    void applyPenalty(double amount) override;
};
