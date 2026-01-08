/*
    File: 05_function_overloading_with_pointers.cpp
    Topic: Function Overloading and Pointer Parameters
    Description:
    This program demonstrates function overloading by using
    two functions with the same name:
    - One uses call by value
    - The other uses a pointer to modify the original variable
*/

#include <iostream>
using namespace std;

// Call by value (returns a new value)
int aircraftCalculate(int x_)
{
    // Many mathematical equations
    x_ = 34;
    return x_;
}

// Call by pointer (modifies original value)
void aircraftCalculate(int* p)
{
    // Many mathematical equations
    *p = 34;
}

int main()
{
    int x = 30;

    int* p;
    p = &x;

    // Repeated function calls (example scenario)
    for (int i = 0; i < 1000000; i++)
    {
        aircraftCalculate(p);
    }

    cout << "X: " << x << endl;

    return 0;
}
