/*
    File: 03_static_variables.cpp
    Topic: Static Variables in Functions
    Description:
    This program demonstrates how static variables
    preserve their values between function calls.
*/

#include <iostream>
using namespace std;

void function1()
{
    static int count = 0;
    static double x = 0;

    count++;
    x++;

    cout << "Function1 counter: " << count << " " << x << endl;
}

void function2()
{
    static int count = 0;
    count++;

    cout << "Function2 counter: " << count << endl;
}

int main()
{
    const double pi = 3.14; // Example of a constant variable

    function1();
    function1();

    function2();
    function2();
    function2();
    function2();

    return 0;
}
