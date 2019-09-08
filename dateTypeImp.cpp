#include "dateType.h"
#include <iostream>

using namespace std;

void dateType::setDate(int m, int d, int y)
{
	dMonth = m;
	dDay = d;
	dYear = y;

}

int dateType::getMonth() const
{
	return dMonth;
}

int dateType::getDay() const
{
	return dDay;
}

int dateType::getYear() const
{
	return dYear;
}

void dateType::printDate() const
{
	cout << dMonth << "-" << dDay << "-" << dYear;
}

dateType::dateType(int m, int d, int y)
{
	dMonth = m;
	dDay = d;
	dYear = y;
}