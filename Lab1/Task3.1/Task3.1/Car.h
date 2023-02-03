#pragma once

#include "Engine.h"
#include "Wheel.h"

class Car
{
public:
	std::string m_mark = "None";
	Wheel m_wheel;
	Engine m_engine;


	Car(std::string mark, double diametr = 0, double width = 0, int power = 0)
		: m_mark(mark), m_wheel(diametr, width), m_engine(power)
	{

	}

	std::string getMark()
	{
		return m_mark;
	}
};