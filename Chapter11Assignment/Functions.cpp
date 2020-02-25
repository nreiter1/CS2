#include <iostream>;
#include "Functions.h";
using namespace std;


void displayWeather(Weather& weather)
{
	cout << "Month: " << weather.month << endl;
	cout << "High: " << weather.monthHigh << "*F" <<endl;
	cout << "Low: " << weather.monthLow << "*F" << endl;
}

void displayAllWeatherData(vector<Weather> weatherList)
{
	for (Weather weather : weatherList)
	{
		displayWeather(weather);
	}
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


