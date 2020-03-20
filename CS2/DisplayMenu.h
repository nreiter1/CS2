#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <fstream>
using namespace std;

struct Weather
{
	char name[15];
	char year[4];
	float high;
	float low;
};

int displaymenu();
void displayWeather(Weather&);
void displayOneMonth(vector<Weather>*);
void displayOneYear(vector<Weather>*);
void displayAllWeatherData(vector<Weather>*);
float findHigh(vector<Weather>*);
float findLow(vector<Weather>*);
float avgHigh(vector<Weather>*);
float avgLow(vector<Weather>*);
void getWeatherData(vector<Weather>*);
void writeWeatherData(vector<Weather>*);
void readWeatherData(vector<Weather>*);
void totalWeatherObjects(vector<Weather>*);
//Weather getSingleMonth(int);

