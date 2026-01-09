/*
    File: 04_struct_and_reference.cpp
    Topic: Structs & Pass by Reference
    Description:
    This program demonstrates how to use structs in C++,
    how to pass a struct to functions by value and by reference,
    and how to modify struct members inside a function.
*/

#include <iostream>
#include <string>
using namespace std;

// Car structure definition
struct Car
{
    int year;
    string brand;
    double price;
};

// Function that changes the price of a car (pass by reference)
void changePrice(Car &cr)
{
    double price;
    cout << "Enter new price: ";
    cin >> price;
    cr.price = price;
}

// Function that checks whether the car is older or younger than 10 years
// Passed by value (read-only usage)
void checkYear(Car cr)
{
    if (cr.year < 2015)
    {
        cout << "The car is older than 10 years!" << endl;
    }
    else
    {
        cout << "The car is younger than 10 years!" << endl;
    }
}

int main()
{
    // Creating a Car object
    Car car1{ 2014, "Audi", 50.6 };

    // Checking the car's age
    checkYear(car1);

    // Changing the car's price
    changePrice(car1);

    // Printing updated price
    cout << car1.price << endl;

    return 0;
}
