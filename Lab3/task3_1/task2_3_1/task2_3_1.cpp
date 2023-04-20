#include <iostream>
#include <string>
#include <vector>

#include "CoffeeShop.h"
#include "NespressoCoffeeFactory.h"

int main()
{
    srand(time(nullptr));

    // Create a coffee shop with a Nespresso factory
    CoffeeShop shop(new NespressoCoffeeFactory());

    // Set the profit goal
    shop.setProfitGoal(1000);

    // Run the coffee shop for 30 days
    shop.run(30);

    return 0;
}
