// D2L.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h";
#include <vector>;
using namespace std;

int main()
{
    Car car1;
    Car car2; //Equaling purposes
    char data;
    char choice;
    char option;
    vector<Car> carData;

    do
    {
       /* string Make;
        int Model;*/

        //cout << "Enter New Vehicle Information?(y = yes or n = no): ";
        //cin >> choice;

        //if (choice != 'n')
        //{
        //    cout << "Year Model?: ";
        //    cin >> Model;
        //    car1.setModel(Model);
        //    cout << "Car Make?: ";
        //    cin >> Make;
        //    car1.setMake(Make);

        //    cout << "Make: " << Make << endl;
        //    cout << "Year Model: " << Model << endl;
        //    car1.setCarSpeed(0);
        //}

		do
		{
            option = displaymenu(); //Display the menu and get user selection.
			int x;
			switch (option)
			{
			case 1: //Accelerate
                car1.accelVehicle();
                break;
			case 2: //Brake
                car1.brakeVehicle();
                break;
            case 3:
                if (car1 == car2) //Not working for some strange reason
                    cout << "Both cars are equal to each other." << endl;
                else
                    cout << "Both cars are NOT equal to each other." << endl;
                break;
            case 4:
                car2 = car1;
                cout << "Both cars have been set equal." << endl;
                break;
            case 5:
                cin >> car1;
                break;
            case 6:
                cin >> car2;
                break;
            case 7:
                cout << car1;
                break;
            case 8:
                cout << car2;
                break;
			case 10: //Save Data
				break;
			}
		} while (option > 0 && option < 10);




        cout << "Do you want save this information?: (y: yes / n: no)";
        cin >> choice;
        if (choice = 'y')
        {
            carData.push_back(car1);
            carData.push_back(car2);
        }

        cout << "Do you want to add additional data?: (y: yes / n: no): ";
        cin >> data;
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
