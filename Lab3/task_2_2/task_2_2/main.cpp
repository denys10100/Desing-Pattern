#include <iostream>

#include "HyundaiFactory.h"
#include "VolvoFactory.h"
#include "SkodaFactory.h"

#include "TransportCostCalculator.h"
int main()
{
    int numBuses = 50;
    int numTrams = 20;
    int numTrolleybuses = 30;
    int distance = 10000; // km

    TransportCostCalculator* calculator = new TransportCostCalculator(new VolvoFactory(), numBuses, numTrams, numTrolleybuses, distance);
    calculator->calculateCost();
    delete calculator;

    calculator = new TransportCostCalculator(new SkodaFactory(), numBuses, numTrams, numTrolleybuses, distance);
    calculator->calculateCost();
    delete calculator;

    calculator = new TransportCostCalculator(new HyundaiFactory(), numBuses, numTrams, numTrolleybuses, distance);
    calculator->calculateCost();
    delete calculator;

    return 0;
}
