#pragma once

#ifndef dateType_H
#define dateType_H

class dateType
{
public:
	void setDate(int m, int d, int y);
	
	int getMonth() const;
	int getDay() const;
	int getYear() const;

	void printDate() const; 

	dateType(int = 1, int = 1, int = 1900);

private:
	int dMonth;
	int dDay;
	int dYear;
};

#endif
