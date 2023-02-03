#pragma once

#include "Car.h"
#include "CarBuilder.h"

class CarSimulator
{
public:
	Car m_car;
	CarBuilder m_carBuilder;

	CarSimulator(std::string mark = "None", double diametr = 0, double width = 0, int power = 0)
		: m_car(mark, diametr, width, power), m_carBuilder()
	{
	
	}

	Car& getCar() 
	{
		return m_car;
	}


};