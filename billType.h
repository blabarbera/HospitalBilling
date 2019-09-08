
class billType
{
public:
	void setHospChrg(float h);
	void setPharmChrg(float p);
	void setDocChrg(float d);
	void setRoomChrg(float r);
	void setID(int id);
	billType();
	billType(int, float, float, float, float);

private:
	int PatID;
	float hospChrg;
	float pharmChrg;
	float docChrg;
	float roomChrg;
};
