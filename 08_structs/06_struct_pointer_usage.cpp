/*
    File: 06_struct_pointer_usage.cpp
    Topic: Struct Pointer Usage
    Description:
    This program demonstrates how to use pointers with structures
    and access structure members using the arrow (->) operator.
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

int main()
{
    // First car object
    Car car1 = { 2017, "Mercedes", 60400 };

    // Pointer pointing to car1
    Car* ptr = &car1;

    cout << "Year: " << ptr->year
         << " Brand: " << ptr->brand
         << " Price: " << ptr->price << endl;

    // Pointer reset to NULL
    ptr = NULL;

    // Second car object
    Car car2 = { 2020, "Audi", 50100 };

    // Pointer now points to car2
    ptr = &car2;

    cout << "Year: " << ptr->year
         << " Brand: " << ptr->brand
         << " Price: " << ptr->price << endl;

    return 0;
}
