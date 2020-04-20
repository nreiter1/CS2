// D2L.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vehicle.h";
#include "Semi.h"
#include <vector>;
using namespace std;

int main()
{
    //Data Storage Variables
    Vehicle vehicle1;
    Vehicle vehicle2;
    Semi semi1;
    Semi semi2;
    char data;
    char choice;
    char option;
    vector<Vehicle> carData;
    vector<Semi> semiData;

    //Search Variables
    int year;
    string make;
    string model;
    string color;
    float engine;
    int enginecylinder;
    int transmission;
    string powertrain;
    string vehicleidentification;
    string semitype;
    int towingcapacity;

    do
    {

		do
		{
            option = mainmenu(); //Display the main menu and get user selection.
			int x;
			switch (option)
			{
			case 1: //Accelerate
                vehicle1.accelVehicle();
                break;
			case 2: //Accelerate
                vehicle2.accelVehicle();
                break;
            case 3: //Brake        
                vehicle1.brakeVehicle();
                break;
            case 4: //Brake
                vehicle2.brakeVehicle();
                break;
            case 5: //Check if both vehicles are equal
                if (vehicle1 == vehicle2)
                    cout << "Both cars are equal to each other." << endl;
                else
                    cout << "Both cars are NOT equal to each other." << endl;
                break;
            case 6: //Set vehicle 2 equal to vehicle 1
                vehicle2 = vehicle1;
                cout << "Both cars have been set equal." << endl;
                break;
            case 7: //Enter Vehicle 1 Data
                cout << "Type of Vehicle?(R: Regular Size Vehicle, S: Semi): ";
                cin >> choice;
                if (choice = 'S')
                    cin >> semi1;
                else
                    cin >> vehicle1;
                break;
            case 8: // Enter Vehicle 2 Data
                cout << "Type of Vehicle?(R: Regular Size Vehicle, S: Semi): ";
                cin >> choice;
                if (choice = 'S')
                    cin >> semi2;
                else
                    cin >> vehicle2;
                break;
            case 9:
                cout << "Which type of vehicle do you want to view?(R: Regular Size Vehicle, S: Semi): ";
                cin >> choice;
                if (choice == 'S')
                {
                    cout << semi1;
                }
                if (choice == 'R')
                    cout << vehicle1;
                break;
            case 10:
                cout << "Which type of vehicle do you want to view?(R: Regular Size Vehicle, S: Semi): ";
                cin >> choice;
                if (choice == 'S')
                {
                    cout << semi2;
                }
                if (choice == 'R')
                {
                    cout << vehicle2;
                }
                break;
            case 11: //Find Vehicle Info (Beta)
                //do
                //{
                //    option = vehiclesearchmenu();
                //    switch (option)
                //    {
                //    case 1: //Year, Make, Model, and Color
                //        Semi::sgetYear();

                //        break;
                //    case 2: //Engine and Powertrain
                //        break;
                //    case 3: //Vehicle Identification Number
                //        break;
                //    case 4: //Additional Semi Information
                //        break;
                //    case 5: //Exit
                //        break;
                //    }
                //} while (option > 0 && option < 4);
                break;
			case 12: //Save Data
				break;
			}
		} while (option > 0 && option < 12);




        cout << "Do you want save regular vehicle information?(y: yes / n: no): ";
        cin >> choice;
        if (choice = 'y')
        {
            carData.push_back(vehicle1);
            carData.push_back(vehicle2);
        }

        cout << "Do you want save semi vehicle information?(y: yes / n: no): ";
        cin >> choice;
        if (choice = 'y')
        {
            semiData.push_back(semi1);
            semiData.push_back(semi2);
        }


        cout << "Do you want to add additional data?(y: yes / n: no): ";
        cin >> data;
    } while (data == 'y');

    
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
