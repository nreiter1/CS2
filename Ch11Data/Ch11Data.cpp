// Ch11Data.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Transmission
{
    int speed;
    string type;
};

struct Vehicle
{
    string brand;
    string model;
    string color;
    string size;
    float engsize;
    vector<Transmission> transmission;
};

bool compareVehicles(Vehicle, Vehicle);

int main()
{
    void displayVehicle(Vehicle&);
    //Display vehicle data.

    vector<Vehicle> vehicleList;
    
    //Main car data.
    cout << "Enter Vehicle Data" << endl;
    bool moreVehicles = true;
    while (moreVehicles == true)
    {
        Vehicle tmpVehicle;
        cout << "Vehicle Brand: ";
        cin >> tmpVehicle.brand;
        cout << "Model: ";
        cin >> tmpVehicle.model;
        cout << "Color: ";
        cin >> tmpVehicle.color;
        cout << "Car Size: ";
        cin >> tmpVehicle.size;
        cout << "Engine Size: ";
        cin >> tmpVehicle.engsize;

        bool aTransmission;
        char response;
        cout << "Add transmission data to this vehicle? (y: yes or n: no)\n: ";
        cin >> response;
        if (response == 'y')
            aTransmission = true;
        else
            aTransmission = false;

        while (aTransmission == true)
        {
            Transmission tmpTransmission;
            cout << "Transmission Speed: " << endl;
            cin >> tmpTransmission.speed;
            cout << "Tranmission Type: " << endl;
            cin >> tmpTransmission.type;

            tmpVehicle.transmission.push_back(tmpTransmission); //Adds transmission data to vehicle.

            aTransmission = false;
        }

        cout << "You have entered the following information:" << endl;
        displayVehicle(tmpVehicle);
        cout << endl << "Do you want to save this information?(y: yes or n: no)\n: ";
        cin >> response;
        if (response == true)
        {
            vehicleList.push_back(tmpVehicle); //Adds vehicle to vector(list) of vehicles
        }
        
        cout << "Would you like to add another vehicle? (y: yes or n: no)\n: ";
        cin >> response;
        if (response == 'y')
            moreVehicles = true;
        else
            moreVehicles = false;

    }


}

void displayVehicle(Vehicle& vehicle)
{
    cout << "Vehicle Information:\n";
    cout << "======================\n";
    cout << "Brand: " << vehicle.brand << endl;
    cout << "Model: " << vehicle.model << endl;
    cout << "Color: " << vehicle.color << endl;
    cout << "Car Size: " << vehicle.size << endl;
    cout << "Engine Size: " << vehicle.engsize << "Liter" << endl;

    cout << "Transmission Information:\n";
    cout << vehicle.transmission.speed;
    cout << vehicle.transmission.type;
    cout << "======================\n";
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
