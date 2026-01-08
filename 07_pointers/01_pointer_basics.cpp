/*
    File: 01_pointer_basics.cpp
    Topic: Pointer Basics
    Description:
    This program demonstrates basic pointer usage in C++.
    It shows how a pointer can access and modify variables
    using memory addresses.
*/

#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 20;

    int* ptr;

    // Pointer points to x
    ptr = &x;
    cout << *ptr << endl;

    // Modify x using pointer
    *ptr = 15;
    cout << x << endl;

    // Pointer now points to y
    ptr = &y;
    cout << *ptr << endl;

    // Modify y using pointer
    *ptr = 25;
    cout << y << endl;

    return 0;
}
