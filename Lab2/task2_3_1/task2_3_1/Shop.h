#pragma once

#include "CoffeeFactory.h"
#include "AmericanoFactory.h"
#include "CappuccinoFactory.h"
#include "EspressoFactory.h"
#include "LatteFactory.h"

#include <vector>

class Shop
{
public:
    void addCoffeeFactory(std::unique_ptr<CoffeeFactory> factory)
    {
        coffeeFactories.push_back(std::move(factory));
    }

    std::unique_ptr<Coffee> orderCoffee(const std::string& type)
    {
        for (auto& factory : coffeeFactories)
        {
            auto coffee = factory->createCoffee();
            if (coffee->getType() == type)
            {
                double price = coffee->getPrice();
                double profit = price - cost;
                totalProfit += profit;
                return coffee;
            }
        }
        return nullptr;
    }

    double getProfit() const
    {
        return totalProfit;
    }

private:
    std::vector<std::unique_ptr<CoffeeFactory>> coffeeFactories;
    double cost = 0.5;
    double totalProfit = 0.0;
};