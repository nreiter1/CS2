#include "Car.h";
using namespace std;

Car::Car()
{

}

Car::~Car()
{

}

ostream& operator << (ostream& strm, const Car& car)
{
	strm << "Year:  " << car.yearModel << endl;
	strm << "Make:  " << car.make << endl;
	strm << "Speed: " << car.speed << endl;
	return strm;
}

istream& operator >> (istream& strm, Car& car)
{
	cout << "Year Model?: ";
	strm >> car.yearModel;
	cout << "Car Make?: ";
	strm >> car.make;
	car.speed = 0;
	return strm;
}

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
		if (accelerate < 0 && accelerate > 350)
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
		if (brake < 0 && brake > 350)
			cout << "Todays vehicles cannot handle that kind of braking power! Please enter a valid braking speed.\n\n";
			reset = -1;

	} while (reset > 0 && reset > 0);

	speed = (speed - brake);
	if (speed < 0)
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

Car::Car(const Car& other)
{
	yearModel = other.yearModel;
	make = other.make;
	speed = other.speed;
}

Car Car::operator = (const Car& other)
{
	yearModel = other.yearModel;
	make = other.make;
	speed = other.speed;
	return *this;
}

bool Car::operator== (const Car& other)
{
	return true;
}

int displaymenu() //Main Menu.
{
	int option;
	cout << "What data do you want to enter?" << endl;
	cout << "1 ... Accelerate\n";
	cout << "2 ... Brake\n";
	cout << "3 ... Check if two cars are equal(Car1 and Car2)\n";
	cout << "4 ... Set Two Cars Equal(Car1 and Car2)\n";
	cout << "5 ... Input Car 1 Info\n";
	cout << "6 ... Input Car 2 Info\n";
	cout << "7 ... View Car 1 Info\n";
	cout << "8 ... View Car 2 Info\n";
	cout << "10 ... Finished(Save Data)\n";
	cout << ": ";
	cin >> option;
	return option;
}
