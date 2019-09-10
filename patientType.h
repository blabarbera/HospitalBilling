#pragma once

#ifndef patientType_H
#define patientType_H

using namespace std;

#include "personType.h"
#include "dateType.h"
#include "doctorType.h"

using namespace std;

class patientType: public personType
{
public:
	patientType(string fname, string lname, int patID, int age, dateType DOB, dateType AdmitDate, dateType DischDate, doctorType PhysName);
	patientType();

	void setPatID(int ID);
	void setAge(int a);
	void setDOB(dateType d);
	void setAdmitDate(dateType ad);
	void setDischDate(dateType dd);
	void setPhysName(doctorType pn);

	int getPatID();
	int getAge();
	dateType getDOB();
	dateType getAdmitDate();
	dateType getDischDate();
	string getPhysName();


private:
	int patID;
	int age;
	
	dateType DOB;
	dateType AdmitDate;
	dateType DischDate;
	doctorType PhysName;
};

#endif // !patientType_H