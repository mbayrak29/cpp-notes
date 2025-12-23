// Topic: Basic Data Types in C++
// Description:
// This program demonstrates the usage of different basic data types
// such as int, string, float, double, bool, and char, and prints them
// to the console using cout.

#include <iostream>
using namespace std;

int main() {

    // Integer variable (stores whole numbers)
    int birthDate = 2003;
    // String variable (stores text)
    string name = "Metehan Bayrak";
    // Float variable (decimal number, 'f' suffix specifies float type)
    float gpa = 3.47f;
    // Double variable (higher precision decimal number)
    double pi = 3.14259895345;
    // Boolean variable (true or false)
    bool isPassClass = true;
    // Character variable (single character)
    char gpaLetter = 'A';
  
    // Printing variables to the console
    cout << "Hello Dear " << name << endl;
    cout << "Birth Date: " << birthDate << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Did you pass the class? " << isPassClass << endl;
    cout << "Letter grade: " << gpaLetter << endl;

    return 0;
}
