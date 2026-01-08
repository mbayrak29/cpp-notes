/*
    File: 01_prime_numbers.cpp
    Topic: Loops and Prime Numbers
    Description:
    This program takes an integer from the user and
    prints all prime numbers from 1 up to that number.
*/

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Please enter an integer: ";
    cin >> number;

    // Loop through numbers from 1 to the given number
    for (int i = 1; i <= number; i++)
    {
        int count = 0;

        // Check how many divisors the number has
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        // A prime number has exactly 2 divisors
        if (count == 2)
        {
            cout << i << ", ";
        }
    }

    return 0;
}
