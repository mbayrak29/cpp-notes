/*
    File: 02_function_overloading.cpp
    Topic: Function Overloading
    Description:
    This example demonstrates function overloading in C++.
    The same function name (showError) is used with different
    parameter types and counts.
*/

#include <iostream>
using namespace std;

/*
    No-parameter version
    Prints a default error message
*/
void showError()
{ 
    cout << "Error!" << endl;
}

/*
    Overloaded version with string parameter
    Prints a custom error message
*/
void showError(string text)
{
    cout << text << endl;
}

/*
    ❌ These functions are commented out because:
    - Functions cannot be overloaded only by return type
    - These would cause redefinition / ambiguity errors

void showError(string txt)
{
    cout << txt << endl;
}

int showError()
{
    cout << "Error!" << endl;
}
*/

/*
    Overloaded version with one integer parameter
    Usually represents an error code
*/
void showError(int errorCode)
{
    cout << errorCode << endl;
}

/*
    Overloaded version with two integer parameters
    Can be used for multiple error codes
*/
void showError(int errorCode1, int errorCode2)
{
    cout << errorCode1 << " " << errorCode2 << endl;
}

int main()
{
    // Calls the function with no parameters
    showError();

    // Calls the function that takes a string
    showError("Error in Program!");

    // Calls the function that takes one integer
    showError(404);

    // Calls the function that takes two integers
    showError(404, 401);

    return 0;
}
