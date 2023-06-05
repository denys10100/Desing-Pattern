#include <iostream>
#include <vector>
#include "Employee.h"
#include "Salesperson.h"
#include "Manager.h"
#include "ITSupport.h"
#include "SalaryModifier.h"

int main()
{
    std::vector<Employee*> employees;
    employees.push_back(new Salesperson(1000.0));
    employees.push_back(new Manager(2000.0));
    employees.push_back(new ITSupport(1500.0));

    // Create a visitor
    SalaryModifier modifier(10.0, 100.0);

    // Apply the visitor to each employee
    for (Employee* employee : employees)
    {
        employee->accept(modifier);
        std::cout << "New salary: " << employee->getSalary() << std::endl;
    }

    // Clean up memory
    for (Employee* employee : employees)
    {
        delete employee;
    }

    return 0;
}
