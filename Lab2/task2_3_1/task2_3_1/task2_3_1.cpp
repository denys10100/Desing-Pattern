#include <iostream>
#include <string>
#include <vector>

#include "Shop.h"

int main()
{
    auto shop = std::make_unique<Shop>();

    shop->addCoffeeFactory(std::make_unique<EspressoFactory>());
    shop->addCoffeeFactory(std::make_unique<AmericanoFactory>());
    shop->addCoffeeFactory(std::make_unique<CappuccinoFactory>());
    shop->addCoffeeFactory(std::make_unique<LatteFactory>());

    auto coffee1 = shop->orderCoffee("Espresso");
    auto coffee2 = shop->orderCoffee("Cappuccino");

    std::cout << "Coffee 1: " << coffee1->getType() << ", price: " << coffee1->getPrice() << std::endl;
    std::cout << "Coffee 2: " << coffee2->getType() << ", price: " << coffee2->getPrice() << std::endl;

    std::cout << "Total profit: " << shop->getProfit() << std::endl;

    return 0;
}
