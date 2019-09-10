#include "billType.h"

using namespace std;
 
void billType::setID(int id)
{
	patID = id;
}

void billType::setHospChrg(float h)
{
	hospChrg = h;
}

void billType::setPharmChrg(float p)
{
	pharmChrg = p;
}

void billType::setDocChrg(float d)
{
	docChrg = d;
}

void billType::setRoomChrg(float r)
{
	roomChrg = r;
}

billType::billType()
{
	setID(-1);
	setHospChrg(0.00);
	setPharmChrg(0.00);
	setDocChrg(0.00);
	setRoomChrg(0.00);
}

billType::billType(int id, float h, float p, float d, float r)
{
	setID(id);
	setHospChrg(h);
	setPharmChrg(p);
	setDocChrg(d);
	setRoomChrg(r);
}

float billType::getHospChrg()
{
	return hospChrg;
}

float billType::getPharmChrg()
{
	return pharmChrg;	
}

float billType::getDocChrg()
{
	return docChrg;
}