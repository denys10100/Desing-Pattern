#pragma once

// Forward declarations
class Employee;
class ITSupport;

// Visitor - interface for visitors
class Visitor
{
public:
    virtual void visit(Employee& employee) = 0;
    virtual void visit(ITSupport& itSupport) = 0;
};
