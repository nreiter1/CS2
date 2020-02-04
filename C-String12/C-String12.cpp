// C-String12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

//Password Check
void checkPassword(char*);

int main()
{
	cout << "Password Reset Tool";
	
	//Defines password as array
	char password[25];

	cout << "\n\n";
	//Prompts user to enter a password
	cout << "Enter a password that meets these requirements:\n";
	cout << "Minimun Character Length: 6\n";
	cout << "Maximum Character Length: 24\n";
	cout << "At least one upper and lower case letter\n";
	cout << "At least one digit\n: ";
	cin.getline(password, 25);

	//Calls function checkPassword to check
	checkPassword(password);
}

void checkPassword(char* ptr)
{
	//Check length
	if (strlen(ptr) < 6)
	{
		cout << "Password MUST be at least 6 characters!\n";
		return;
	}

	//Declare three bool variables to store
	//if password has uppercase and lowercase letter
	bool upper = false, lower = false, digit = false;
	//Loop and check for upper and lower case
	for (int counter = 0; counter < strlen(ptr); counter++)
	{
		//Uppercase
		if (isupper(ptr[counter]))
			upper = true;
		//Lowercase
		if (islower(ptr[counter]))
			lower = true;
		if (isdigit(ptr[counter]))
			digit = true;
	}

	//Flag false readings
	{
		if (!lower)
			cout << "Password MUST have at least one lowercase letter!\n";
		if (!upper)
			cout << "Password MUST contain at least one uppercase letter!\n;";
		if (!digit)
			cout << "Password MUST have at least one digit!\n";
		if (lower && upper && digit)
			cout << "Password is set!\n";
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

