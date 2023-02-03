#pragma once

class CarBuilder
{
public:
	CarBuilder()
	{

	}

	void show(Car& car) const
	{
		std::cout << " Mark " << car.m_mark
			<< " Power " << car.m_engine.getPower()
			<< " width wheel " << car.m_wheel.getWidth();
	}

};