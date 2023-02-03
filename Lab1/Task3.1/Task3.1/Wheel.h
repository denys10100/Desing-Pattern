#pragma once

class Wheel
{
private:
	double m_diametr;
	double m_width;

public:
	Wheel(double diametr = 0, double width = 0)
		: m_diametr(diametr), m_width(width)
	{

	}

	
	int getWidth() const
	{
		return m_width;
	}
};