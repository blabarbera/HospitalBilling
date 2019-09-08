#pragma once
#include "personType.h"

class doctorType: public personType
{
public:
	doctorType();
	void setSpecialty(string s);

private:
	string specialty;
};

