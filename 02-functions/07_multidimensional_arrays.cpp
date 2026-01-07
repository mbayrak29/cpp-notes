/*
    File: 07_multidimensional_arrays.cpp
    Topic: Multidimensional Arrays (2D Arrays)
    Description:
    This example demonstrates the usage of a two-dimensional array in C++.
    It shows how to initialize a 2D array and print its elements
    using nested loops.
*/

#include <iostream>
using namespace std;

int main()
{
    // 2D array with 2 rows and 3 columns
    int arr[2][3] = { {4, 6, 8}, {10, 12, 14} };

    /*
        Example:
        Accessing a specific element using row and column input
        (commented out for learning purposes)

    int i, j;
    cout << "Please enter row number: ";
    cin >> i;
    cout << "Please enter column number: ";
    cin >> j;

    // --i and --j are used to convert user input
    // from 1-based index to 0-based index
    cout << arr[--i][--j];
    */

    // Print all elements of the 2D array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
