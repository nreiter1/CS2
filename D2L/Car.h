#pragma once
using namespace std;
class Car
{
private:
	int yearModel;
	int speed;
	string make;
public:
	void setCarSpeed(int);
	void setMake(string);
	void setModel(int);

	int accelVehicle();
	int brakeVehicle();
};

int displaymenu();