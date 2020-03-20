// D2L.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h";
#include <string>;
#include <vector>;
using namespace std;

int main()
{
    Car car1;
    char data;
    char choice;
    char option;
    vector<Car> carData;

    do
    {
        string Make;
        int Model;

        cout << "Car Make?: ";
        cin >> Make;
        car1.setMake(Make);
        cout << "Year Model?: ";
        cin >> Model;
        car1.setModel(Model);

        cout << "Make: " << car1.setMake << endl;
        cout << "Year Model: " << car1.setModel << endl;
        car1.setCarSpeed(0);

		do
		{
			option = displaymenu(); //Display the menu and get user selection.
			int x;
			switch (option)
			{
			case 1: //Accelerate
				break;
			case 2: //Brake
				break;
			case 3: //Save Data
				break;
			}
		} while (option > 0 && option < 3);




        cout << "Do you want save this information?: (y: yes / n: no)";
        cin >> choice;
        if (choice = 'y');
            cout << "Function Works\n";
            carData.push_back(car1);

        cout << "Do you want to add additional vehicles?: (y: yes / n: no)";
    } while (data = 'y');

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
