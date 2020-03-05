#include <iostream>;
#include "DisplayMenu.h";
using namespace std;


void displayWeather(Weather& weather)
{
	cout << "Month: " << weather.month << endl;
	cout << "High: " << weather.monthHigh << "*F" << endl;
	cout << "Low: " << weather.monthLow << "*F" << endl;
}

void displayAllWeatherData(vector<Weather> weatherList)
{
	int maxHigh{};
	int lowLow{};
	int allHigh{};
	int allLow{};
	for (Weather weather : weatherList)
	{
		displayWeather(weather);
	}
	for (Weather weather : weatherList)
	{
		allHigh == weather.monthHigh;
		allLow == weather.monthLow;
		if (maxHigh < allHigh)
			maxHigh == allHigh;
		if (lowLow > allLow)
			lowLow == allLow;
	}

	cout << "Highest Recorded Temperature: " << maxHigh << "*F" << endl;
	cout << "Lowest Recorded Temperature: " << lowLow << "*F" << endl;
}

float calculateAverages(vector<Weather> weatherList)
{
	float monthHigh = 0.0;
	float monthLow = 0.0;
	float totalMonths = 0.0;
	float averageHigh = 0.0;
	float averageLow = 0.0;

	for (Weather weather : weatherList) //Average High
	{
		monthHigh += (weather.monthHigh);
		monthLow += (weather.monthLow);
		totalMonths += 1;
	}
	averageHigh += (monthHigh / totalMonths);
	averageLow += (monthLow / totalMonths);
	return (averageHigh, averageLow);
}

void displayWeatherAverage(Average& average)
{
	cout << "Average Temperatures" << endl;
	cout << "Average High: " << average.averageHigh << "*F" << endl;
	cout << "Average Low: " << average.averageLow << "*F" << endl;
}


