#include "Semi.h"

Semi::Semi()
{

}

Semi::~Semi()
{

}

//***Accessors

void Semi::setSemiYear(int Year)
{
	_year = Year;
}

void Semi::setSemiMake(string Make)
{
	_make = Make;
}

void Semi::setSemiModel(string Model)
{
	_model = Model;
}

void Semi::setSemiEngine(float Engine, int Cylinder)
{
	_engine = Engine;
	_cylinder = Cylinder;
}

void Semi::setSemiPowertrain(int Transmission, string Powertrain)
{
	_transmission = Transmission;
	_powertrain = Powertrain;
}

void Semi::setSemiVIN(string VIN)
{
	_vin = VIN;
}

void Semi::setSemiColor(string Color)
{
	_color = Color;
}

void Semi::setSemiSpeed(int Speed)
{
	_speed = Speed;
}

void Semi::setSemiType(string SemiType)
{
	_semiType = SemiType;
}

void Semi::setSemiTowingCapacity(int TowingCapacity)
{
	_towingCapacity = TowingCapacity;
}

//***Semi Information Constructor

Semi::Semi(int Year, string Make, string Model, float Engine, int Cylinder, int Transmission, string Powertrain, string VIN, string Color, int Speed,
	string SemiType, int TowingCapacity)
{
	_year = Year;
	_make = Make;
	_model = Model;
	_engine = Engine;
	_cylinder = Cylinder;
	_transmission = Transmission;
	_powertrain = Powertrain;
	_vin = VIN;
	_color = Color;
	_speed = Speed;
	_semiType = SemiType;
	_towingCapacity = TowingCapacity;
}

//***Semi Equaling

Semi::Semi(const Semi& other)
{
	_year = other._year;
	_make = other._make;
	_model = other._model;
	_engine = other._engine;
	_cylinder = other._cylinder;
	_transmission = other._transmission;
	_powertrain = other._powertrain;
	_vin = other._vin;
	_color = other._vin;
	_speed = other._speed;
	_semiType = other._semiType;
	_towingCapacity = other._towingCapacity;
}

Semi Semi::operator = (const Semi& other)
{
	_year = other._year;
	_make = other._make;
	_model = other._model;
	_engine = other._engine;
	_cylinder = other._cylinder;
	_transmission = other._transmission;
	_powertrain = other._powertrain;
	_vin = other._vin;
	_color = other._vin;
	_speed = other._speed;
	_semiType = other._semiType;
	_towingCapacity = other._towingCapacity;
	return *this;
}

bool Semi::operator == (const Semi& other)
{
	if (_vin == other._vin && _semiType == other._semiType)
		return true;
	else
		return false;
}

//***Input/Output Data

ostream& operator << (ostream& strm, const Semi& semi)
{
	strm << "Year:          " << semi._year << endl;
	strm << "Make:          " << semi._make << endl;
	strm << "Model:         " << semi._model << endl;
	strm << "Engine:        " << semi._engine << "L V" << semi._cylinder << endl;
	strm << "Powertrain:    " << semi._transmission << " Speed " << semi._powertrain << endl;
	strm << "VIN:           " << semi._vin << endl;
	strm << "Color          " << semi._color << endl;
	strm << "Speed:         " << semi._speed << endl << endl;
	strm << "Semi Type:     " << semi._semiType << endl;
	strm << "Towing Capacity" << semi._towingCapacity << endl << endl;
	return strm;
}

istream& operator >> (istream& strm, Semi& semi)
{
	cout << "Year?: ";
	strm >> semi._year;
	cout << "Make?: ";
	strm >> semi._make;
	cout << "Model?: ";
	strm >> semi._model;
	cout << "Engine Liter(Ex: 3.3 or 5.3)?: ";
	strm >> semi._engine;
	cout << "Engine Cylinders?(Ex: 3 or 6): ";
	strm >> semi._cylinder;
	cout << "Transmission Speed?(Ex: 3 or 4): ";
	strm >> semi._transmission;
	cout << "Powertrain?(Ex: All-Wheel or Front-Wheel): ";
	strm >> semi._powertrain;
	cout << "VIN?: ";
	strm >> semi._vin;
	cout << "Color? ";
	strm >> semi._color;
	semi._speed = 0;
	cout << "Semi Type?: ";
	strm >> semi._semiType;
	cout << "Towing Capacity?: ";
	strm >> semi._towingCapacity;
	return strm;
}

//***Search

int Semi::sgetYear()
{
	return _year;
}

string Semi::sgetMake()
{
	return _make;
}

string Semi::sgetModel()
{
	return _model;
}

string Semi::sgetColor()
{
	return _color;
}

float Semi::sgetEngine()
{
	return _engine;
}

int Semi::sgetCylinder()
{
	return _cylinder;
}

int Semi::sgetTransmission()
{
	return _transmission;
}

string Semi::sgetPowertrain()
{
	return _powertrain;
}

string Semi::sgetVIN()
{
	return _vin;
}

string Semi::sgetSemiType()
{
	return _semiType;
}

int Semi::sgetSemiTowingCapacity()
{
	return _towingCapacity;
}