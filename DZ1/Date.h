#pragma once
#include <iostream>  
using namespace std;

class Date
{
	unsigned int mo, da, yr;
public:
	Date() { mo = 0, da = 0, yr = 0; };
	Date(unsigned int d, unsigned int m, unsigned int y)
	{
		mo = m; da = d; yr = y;
	}
	friend ostream& operator<<(ostream& os, const Date& dt);
	friend istream &operator >> (istream& in, Date &d);
	bool operator== (Date d1) //оператор сравнения
	{
		if (d1.da == da&&d1.mo == mo&&d1.yr == yr)		
		{	return true;	}
		else
		{	return false;	}
	}
	unsigned int getDay()	{	return da;	}	
	unsigned int getMonth()	{	return mo;	}
	unsigned int getYear()	{	return yr;	}
	Date(const Date &obj) //оператор копирования
	{
		this->da = obj.da;
		this->mo = obj.mo;
		this->yr = obj.yr;
	}
};

ostream& operator<<(ostream& os, const Date& dt)
{
	os << dt.da << '.' << dt.mo << '.' << dt.yr;
	return os;
}
istream &operator >> (istream& in, Date &d)
{
	char c;
	in >> d.da>>c >> d.mo>>c >> d.yr;
	return in;
}