#include "Vehicle.h";
using namespace std;

Vehicle::Vehicle()
{

}

Vehicle::~Vehicle()
{

}

ostream& operator << (ostream& strm, const Vehicle& vehicle)
{
	strm << "Year:       " << vehicle._year << endl;
	strm << "Make:       " << vehicle._make << endl;
	strm << "Model:      " << vehicle._model << endl;
	strm << "Engine:     " << vehicle._engine << "L V" << vehicle._cylinder << endl;
	strm << "Powertrain: " << vehicle._transmission << " Speed " << vehicle._powertrain << endl;
	strm << "VIN:        " << vehicle._vin << endl;
	strm << "Color       " << vehicle._color << endl;
	strm << "Speed: " << vehicle._speed << endl;
	return strm;
}

istream& operator >> (istream& strm, Vehicle& vehicle)
{	
	cout << "Year?: ";
	strm >> vehicle._year;
	cout << "Make?: ";
	strm >> vehicle._make;
	cout << "Model?: ";
	strm >> vehicle._model;
	cout << "Engine Size/Liter(Ex: 3.3 or 5.3)?: ";
	strm >> vehicle._engine;
	cout << "Engine Cylinder(Ex: 4 or 6)?: ";
	strm >> vehicle._cylinder;
	cout << "Transmission Speed?(Ex: 3 or 4): ";
	strm >> vehicle._transmission;
	cout << "Powertrain?(Ex: All-Wheel or Front-Wheel): ";
	strm >> vehicle._powertrain;
	cout << "VIN?: ";
	strm >> vehicle._vin;
	cout << "Color? ";
	strm >> vehicle._color;
	vehicle._speed = 0;

	cout << "\n";
	if (vehicle._year <= 0)
		cout << "\nYear CANNOT be negative!\n";
	if (vehicle._engine <= 0)
		cout << "Engine size CANNOT be negative!\n";
	if (vehicle._cylinder <= 0)
		cout << "Engine cylinders CANNOT be negative!\n";
	if (vehicle._transmission <= 0)
		cout << "Transmission speed CANNOT be negative!\n";

	if (vehicle._year <= 0)
	{
		string excepYear = "\nData Input Error! Please check above errors! (Code 1)\n\n";
		throw excepYear;
	}
	if (vehicle._engine <= 0)
	{
		string excepEngine = "\nData Input Error! Please check above errors! (Code 1)\n\n";
		throw excepEngine;
	}
	if (vehicle._cylinder <= 0)
	{
		string excepCylinder = "\nData Input Error! Please check above errors! (Code 1)\n\n";
		throw excepCylinder;
	}	
	if (vehicle._transmission <= 0)
	{
		string excepTransmission = "\nData Input Error! Please check above errors! (Code 1)\n\n";
		throw excepTransmission;
	}
	else
		return strm;
}

//***Vehicle Information

void Vehicle::setVehicleYear(int Year)
{
	_year = Year;
}

void Vehicle::setVehicleMake(string Make)
{
	_make = Make;
}

void Vehicle::setVehicleModel(string Model)
{
	_model = Model;
}

void Vehicle::setVehicleEngine(float Engine, int Cylinder)
{
	_engine = Engine;
	_cylinder = Cylinder;
}

void Vehicle::setVehiclePowertrain(int Transmission, string Powertrain)
{
	_transmission = Transmission;
	_powertrain = Powertrain;
}

void Vehicle::setVehicleVIN(string VIN)
{
	_vin = VIN;
}

void Vehicle::setVehicleColor(string Color)
{
	_color = Color;
}

void Vehicle::setVehicleSpeed(int Speed)
{
	_speed = Speed;
}

//***Vehicle Speed Modification

int Vehicle::accelVehicle()
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

	_speed = (_speed + accelerate);

	cout << "Current Car Speed: " << _speed << " mph" << endl;

	return _speed;
}

int Vehicle::brakeVehicle()
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

	_speed = (_speed - brake);
	if (_speed < 0)
	{
		_speed = 0;
		cout << "Speed cannot be negative. Therefore, current speed is 0" << endl;
	}
	else
	{
		cout << "Current Car Speed: " << _speed << " mph" << endl;
	}
	return _speed;
}

//***

Vehicle::Vehicle(const Vehicle& other)
{
	_year = other._year;
	_make = other._make;
	_model = other._model;
	_engine = other._engine;
	_cylinder = other._cylinder;
	_transmission = other._transmission;
	_powertrain = other._powertrain;
	_vin = other._vin;
	_color = other._color;
	_speed = other._speed;
}

Vehicle Vehicle::operator = (const Vehicle& other)
{
	_year = other._year;
	_make = other._make;
	_model = other._model;
	_engine = other._engine;
	_cylinder = other._cylinder;
	_transmission = other._transmission;
	_powertrain = other._powertrain;
	_vin = other._vin;
	_color = other._color;
	_speed = other._speed;
	return *this;
}

bool Vehicle::operator== (const Vehicle& other)
{
	if (_vin == other._vin)
		return true;
	else
		return false;
}

//***Search

int Vehicle::getYear()
{
	return _year;
}

string Vehicle::getMake()
{
	return _make;
}

string Vehicle::getModel()
{
	return _model;
}

string Vehicle::getColor()
{
	return _color;
}

float Vehicle::getEngine()
{
	return _engine;
}

int Vehicle::getCylinder()
{
	return _cylinder;
}

int Vehicle::getTransmission()
{
	return _transmission;
}

string Vehicle::getPowertrain()
{
	return _powertrain;
}

string Vehicle::getVIN()
{
	return _vin;
}

//***Main Menu

int mainmenu() //Main Menu.
{
	int option;
	cout << "What data do you want to enter?" << endl;
	cout << "1  ... Accelerate Vehicle 1\n";
	cout << "2  ... Accelerate Vehicle 2\n";
	cout << "3  ... Brake Vehicle 1\n";
	cout << "4  ... Brake Vehicle 2\n";
	cout << "5  ... Check if both vehicles are equal(Vehicle 1 and Vehicle 2)\n";
	cout << "6  ... Set Both Vehicles Equal(Vehicle 1 and Vehicle 2)\n";
	cout << "7  ... Input Vehicle 1 Info\n";
	cout << "8  ... Input Vehicle 2 Info\n";
	cout << "9  ... View Vehicle 1 Info\n";
	cout << "10 ... View Vehicle 2 Info\n";
	cout << "11 ... Find Vehicle Info (Not Available)\n";
	cout << "12 ... Finished(Save Data)\n";
	cout << ": ";
	cin >> option;
	return option;
}

int vehiclesearchmenu() //Beta
{
	int option;
	cout << "What vehicle data do you want to find?" << endl;
	cout << "1 ... Year, Make, Model, and Color\n";
	cout << "2 ... Engine and Powertrain\n";
	cout << "3 ... Vehicle Identification Number (VIN)\n";
	cout << "4 ... Semi Information\n";
	cout << "5 ... Exit\n";
	cout << ": ";
	cin >> option;
	return option;
}
