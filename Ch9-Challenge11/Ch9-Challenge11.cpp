// Ch9-Challenge11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;

int* growArray(const int*, int);
void displayArray(const int[], int);

int main()
{
    const int SIZE1 = 5;
    const int SIZE2 = (SIZE1*2);

    // First Array
    int array1[SIZE1] = { 18, 15, 47, 25, 83 };

    // Pointers to function
    int* dup1 = nullptr, * dup2 = nullptr;

    dup1 = growArray(array1, SIZE1);
    dup2 = growArray(array1, SIZE2);

    displayArray(array1, SIZE1);

    // Sorts second array.
    int n = sizeof(array1) / sizeof(array1[0]);
    sort(array1, array1 + n);

    // Display second array.
    displayArray(array1, SIZE2);


}

int* growArray(const int* arr, int size)
{
    int* newArray = nullptr;

    if (size = 0)

        return nullptr;


    newArray = new int[size];

    for (int index = 0; index <= size; index++)
        newArray[index] = arr[index];

    return newArray;
}

void displayArray(const int arr[], int size)
{
    for (int index = 0; index < size; index++)
        cout << arr[index] << " ";
    cout << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
