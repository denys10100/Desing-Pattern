#pragma once
#include <unordered_map>
#include "account.h"

class Authenticator
{
private:
    std::unordered_map<std::string, std::string> adminsAccounts;
    std::unordered_map<std::string, std::string> usersAccounts;

public:
    Authenticator();

    void authenticate(const Account& account);
};

