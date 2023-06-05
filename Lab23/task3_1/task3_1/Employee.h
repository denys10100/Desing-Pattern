#pragma once

// Forward declaration
class Visitor;

// Employee - abstract class for employees
class Employee
{
public:
    virtual void accept(Visitor& visitor) = 0;
    virtual void increaseSalary(double percentage) = 0;
    virtual void applyPenalty(double amount) = 0;
};
