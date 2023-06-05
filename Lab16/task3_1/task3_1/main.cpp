#include <iostream>

#include "Company.h"
#include "Employee.h"
#include "Iterator.h"

int main()
{
    Company company;

    Employee* emp1 = new Employee("John");
    Employee* emp2 = new Employee("Alice");
    Employee* emp3 = new Employee("Bob");

    company.addEmployee(emp1);
    company.addEmployee(emp2);
    company.addEmployee(emp3);

    Iterator* iterator = company.createIterator();

    while (iterator->hasNext())
    {
        Employee* employee = iterator->next();
        std::cout << employee->getName() << std::endl;
    }

    delete iterator;
    delete emp1;
    delete emp2;
    delete emp3;

    return 0;
}
