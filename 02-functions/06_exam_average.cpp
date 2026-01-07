/*
    File: 06_exam_average.cpp
    Topic: Arrays and Average Calculation
    Description:
    This program takes 4 exam scores from the user,
    stores them in an array, calculates the total score
    and prints the average.
*/

#include <iostream>
using namespace std;

int main()
{
    int exam[4];
    double examTotal = 0;

    // Read exam scores and calculate total in a single loop
    for (int i = 0; i < 4; i++)
    {
        cout << "Please enter exam " << i + 1 << " score: ";
        cin >> exam[i];
        examTotal += exam[i];
    }

    // Calculate average
    double avg = examTotal / 4;

    cout << "Average: " << avg << endl;

    return 0;
}
