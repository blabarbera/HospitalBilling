#include <iostream>	
#include "patientType.h"

using namespace std;

patientType::patientType(string fname, string lname, int ID, int patAge, dateType patDOB, dateType patADate, dateType patDDate, doctorType docName)
{
	setName(fname, lname);
	patID = ID;
	age = patAge;
	DOB = patDOB;
	AdmitDate = patADate;
	DischDate = patDDate;
	PhysName = docName;
}

patientType::patientType()
{
	setName("Billy", "Bob");
	patID = 1;
	age = 137;
}

void patientType::setPatID(int ID)
{
	patID = ID;
}

void patientType::setAge(int a)
{
	age = a;
}

void patientType::setDOB(dateType d)
{
	DOB = d;
}

void patientType::setAdmitDate(dateType ad)
{
	AdmitDate = ad;
}

void patientType::setDischDate(dateType dd)
{
	DischDate = dd;
}

void patientType::setPhysName(doctorType pn)
{
	PhysName = pn;
}

int patientType::getPatID()
{
	return patID;
}

int patientType::getAge()
{
	return age;	
}

dateType patientType::getDOB()
{
	return DOB;
}

dateType patientType::getAdmitDate()
{
	return AdmitDate;
}

dateType patientType::getDischDate()
{
	return DischDate;
}

string patientType::getPhysName()
{
	return PhysName.getFirstName().append(" " + PhysName.getLastName());
}