#pragma once

#include "Spy.h"
#include "MilitaryBase.h"
#include "MilitaryObject.h"

class SecretAgent : public Spy
{
public:
    void visit(GeneralStaff& generalStaff) override
    {
        // Gather or steal secret information
        const std::vector<std::string>& secretPapers = generalStaff.getSecretPapers();
        std::cout << "Secret Agent collected " << secretPapers.size() << " secret papers." << std::endl;
    }

    void visit(MilitaryBase& militaryBase) override
    {
        // No action for secret agent in military base
        std::cout << "Secret Agent did not find any valuable information in the military base." << std::endl;
    }
};