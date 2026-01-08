/*
    File: 04_divisors_in_range.cpp
    Topic: Divisor Finding Algorithm
    Description:
    This program takes a starting and ending number from the user
    and prints all divisors of each number in that range.
*/

#include <iostream>
using namespace std;

int main()
{
    int begin, last;

    cout << "Enter starting number: ";
    cin >> begin;

    cout << "Enter ending number: ";
    cin >> last;

    // Loop through the given range
    for (int i = begin; i <= last; i++)
    {
        cout << "Divisors of " << i << ": ";

        // Find divisors of i
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
