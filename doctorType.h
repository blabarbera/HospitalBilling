#pragma once

#ifndef doctorType_H
#define doctorType_H

#include "personType.h"

using namespace std;

class doctorType: public personType
{
public:
	doctorType(string fname = "", string lname = "", string spclty = "");
	void setSpecialty(string s);
	string getSpec();

private:
	string specialty;
};

#endif // !doctorType_H