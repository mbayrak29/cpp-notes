// Topic: Input and Output using cin and cout
// Description:
// This program takes user input from the console using cin,
// stores the values in variables, and performs a simple
// calculation (area of a rectangle).

#include <iostream>
using namespace std;

int main() {
    // Declaring variables
    string name;
    int x, y, area;

    // Taking user's name
    cout << "Please enter your name: ";
    cin >> name;

    cout << "Hello " << name << ". Welcome to my C++ notes." << endl;

    // Taking rectangle edge values
    cout << "Please enter the first edge of the rectangle: ";
    cin >> x;

    cout << "Please enter the second edge of the rectangle: ";
    cin >> y;

    // Calculating area
    area = x * y;

    // Printing the result
    cout << "Rectangle Area: " << area << endl;

    return 0;
}
