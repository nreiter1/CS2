#include <string>;
#include <iostream>;
#pragma once
using namespace std;
class Car
{
private:
	int yearModel;
	int speed;
	string make;
public:
	Car();
	void setCarSpeed(int);
	void setMake(string);
	void setModel(int);
	Car(const Car&);
	~Car();

	Car operator = (const Car&);
	bool operator == (const Car&);
	friend ostream& operator << (ostream&, const Car&);
	friend istream& operator >> (istream&, Car&);

	int accelVehicle();
	int brakeVehicle();
};

int displaymenu();