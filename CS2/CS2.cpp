#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "DisplayMenu.h"
using namespace std;

int main()
{
	int option = 0;
	vector<Weather>* weatherData = new vector<Weather>();

	do
	{
		option = displaymenu(); //Display the menu and get user selection.
		int x;
		switch (option)
		{
		case 1: //Initialize Application
			break;
		case 2: //Load Data
			readWeatherData(weatherData);
			break;
		case 3: //Enter Weather Data
			getWeatherData(weatherData);
			break;
		case 4:	//Enter weather data for 1 month
			break;
		case 5: //Display One Month
			displayOneMonth(weatherData);
			break;
		case 6:	//Display One Year
			displayOneYear(weatherData);
			break;
		case 7:	//Display All Data
			displayAllWeatherData(weatherData);
			break;
		case 8:	//Sort Data
			break;
		case 9:	//Save Data
			writeWeatherData(weatherData);
			break;
		case 14:	//Application Status
			totalWeatherObjects(weatherData);
			break;
		case 15: //Display Summary Data
			findHigh(weatherData);
			findLow(weatherData);
			avgHigh(weatherData);
			avgLow(weatherData);
			break;
		case 20: //Exit
			int const ecase = 1;
			do
			{
				int exitoption;
				cout << "Are you sure you want to exit? 1: Yes 2: No\n:";
				cin >> exitoption;
				if (exitoption == 1)
				{
					cout << "Exiting!";
					return 0;
				}
				else if (exitoption == 2)
				{
					break;
				}
				else if (exitoption >= 3)
				{
					cout << "Invalid Option.\nPlease select a valid option!";
				}
			} while (ecase == 1);
		}
	} while (option > 0 && option < 21);


	//Weather testWeather = getSingleMonth(3);


}
