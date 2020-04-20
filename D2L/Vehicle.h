#include <string>;
#include <iostream>;
#pragma once
using namespace std;
class Vehicle
{
protected:
	int _year;
	string _make;
	string _model;
	float _engine;
	int _cylinder;
	int _transmission;
	string _powertrain;
	string _vin;
	string _color;
	int _speed;
public:
	Vehicle();
	void setVehicleYear(int);
	void setVehicleMake(string);
	void setVehicleModel(string);
	void setVehicleEngine(float, int);
	void setVehiclePowertrain(int, string);
	void setVehicleVIN(string);
	void setVehicleColor(string);
	void setVehicleSpeed(int);
	Vehicle(const Vehicle&);
	~Vehicle();

	Vehicle operator = (const Vehicle&);
	bool operator == (const Vehicle&);
	friend ostream& operator << (ostream&, const Vehicle&);
	friend istream& operator >> (istream&, Vehicle&);

	int getYear();
	string getMake();
	string getModel();
	string getColor();
	float getEngine();
	int getCylinder();
	int getTransmission();
	string getPowertrain();
	string getVIN();

	int accelVehicle();
	int brakeVehicle();
};

int mainmenu();
int vehiclesearchmenu();