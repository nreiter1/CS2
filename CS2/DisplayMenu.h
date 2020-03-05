#pragma once
#include <vector>
using namespace std;


struct Average
{
	float averageHigh = 0;
	float averageLow= 0;
};

struct Weather
{
	string month;
	int monthHigh;
	int monthLow;
	vector<Average> average;
};


void displayWeatherAverage(Average&);
void displayWeather(Weather&);
void displayAllWeatherData(vector<Weather>);
float calculateAverages(vector<Weather>);
