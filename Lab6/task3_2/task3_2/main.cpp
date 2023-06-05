#include <iostream>
#include <string>


#include "Director.h"
#include "EngineBuilder.h"
#include "WheelBuilder.h"
#include "TransmissionBuilder.h"


int main()
{
    
    Director& director = Director::getInstance("John Doe");

    
    director.buildCar();

    EngineBuilder engineBuilder;
    engineBuilder.buildEngine();

    WheelBuilder wheelBuilder;
    wheelBuilder.buildWheels();

    TransmissionBuilder transmissionBuilder;
    transmissionBuilder.buildTransmission();

    return 0;
}
