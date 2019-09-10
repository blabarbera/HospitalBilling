#include "doctorType.h"

using namespace std;

doctorType::doctorType(string fname, string lname, string spclty)
{
	setName(fname, lname);
	specialty = spclty;
}

void doctorType::setSpecialty(string s)
{
	specialty = s;
}

string doctorType::getSpec()
{
	return specialty;
}