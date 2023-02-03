#pragma once

class Engine
{
private:
	int horse_power;

public:
	Engine(int power = 0)
		: horse_power(power)
	{

	}



	int getPower() const
	{
		return horse_power;
	}
};