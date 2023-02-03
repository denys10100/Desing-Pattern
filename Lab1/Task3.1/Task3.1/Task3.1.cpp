
#include <iostream>
#include <string>

#include "CarSimulator.h"

int main()
{   
    CarSimulator cS("BMW", 15.2, 6.0, 100);
    
    cS.m_carBuilder.show(cS.getCar());
    return 0;
}

