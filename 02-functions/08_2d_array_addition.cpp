/*
    File: 08_2d_array_addition.cpp
    Topic: Multidimensional Arrays (Matrix Addition)
    Description:
    This program takes two 2D arrays (matrices) from the user
    and calculates their sum element by element.
*/

#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLS = 2;

    int arr1[ROWS][COLS];
    int arr2[ROWS][COLS];
    int arr3[ROWS][COLS];

    // Read first matrix
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << "Enter element of first array at row "
                 << i + 1 << ", column " << j + 1 << ": ";
            cin >> arr1[i][j];
        }
    }

    // Read second matrix
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << "Enter element of second array at row "
                 << i + 1 << ", column " << j + 1 << ": ";
            cin >> arr2[i][j];
        }
    }

    // Calculate and print sum matrix
    cout << "\nSum of the two arrays:\n";

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
