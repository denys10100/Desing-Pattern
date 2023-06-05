#include <iostream>
#include <string>


#include "Espresso.h"
#include "DarkRoast.h"
#include "Decaf.h"
//#include "CondimentDecorator.h"
#include "Milk.h"
#include "Sugar.h"
#include "Cream.h"

int main()
{
    Beverage* espressoWithSugar = new Sugar(new Sugar(new Espresso()));
    std::cout << "Description: " << espressoWithSugar->description() << std::endl;
    std::cout << "Cost: $" << espressoWithSugar->cost() << std::endl;

    Beverage* darkRoastWithCreamAndSugar = new Cream(new Sugar(new DarkRoast()));
    std::cout << "Description: " << darkRoastWithCreamAndSugar->description() << std::endl;
    std::cout << "Cost: $" << darkRoastWithCreamAndSugar->cost() << std::endl;

    Beverage* decafWithMilkAndSugar = new Milk(new Sugar(new Decaf()));
    std::cout << "Description: " << decafWithMilkAndSugar->description() << std::endl;
    std::cout << "Cost: $" << decafWithMilkAndSugar->cost() << std::endl;

    delete espressoWithSugar;
    delete darkRoastWithCreamAndSugar;
    delete decafWithMilkAndSugar;

    return 0;
}
