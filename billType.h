#pragma once

#ifndef billType_H
#define billType_H

using namespace std;

class billType
{
public:
	void setHospChrg(float h);
	void setPharmChrg(float p);
	void setDocChrg(float d);
	void setRoomChrg(float r);
	void setID(int id);

	float getHospChrg();
	float getPharmChrg();
	float getDocChrg();

	billType();
	billType(int, float, float, float, float);

private:
	int patID;
	float hospChrg;
	float pharmChrg;
	float docChrg;
	float roomChrg;
};

#endif // !billType_H