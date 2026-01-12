/*
    File: 05_dynamic_struct_array.cpp
    Topic: Dynamic Array of Structures
    Description:
    This program demonstrates how to dynamically allocate
    an array of structures using `new[]`, take user input,
    access elements, and properly free memory with `delete[]`.
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
    int n;
    cout << "How many cars will be entered? ";
    cin >> n;
    cin.ignore(); // Prevents newline issue before getline

    // Create dynamic array of Car structs in heap memory
    Car* cars = new Car[n];

    // Input car information
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". car's year: ";
        cin >> cars[i].year;
        cin.ignore();

        cout << "Brand: ";
        getline(cin, cars[i].brand);

        cout << "Price: ";
        cin >> cars[i].price;
    }

    // Output car information
    for (int i = 0; i < n; i++)
    {
        cout << cars[i].year << endl;
        cout << cars[i].brand << endl;
        cout << cars[i].price << endl;
    }

    // Free dynamically allocated memory
    delete[] cars;
    cars = NULL;

    return 0;
}
