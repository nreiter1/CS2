#pragma once
#include "Vehicle.h";
#include <string>;
using namespace std;

class Semi : public Vehicle
{
private:
	string _semiType;
	int _towingCapacity;
public:
	Semi();
	Semi(int, string, string, float, int, int, string, string, string, int,
		string, int);
	Semi(const Semi&);
	void setSemiYear(int);
	void setSemiMake(string);
	void setSemiModel(string);
	void setSemiEngine(float, int);
	void setSemiPowertrain(int, string);
	void setSemiVIN(string);
	void setSemiColor(string);
	void setSemiSpeed(int);
	void setSemiType(string);
	void setSemiTowingCapacity(int);
	~Semi();

	Semi operator = (const Semi&);
	bool operator == (const Semi&);
	friend ostream& operator << (ostream&, const Semi&);
	friend istream& operator >> (istream&, Semi&);

	int sgetYear();
	string sgetMake();
	string sgetModel();
	string sgetColor();
	float sgetEngine();
	int sgetCylinder();
	int sgetTransmission();
	string sgetPowertrain();
	string sgetVIN();
	string sgetSemiType();
	int sgetSemiTowingCapacity();
};