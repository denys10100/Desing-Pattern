#pragma once
#include "Visitor.h"

// SalaryModifier - concrete visitor for modifying salaries
class SalaryModifier : public Visitor
{
private:
    double increasePercentage;
    double penaltyAmount;
public:
    SalaryModifier(double increasePercentage, double penaltyAmount);

    void visit(Employee& employee) override;
    void visit(ITSupport& itSupport) override;
};
