#include <vector>
#include <iostream>
#include <string>


class GeneralStaff;
class MilitaryBase;

#include "MilitaryObject.h"
#include "GeneralStaff.h"

#include "MilitaryBase.h"
#include "SecretAgent.h"
#include "Saboteur.h"

int main()
{
    GeneralStaff generalStaff;
    MilitaryBase militaryBase;

    generalStaff.addSecretPaper("Secret Paper 1");
    generalStaff.addSecretPaper("Secret Paper 2");

    militaryBase.addPersonnel("Person 1");
    militaryBase.addPersonnel("Person 2");
    militaryBase.addEquipment("Equipment 1");
    militaryBase.addEquipment("Equipment 2");

    SecretAgent secretAgent;
    Saboteur saboteur;

    generalStaff.accept(secretAgent);
    generalStaff.accept(saboteur);

    militaryBase.accept(secretAgent);
    militaryBase.accept(saboteur);

    return 0;
}
