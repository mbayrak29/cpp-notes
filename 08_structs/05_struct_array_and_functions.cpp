/*
    File: 02_struct_array_and_functions.cpp
    Topic: Struct Arrays & Functions
    Description:
    This program demonstrates:
    - Using arrays of structs
    - Passing structs to functions
    - Passing arrays of structs to functions
    - Pass by value vs pass by reference
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

// Changes the price of a car (pass by reference)
void changePrice(Car &cr)
{
    double price;
    cout << "Enter new price: ";
    cin >> price;
    cr.price = price;
}

// Checks whether the car is older or younger than 10 years (pass by value)
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

// Prints all cars and checks their age
void printCars(Car cars[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << cars[i].brand << " "
             << cars[i].year << " "
             << cars[i].price << " ";

        checkYear(cars[i]);
    }
}

int main()
{
    // Array of Car structures
    Car cars[3] =
    {
        {2018, "Mercedes", 50000},
        {2020, "Audi", 60
