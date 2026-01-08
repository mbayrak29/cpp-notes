/*
    File: 01_prime_numbers_.cpp
    Topic: Prime Number Algorithm (Optimized)
    Description:
    This program prints all prime numbers from 1 to a given number.
    It uses an early break to improve performance when a number
    has more than two divisors.
*/

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Please enter an integer: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        int count = 0;

        // Check divisors of i
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }

            // If more than 2 divisors, not prime
            if (count > 2)
            {
                break;
            }
        }

        // Prime numbers have exactly 2 divisors
        if (count == 2)
        {
            cout << i << ", ";
        }
    }

    return 0;
}
