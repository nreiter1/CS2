#include <iostream>;
#include "DisplayMenu.h";
using namespace std;

void displayWeather(Weather& weather)
{
	cout << "Month: " << weather.name << " " << weather.year << endl;
	cout << "High: " << weather.high << "*F" << endl;
	cout << "Low: " << weather.low << "*F" << endl;
} 
//Display One Random Month

void displayOneMonth(vector<Weather>* weatherData)
{
	char oneMonth[15];
	char oneYear[5];

	cout << "Which month do you want data from?: ";
	cin >> oneMonth;
	cout << "From what year do you want " << oneMonth << " from?: ";
	cin >> oneYear;

	for (Weather weather : *weatherData)
	{
		if (oneMonth == weather.name, oneYear == weather.year)
		{
			displayWeather(weather);
		}
	}
	system("pause");
}

void displayOneYear(vector<Weather>* weatherData)
{
	char oneYear[5];

	cout << "Which year do you want data from?: ";
	cin >> oneYear;
	
	for (Weather weather : *weatherData)
	{
		if (oneYear == weather.year)
		{
			displayWeather(weather);
		}
	}
	system("pause");
}

void displayAllWeatherData(vector<Weather>* weatherList)
{
	for (Weather weather : *weatherList)
	{
		displayWeather(weather);
	}
	system("pause");
}

float findHigh(vector<Weather>* weatherData)
{
	//Find highest temp in vector
	float highTemp = -200;
	for (Weather month : *weatherData)
	{
		if (month.high > highTemp)
			highTemp = month.high;
	}
	return highTemp;
}

float findLow(vector<Weather>* weatherData)
{
	//Find lowest temp in vector
	float lowTemp = 1000;
	for (Weather month : *weatherData)
	{
		if (month.low < lowTemp)
			lowTemp = month.low;
	}
	return lowTemp;
}

float avgHigh(vector<Weather>* weatherData)
{
	//Find average high
	float totalTemp = 0;
	int count = 0;
	for (Weather month : *weatherData)
	{
		totalTemp += month.high;
		count++;
	}
	return (totalTemp / count);
}

float avgLow(vector<Weather>* weatherData)
{
	//Find average lowh
	float totalTemp = 0;
	int count = 0;
	for (Weather month : *weatherData)
	{
		totalTemp += month.low;
		count++;
	}
	return (totalTemp / count);
}

void getWeatherData(vector<Weather>* WD)
{
	//Get data from user
	bool more = true;
	char choice = NULL;
	while (more)
	{
		Weather tmpWeather;
		cout << "Enter the name of the month: ";
		cin >> tmpWeather.name;
		cout << "Enter the year for that month: ";
		cin >> tmpWeather.year;
		cout << "High: ";
		cin >> tmpWeather.high;
		cout << "Low: ";
		cin >> tmpWeather.low;
		cout << "Do you want to save this data? (y: yes or n: no):";
		cin >> choice;
		if (choice == 'y')
		{
			WD->push_back(tmpWeather);
		}
		cout << endl << "Load more data? (y: yes or n: no): ";
		cin >> choice;
		if (choice == 'n')
			more = false;
	}
}

int displaymenu() //Main Menu.
{
	system("CLS");
	int option;
	cout << "1 ... Initialize Application\n";
	cout << "2 ... Load Data\n";
	cout << "3 ... Enter Weather Data\n";
	cout << "4 ... Enter weather data for 1 month\n";
	cout << "5 ... Display One Month\n";
	cout << "6 ... Display One Year\n";
	cout << "7 ... Display All Data\n";
	cout << "8 ... Sort Data\n";
	cout << "9 ... Save Data\n";
	cout << "14 ... Application Status\n";
	cout << "15 ... Display Summary Data (Highest, Lowest, and Average Temps)\n";
	cout << "20 ... Exit Application\n";
	cout << "\nChoose: ";
	cin >> option;
	return option;
}


void writeWeatherData(vector<Weather>* WD)
{
	//Writes data to file
	string filename;

	cout << endl << "Enter output file name(including the type of file(Ex: .txt)): ";
	cin >> filename;
	ofstream outFile("F:\\Computer Science\\CS2\\CS2\\CS2" + filename, ios::in | ios::binary); //Writes in binary.
	if (outFile)
	{
		for (Weather weather : *WD)
			outFile.write(reinterpret_cast<char*>(&weather), sizeof(Weather)); //Looks at pointer and then writes to file.
	}
	outFile.close();
}

void readWeatherData(vector<Weather>* WD)
{
	//clears vector and imports data from file
	string filename;
	Weather weather;
	int recordCount = 0;
	WD->clear(); //delete data in vector

	cout << endl << "Enter input file name: ";
	cin >> filename;
	ifstream inFile("F:\\Computer Science\\CS2\\CS2\\CS2" + filename, ios::in | ios::binary);
	if (inFile)
	{
		while (!(inFile.eof()))
		{
			inFile.read(reinterpret_cast<char*>(&weather), sizeof(Weather));
			WD->push_back(weather);
			inFile.peek(); //See if search is at end of file
			recordCount++;
		}
	}
	cout << "Records Loaded: " << recordCount << endl;
	system("pause");
	inFile.close();
}

void totalWeatherObjects(vector<Weather>* weatherData)
{
	int totalCount = 0;
	
	for (Weather weather : *weatherData)
	{
		totalCount++;
	}

	cout << "Total Weather Objects: " << totalCount << endl;
}

//Weather getSingleMonth(int index)
//{
//	// sets file position based on location of weather object
//	Weather weather;
//	string filename;
//
//	cout << endl << "Enter input file name: ";
//	cin >> filename;
//	ifstream inFile("F:\\Computer Science\\CS2\\CS2\\CS2" + filename, ios::in | ios::binary);
//	if (inFile)
//	{
//		inFile.seekg((long)(index * sizeof(Weather)), ios::beg);
//		cout << "Pos: " << inFile.tellg() << "   " << "Weather Size: " << sizeof(Weather) << endl;
//		inFile.read(reinterpret_cast<char*> (&weather), sizeof(Weather));
//		inFile.close(); //Error in place
//
//	}
//}