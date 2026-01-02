// Topic: Functions in C++
// Description:
// This program demonstrates different types of functions in C++,
// including functions with return values, void functions,
// functions with parameters, and functions that return strings.

#include <iostream>
using namespace std;

// Function that returns an integer result
int calculate(int x)
{
    int result = 3 * x + 1;
    return result;
}

// Function that calculates and returns area
int calculateArea(int x, int y)
{
    int area = x * y;
    return area;
}

// Void function that prints area
void calculateShowArea(int x)
{
    cout << "Area: " << (x * x) << endl;
}

// Void function with string parameter
void sayName(string name)
{
    cout << "Hello " << name << endl;
}

// Function that takes input and returns a string
string nameSurname()
{
    string name, surname, nameSurname;

    cout << "Please enter your name: ";
    cin >> name;

    cout << "Please enter your surname: ";
    cin >> surname;

    nameSurname = name + " " + surname;
    return nameSurname;
}

int main()
{
    /*
    int count;
    count = calculate(1);
    cout << "Result: " << count << endl;
    */

    cout << "Result: " << calculate(2) << endl;
    cout << "Area: " << calculateArea(5, 8) << endl;

    calculateShowArea(5);
    sayName("Metehan");

    cout << nameSurname() << endl;

    return 0;
}
