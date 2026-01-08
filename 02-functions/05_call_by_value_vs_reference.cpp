/*
    File: 05_call_by_value_vs_reference.cpp
    Topic: Call by Value vs Call by Reference
    Description:
    This program demonstrates the difference between
    call by value and call by reference in C++.
*/

#include <iostream>
using namespace std;

// Call by value
void change1(int value)
{
    value = value * 2;
    cout << "Value: " << value << endl;
}

// Call by reference
void change2(int &value)
{
    value = value * 2;
    cout << "Value: " << value << endl;
}

int main()
{
    int number = 5;

    change1(number);
    cout << "Number after change1: " << number << endl;

    change2(number);
    cout << "Number after change2: " << number << endl;

    return 0;
}
