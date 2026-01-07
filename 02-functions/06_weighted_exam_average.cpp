/*
    File: 06_weighted_exam_average.cpp
    Topic: Arrays and Weighted Average
    Description:
    This program calculates the weighted average of exam scores.
    Each exam score has a predefined percentage weight.
*/

#include <iostream>
using namespace std;

int main()
{
    const int size = 4;
    int exam[size];

    // Percentage weights for each exam
    double per[size] = { 0.15, 0.15, 0.30, 0.40 };

    double avg = 0;

    // Read exam scores
    for (int i = 0; i < size; i++)
    {
        cout << "Please enter exam " << i + 1 << " score: ";
        cin >> exam[i];
    }

    // Calculate weighted average
    for (int i = 0; i < size; i++)
    {
        avg += exam[i] * per[i];
    }

    cout << "Average: " << avg << endl;

    return 0;
}
