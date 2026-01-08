/*
    File: 09_arrays_and_functions.cpp
    Topic: Arrays and Functions
    Description:
    This example shows how arrays are passed to functions in C++.
    Changes made inside the function affect the original array.
*/

#include <iostream>
using namespace std;

/*
    Increases each element of the array by 1
*/
void changeArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] + 1;
    }
}

/*
    Prints all elements of the array
*/
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = { 3, 9, 12, 5, 10, 1, 3 };
    int size = 7;

    changeArr(arr, size);
    printArr(arr, size);

    cout << endl;
    return 0;
}
