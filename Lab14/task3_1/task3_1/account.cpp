#include "account.h"

Account::Account(AccessType accessType, std::string login, std::string password)
    : accessType(accessType), login(login), password(password)
{
}

Account Account::createAdmin(std::string login, std::string password)
{
    return Account(AccessType::Administrator, login, password);
}

Account Account::createUser(std::string login, std::string password)
{
    return Account(AccessType::User, login, password);
}

Account Account::createGuest()
{
    return Account(AccessType::Guest, "guest", "");
}

AccessType Account::getAccessType() const
{
    return accessType;
}

std::string Account::getLogin() const
{
    return login;
}

std::string Account::getPassword() const
{
    return password;
}