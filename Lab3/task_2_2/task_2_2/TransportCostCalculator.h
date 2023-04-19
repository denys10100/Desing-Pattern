#pragma once
#include <iostream>
#include "HyundaiFactory.h"
#include "VolvoFactory.h"
#include "SkodaFactory.h"


class TransportCostCalculator
{
public:
    TransportCostCalculator(MarkFactory* factory, int numBuses, int numTrams, int numTrolleybuses, int distance)
        : factory(factory), numBuses(numBuses), numTrams(numTrams), numTrolleybuses(numTrolleybuses), distance(distance)
    {
    }

    void calculateCost()
    {
        Bus* bus = factory->createBus();
        Tram* tram = factory->createTram();
        Trolleybus* trolleybus = factory->createTrolleybus();

        double purchaseCost = bus->getPurchaseCost() * numBuses +
            tram->getPurchaseCost() * numTrams +
            trolleybus->getPurchaseCost() * numTrolleybuses;
        double operatingCost = (bus->getOperatingCost() + tram->getOperatingCost() + trolleybus->getOperatingCost()) / 3.0;

        double totalCost = purchaseCost + operatingCost * distance;

        std::cout << "Total cost for " << numBuses << " buses, " << numTrams << " trams, and " << numTrolleybuses << " trolleybuses:\n";
        std::cout << "Purchase cost: " << purchaseCost << " dollars\n";
        std::cout << "Operating cost: " << operatingCost << " dollars per km\n";
        std::cout << "Total cost: " << totalCost << " dollars\n";

        delete bus;
        delete tram;
        delete trolleybus;
    }


};

