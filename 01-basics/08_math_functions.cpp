// Topic: Math Functions in C++ (cmath)
// Description:
// This program demonstrates common mathematical functions
// such as power, floor, ceil, and round using the <cmath> library.

#include <iostream>
#include <cmath> // Required for math functions like pow, floor, ceil, round
using namespace std;

int main() {

    /*
    // Power function example
    int result, x, y;
    cout << "Please enter the base value: ";
    cin >> x;
    cout << "Please enter the exponent value: ";
    cin >> y;

    result = pow(x, y); // x raised to the power of y
    cout << "Result: " << result << endl;
    */

    /*
    // Floor function example
    // floor() rounds a number DOWN to the nearest integer
    int result;
    result = floor(2.7);
    cout << "Result: " << result << endl;
    */

    /*
    // Ceil function example
    // ceil() rounds a number UP to the nearest integer
    int result;
    result = ceil(2.1);
    cout << "Result: " << result << endl;
    */

    // Round function example
    // round() rounds to the nearest integer
    int result;
    result = round(2.4);
    cout << "Result: " << result << endl;

    return 0;
}
