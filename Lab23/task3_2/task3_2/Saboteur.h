#pragma once

#include "Spy.h"
#include "MilitaryBase.h"
#include "SecretAgent.h"
class Saboteur : public Spy
{
public:
    void visit(GeneralStaff& generalStaff) override
    {
        // No action for saboteur in general staff
        std::cout << "Saboteur did not find any valuable information in the general staff." << std::endl;
    }

    void visit(MilitaryBase& militaryBase) override
    {
        // Destroy secret documentation, personnel, and equipment
        const std::vector<std::string>& personnel = militaryBase.getPersonnel();
        const std::vector<std::string>& equipment = militaryBase.getEquipment();

        std::cout << "Saboteur destroyed " << personnel.size() << " personnel and " << equipment.size()
            << " pieces of equipment in the military base." << std::endl;
    }
};