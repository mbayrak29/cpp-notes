/*
    File: 03_unique_digits_4digit.cpp
    Topic: Digit Comparison Algorithm
    Description:
    This program finds and counts all 4-digit numbers
    whose digits are all different from each other.
*/

#include <iostream>
using namespace std;

int main()
{
    int count = 0;

    for (int i = 1000; i <= 9999; i++)
    {
        int ones = i % 10;
        int tens = (i / 10) % 10;
        int hundreds = (i / 100) % 10;
        int thousands = (i / 1000) % 10;

        // Check if all digits are unique
        if (ones != tens &&
            ones != hundreds &&
            ones != thousands &&
            tens != hundreds &&
            tens != thousands &&
            hundreds != thousands)
        {
            cout << i << ", ";
            count++;
        }
    }

    cout << endl << "Total count: " << count;
    return 0;
}
