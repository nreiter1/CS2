// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
#include <cstring>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    char charName;
    cout << "Enter a character.\n";
    cin >> charName;
    cout << charName << endl;

    if (isalpha(charName))
    {
        cout << "This is a alpha character.\n";
        if (isupper(charName))
        {
            cout << "This is an uppercase letter.\n";
        }
        else
        {
            "This is NOT an uppercase letter.\n";
        }
    }
    else
    {
        cout << "This is NOT a alpha character.\n";
    }

    if (isdigit(charName))
    {
        cout << "This is a digit.\n";
    }
    else
    {
        cout << "This is NOT a digit.\n";
    }

    int skip;
    int length;
    const int SIZE = 15;
    char line[SIZE];

    cout << "Enter a string of 20 or less characters.\n";
    cin >> skip;
    cin.getline(line, SIZE);

    length = strlen(line);
    cout << length << endl;
    

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
