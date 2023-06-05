#include <iostream>
#include "authenticator.h"


Authenticator::Authenticator()
{
    // Login and passwords for administrators
    adminsAccounts = {
        {"admin", "123qweASD"},
        {"administrator", "1234"}
    };

    // Login and passwords for users
    usersAccounts = {
        {"andrii", "1234"},
        {"black_knight", "S@ruman1"},
        {"white_knight", "ruman1"}
    };
}

void Authenticator::authenticate(const Account& account)
{
    Account::AccessType accessType = account.getAccessType();
    std::string userLogin = account.getLogin();
    std::string userPassword = account.getPassword();

    if (accessType == Account::AccessType::Guest)
    {
        std::cout << "Guest access provided!" << std::endl;
    }
    else if (accessType == Account::AccessType::User)
    {
        auto it = usersAccounts.find(userLogin);
        if (it != usersAccounts.end() && userPassword == it->second)
        {
            std::cout << "User access provided: " << userLogin << std::endl;
        }
        else
        {
            std::cout << "Access denied: " << userLogin << std::endl;
        }
    }
    else if (accessType == Account::AccessType::Administrator)
    {
        auto it = adminsAccounts.find(userLogin);
        if (it != adminsAccounts.end() && userPassword == it->second && userPassword.length() >= 8)
        {
            std::cout << "Administrator access provided: " << userLogin << std::endl;
        }
        else
        {
            std::cout << "Access denied: " << userLogin << std::endl;
        }
    }
}
