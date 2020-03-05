#include <iostream>
#include <string>
#include <vector>
#include "DisplayMenu.h"
using namespace std;

int main()
{
	//Working program to enter weather information

	
	
	//Create a vector of Student structures using the struct as a type
	vector<Weather> weatherList;

	cout << "***** Enter Average Montly Temperature Data *****" << endl;
	cout << "#################################################" << endl;
	bool moreWeather = true;
	while (moreWeather == true)
	{
		Weather tmpWeather;
		cout << "Which month do you want to enter data in?: ";
		cin >> tmpWeather.month;
		cout << "Enter average month high in fahrenheit: ";
		cin >> tmpWeather.monthHigh;
		cout << "Enter average month low in fahrenheit: ";
		cin >> tmpWeather.monthLow;


		char response;


		cout << "\nYou entered the following temperature information" << endl;
		displayWeather(tmpWeather);
		cout << endl << "Do you want to save this information? (y or n):";
		cin >> response;
		if (response == 'y')
		{
			weatherList.push_back(tmpWeather);		//add temperature data to vector
		}

		cout << "Would you like to enter temperatures for another month? (y or n): ";
		cin >> response;
		if (response == 'y')
			moreWeather = true;
		else
			moreWeather = false;
	}

	calculateAverages(weatherList);
	//display all weather data in weatherList
	displayAllWeatherData(weatherList);
	Average averageList;
	displayWeatherAverage(averageList);

}

