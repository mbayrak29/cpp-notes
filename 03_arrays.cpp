/*
    File: 04_arrays_basics.cpp
    Topic: Arrays (Basic Usage)
    Description:
    This example demonstrates basic array usage in C++.
    It shows different ways to define arrays and
    how to read array elements from user input.
*/

#include <iostream>
using namespace std;

int main()
{
    /*
        Example 1:
        Assigning values to array elements manually
        (commented out for learning purposes)
    */
    /*
    int arr[5];
    arr[0] = 12;
    arr[1] = 20;
    arr[2] = 8;
    arr[3] = 45;
    arr[4] = 18;

    cout << "Please enter the element at index 1: ";
    cin >> arr[1];

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    */

    /*
        Example 2:
        Initializing arrays with values
    */
    /*
    int arr[] = {21, 25, 27};

    // Correct way to define a string array
    string seasons[] = { "spring", "summer", "autumn", "winter" };
    */

    /*
        Example 3:
        Reading array elements from user input
    */
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Array elements: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
