#pragma once

class Spy
{
public:
    virtual void visit(GeneralStaff& generalStaff) = 0;
    virtual void visit(MilitaryBase& militaryBase) = 0;
};