#include <iostream>
#include "SalaryModifier.h"
#include "Employee.h"
#include "ITSupport.h"

SalaryModifier::SalaryModifier(double increasePercentage, double penaltyAmount)
    : increasePercentage(increasePercentage), penaltyAmount(penaltyAmount)
{
}

void SalaryModifier::visit(Employee& employee)
{
    employee.increaseSalary(increasePercentage);
    employee.applyPenalty(penaltyAmount);
}

void SalaryModifier::visit(ITSupport& itSupport)
{
    itSupport.increaseSalary(increasePercentage);
    itSupport.applyPenalty(penaltyAmount);

    // Additional actions for IT support employee
    std::cout << "Additional actions for IT Support employee" << std::endl;
}
