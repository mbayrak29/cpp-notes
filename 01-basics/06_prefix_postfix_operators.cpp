// Topic: Increment and Decrement Operators (Prefix vs Postfix)
// Description:
// This program demonstrates how increment (++) and decrement (--)
// operators work in C++, and explains the difference between
// postfix and prefix usage.

#include <iostream>
using namespace std;

int main() {
    /*
    // Postfix increment
    int x = 7;
    x++; // Increases x by 1 AFTER the current statement
    cout << x << endl;

    // Postfix decrement
    int y = 10;
    y--; // Decreases y by 1 AFTER the current statement
    cout << y << endl;

    // Prefix increment
    int a = 7;
    ++a; // Increases a by 1 BEFORE the current statement
    cout << a << endl;

    // Prefix decrement
    int b = 9;
    --b; // Decreases b by 1 BEFORE the current statement
    cout << b << endl;
    */

    // Difference between postfix and prefix operators

    // Postfix example (x++)
    /*
    int x = 7;
    int y = x++; // First assign x to y, then increment x
    cout << "x: " << x << endl; // x becomes 8
    cout << "y: " << y << endl; // y remains 7
    */

    // Prefix example (++x)
    int x = 7;
    int y = ++x; // First increment x, then assign it to y

    cout << "x: " << x << endl; // x is 8
    cout << "y: " << y << endl; // y is also 8

    return 0;
}
