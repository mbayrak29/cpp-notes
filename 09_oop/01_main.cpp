/*
    File: main.cpp
    Description:
    Demonstrates usage of the Car class by creating objects
    and displaying their information.
*/

#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
    Car car1, car2;

    car1.colour = "Black";
    car1.model = "Audi";
    car1.horsePower = 90;

    car2.colour = "Blue";
    car2.model = "BMW";
    car2.horsePower = 120;

    car1.showLisance();
    cout << endl;
    car2.showLisance();

    return 0;
}
