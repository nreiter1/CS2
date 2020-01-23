#include <iostream>
#include <string>
#include <fstream>
#include "DisplayMenu.h"
#include "GlobalConstants.h"
#include <conio.h>
using namespace std;

string OpenFileName = "";


int displaymenu() //Main Menu.
{
	system("CLS");
	int option;
	cout << "1 ... N/A \n";
	cout << "2 ... Exit Application\n";
	cout << "\nChoose: ";
	cin >> option;
	return option;
}
