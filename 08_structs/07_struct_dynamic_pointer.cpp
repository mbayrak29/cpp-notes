/*
    File: 04_struct_dynamic_pointer.cpp
    Topic: Dynamic Struct with Pointer
    Description:
    This program demonstrates how to create a structure dynamically
    using `new`, access its members with a pointer, and properly
    release memory using `delete`.
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
    // Dynamically allocate a Car object
    Car* ptr = new Car;

    cout << "Year: ";
    cin >> ptr->year;

    cin.ignore(); // Prevents newline issue before getline

    cout << "Brand: ";
    getline(cin, ptr->brand);

    cout << "Price: ";
    cin >> ptr->price;

    // Print car information using pointer
    cout << ptr->year << " "
         << ptr->brand << " "
         << ptr->price << endl;

    // Free allocated memory
    delete ptr;
    ptr = NULL;

    return 0;
}
