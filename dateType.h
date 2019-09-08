#pragma once

#ifndef dateType_H
#define dateType_H

class dateType
{
public:
	void setDOB(int, int, int);
	void setAdmit(int, int, int);
	void setDisch(int, int, int);
	
	int getMonth() const;
	int getDay() const;
	int getYear() const;

	dateType(int = 1, int = 1, int = 1900);

private:
	int dMonth;
	int dDay;
	int dYear;
};

#endif
