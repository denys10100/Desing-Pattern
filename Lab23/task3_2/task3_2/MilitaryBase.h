#pragma once
#include "MilitaryObject.h"

class MilitaryBase : public MilitaryObject
{
private:
    std::vector<std::string> personnel;  // Personnel of the military base
    std::vector<std::string> equipment;  // Equipment of the military base

public:
    void accept(Spy& spy) override
    {
        spy.visit(*this);
    }

    void addPersonnel(const std::string& person)
    {
        personnel.push_back(person);
    }

    void addEquipment(const std::string& item)
    {
        equipment.push_back(item);
    }

    const std::vector<std::string>& getPersonnel() const
    {
        return personnel;
    }

    const std::vector<std::string>& getEquipment() const
    {
        return equipment;
    }
};
