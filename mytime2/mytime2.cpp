#include <iostream>
#include "mytime2.h"
using namespace std;

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours +=  minutes / 60;
	minutes %= 60;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time Time::operator+(const Time & t)const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator-(const Time & t)const
{
	Time diff;
	int tot1, tot2;
	tot1 = minutes + hours*60;
	tot2 = t.minutes + t.hours * 60;
	diff.hours = (tot1 - tot2) / 60;
	diff.minutes = (tot1 - tot2) % 60;
	return diff;
}

Time Time::operator*(double n)const
{
	Time result;
	long totalminutes = hours*n * 60 + minutes*n;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}

void Time::Show() const
{
	cout << hours << " hours, " << minutes << " minutes";
}