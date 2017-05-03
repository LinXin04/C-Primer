#include <iostream>
#include "mytime3.h"
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
	hours += minutes / 60;
	minutes = minutes % 60;
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
	long tot1, tot2;
	tot1 = minutes + hours * 60;
	tot2 = t.minutes + t.hours * 60;
	diff.hours = (tot1 - tot2) / 60;
	diff.minutes = (tot1 - tot2) % 60;
	return diff;
}

Time Time::operator*(double n)const
{
	Time result;
	result.minutes = minutes*n + hours * 60 * n;
	result.hours = result.minutes / 60;
	result.minutes %= 60;
	return result;
}

ostream & operator<<(ostream & os, const Time & t)
{
	os << t.hours << " hours, " << t.minutes << " minutes ";
	return os;
}