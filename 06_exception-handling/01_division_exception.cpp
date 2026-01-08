/*
    File: 01_division_exception.cpp
    Topic: Exception Handling (try-catch)
    Description:
    This program demonstrates exception handling by
    preventing division by zero using try and catch blocks.
*/

#include <iostream>
using namespace std;

int main()
{
    int dividend, divisor;

    cout << "Please enter dividend: ";
    cin >> dividend;

    cout << "Please enter divisor: ";
    cin >> divisor;

    int result;

    try
    {
        if (divisor == 0)
            throw 99;   // throw an error code

        result = dividend / divisor;
        cout << "Result: " << result << endl;
    }
    catch (int errorCode)
    {
        cout << "Divisor cannot be zero!" << endl;
    }

    return 0;
}
