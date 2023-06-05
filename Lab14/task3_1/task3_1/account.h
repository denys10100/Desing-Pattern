#pragma once
#include <string>

enum class AccessType
{
    Administrator,
    Guest,
    User
};

class Account
{
private:
    AccessType accessType;
    std::string login;
    std::string password;

    Account(AccessType accessType, std::string login, std::string password);

public:
    static Account createAdmin(std::string login, std::string password);
    static Account createUser(std::string login, std::string password);
    static Account createGuest();

    AccessType getAccessType() const;
    std::string getLogin() const;
    std::string getPassword() const;
};

