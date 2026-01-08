/*
    File: 03_pointer_and_array.cpp
    Topic: Pointer and Array Relationship
    Description:
    This program demonstrates how arrays and pointers
    are closely related in C++ and how pointer arithmetic works.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 8, 12, 20 };

    int* p;
    p = arr; // points to the first element of the array

    cout << *p << endl;        // first element
    cout << *arr << endl;      // same as *p
    cout << *(p + 1) << endl;  // second element

    // Modify array element using pointer
    *(p + 2) = *(p + 2) * 2;

    cout << *(p + 2) << endl;  // modified value
    cout << arr[2] << endl;    // same value via array

    return 0;
}
