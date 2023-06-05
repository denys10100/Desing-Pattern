#pragma once
#include "Employee.h"

// ITSupport - concrete class for IT support employees
class ITSupport : public Employee
{
private:
    double salary;
public:
    ITSupport(double salary);

    double getSalary();

    void accept(Visitor& visitor) override;
    void increaseSalary(double percentage) override;
    void applyPenalty(double amount) override;
};
