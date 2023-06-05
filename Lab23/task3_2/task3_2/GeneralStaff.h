#pragma once
#include "MilitaryObject.h"


class GeneralStaff : public MilitaryObject
{
private:
    std::vector<std::string> secretPapers;  // Secret papers stored in the general staff

public:
    void accept(Spy& spy) override
    {
        spy.visit(*this);
    }

    void addSecretPaper(const std::string& paper)
    {
        secretPapers.push_back(paper);
    }

    const std::vector<std::string>& getSecretPapers() const
    {
        return secretPapers;
    }
};