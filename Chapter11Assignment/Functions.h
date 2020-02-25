#pragma once
#include <vector>
using namespace std;

struct Average
{
	float averageHigh;
	float averageLow;
};

struct Weather
{
	string month;
	int monthHigh;
	int monthLow;
	vector<Average> average;
};


void displayWeatherAverage(vector<Average>);
void displayWeather(Weather&);
void displayAllWeatherData(vector<Weather>);
float calculateAverages(vector<Weather>);
