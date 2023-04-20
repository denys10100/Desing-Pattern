#pragma once

#include <iostream>
#include "CoffeeMachineFactory.h"
#include "CoffeeMachine.h"
class CoffeeShop
{
public:
    CoffeeShop(CoffeeMachineFactory* factory) : factory(factory) {}

    void setProfitGoal(double goal)
    {
        profitGoal = goal;
    }

    void run(int numDays)
    {
        double totalProfit = 0;
        for (int i = 0; i < numDays; i++)
        {
            // Get a random drink order
            Coffee* drink = getRandomDrink();

            // Use the coffee machine factory to get the appropriate coffee machine
            CoffeeMachineFactory* machine = factory->createMachine(drink->getCoffeeType());

            // Make the drink and calculate the profit
            double costPrice = drink->getCost();
            double sellingPrice = drink->getPrice();
            double profit = sellingPrice - costPrice - machine->getCost() - machine->getMaintenanceCost();
            totalProfit += profit;

            // Display the order and profit
            std::cout << "Day " << (i + 1) << ": " << drink->getCoffeeMachineModel() << ", profit: " << profit << std::endl;

            // Clean up memory
            delete drink;
            delete machine;

            // Check if profit goal has been reached
            if (totalProfit >= profitGoal)
            {
                std::cout << "Profit goal reached after " << (i + 1) << " days." << std::endl;
                break;
            }
        }
    }

private:
    CoffeeMachineFactory* factory;
    double profitGoal = 0;

    Coffee* getRandomDrink()
    {
        int choice = rand() % 4;  // Choose a random drink type
        switch (choice)
        {
        case 0: return new Espresso();
        case 1: return new Americano();
        case 2: return new Cappuccino();
        case 3: return new Latte();
        }
        return nullptr;  // Should never happen
    }
};

