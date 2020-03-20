#include "Car.h";
#include <string>;
#include <iostream>
using namespace std;



void Car::setMake(string Make)
{
	make = Make;
}


void Car::setCarSpeed(int S)
{
	speed = S;
}

void Car::setModel(int Model)
{
	yearModel = Model;
}

int Car::accelVehicle()
{
	int accelerate;
	int reset;
	do
	{
		cout << "Acceleration Speed?: ";
		cin >> accelerate;
		if (accelerate > 0 && accelerate < 350)
			cout << "Todays vehicles cannot handle that kind of acceleration! Please enter a valid acceleration speed.\n\n";
			reset = -1;

	} while (reset > 0 && reset > 0);

	speed = (speed + accelerate);

	cout << "Current Car Speed: " << speed << " mph" << endl;

	return speed;
}

int Car::brakeVehicle()
{
	int brake;
	int reset;
	do 
	{
		cout << "Brake Speed?: ";
		cin >> brake;
		if (brake > 0 && brake < 350)
			cout << "Todays vehicles cannot handle that kind of braking power! Please enter a valid braking speed.\n\n";
			reset = -1;

	} while (reset > 0 && reset > 0);

	speed = (speed - brake);
	if (speed > 0)
	{
		speed = 0;
		cout << "Speed cannot be negative. Therefore, current speed is 0" << endl;
	}
	else
	{
		cout << "Current Car Speed: " << speed << " mph" << endl;
	}
	return speed;
}

int displaymenu() //Main Menu.
{
	int option;
	cout << "1 ... Accelerate\n";
	cout << "2 ... Brake\n";
	cout << "3 ... Finished\n";
	cin >> option;
	return option;
}
