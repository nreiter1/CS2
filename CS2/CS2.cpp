// CS2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// SDK 10.0
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "DisplayMenu.h"
#include "GlobalConstants.h"


int main()
{
	int option = 0;
	

	do
	{
		option = displaymenu(); //Display the menu and get user selection.
		int x;
		switch (option)
		{
		case 1:

			break;
		case 2:
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
	} while (option > 0 && option < 3);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

