// Ch9-Challenge11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

double getAverage(int arr[], int size) {
    int i, sum = 0;
    double avg;

    for (i = 0; i < size; ++i) {
        sum += arr[i];
    }
    avg = double(sum) / size;

    return avg;
};

int main()
{
    int ARRAY[5] = {5, 20, 50, 100, 2};
    double avg;

    // Pass to argument
    avg = getAverage(ARRAY, 5);

    cout << "The average is: " << avg << endl;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

