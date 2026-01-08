/*
    File: 03_random_number.cpp
    Topic: Random Number Generation & Functions
    Description:
    This example shows how to generate random numbers in C++
    using rand(), srand() and time(). 
    A function is used to generate a random number
    between a given minimum and maximum value.
*/

#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()
using namespace std;

/*
    Generates a random number between min and max (inclusive)
*/
int randomNumber(int min, int max)
{
    int randomNumber = min + (rand() % (max - min + 1));
    return randomNumber;
}

int main()
{
    /*
        srand() is used to seed the random number generator.
        time(0) ensures different results on each program run.
    */
    srand(time(0));

    /*
        The following examples are commented out
        and were used while learning how rand() works.

    cout << time(0) << endl;
    srand(time(0));
    int randomNumber = rand();
    cout << "Random Number: " << randomNumber << endl;

    // 1 - 10
    int randomNumber2 = (rand() % 10) + 1;
    cout << randomNumber2 << endl;
