#include "account.h"
#include "authenticator.h"

int main()
{
    Authenticator authenticator;

    Account users[] = {
        Account::createAdmin("admin", "123qweASD"),
        Account::createAdmin("administrator", "1234"),
        Account::createUser("andrii", "1234"),
        Account::createGuest(),
        Account::createUser("black_knight", "S@ruman1"),
        Account::createUser("white_knight", "S111"),
        Account::createGuest()
    };

    for (const auto& user : users)
    {
        authenticator.authenticate(user);
    }

    return 0;
}
