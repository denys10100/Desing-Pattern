#ifndef DATE_H
#define DATE_H

class Date
{

private:
	int m_day;
	int m_month;
	int m_year;

public:
	Date(int day, int month, int year)
		: m_day(day), m_month(month), m_year(year)
	{

	}

	int getDay() { return m_day; }
	int getMonth() { return m_month; }
	int getYear() { return m_year; }
};

#endif
