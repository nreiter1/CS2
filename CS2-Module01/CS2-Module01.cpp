// CS2-Module01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// SDK: 10.0
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> firstNames;
    
    cout << "Capacity: " << (int)firstNames.capacity() << endl;
    cout << "Max Size: " << (int)firstNames.max_size() << endl;

    cout << "Size of Names: " << firstNames.size() << endl << endl;

    firstNames.push_back("Nick");
    firstNames.push_back("Anthony");
    firstNames.push_back("Michael");
    firstNames.push_back("Zach");
    firstNames.push_back("Jake");
    firstNames.push_back("Kerry");

    for (string val : firstNames)
    {
        cout << val << endl;
    }
    cout << endl;

    cout << "The third name in the array is " << firstNames[2] << "." << endl;
   
    cout << endl;
    cout << "Capacity: " << (int)firstNames.capacity() << endl;
    cout << "Max Size: " << (int)firstNames.max_size() << endl;
    cout << "Size of Names: " << firstNames.size() << endl;


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
