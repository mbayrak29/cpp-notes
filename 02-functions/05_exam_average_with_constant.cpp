/*
    File: 06_exam_average_with_constant.cpp
    Topic: Arrays, Constants and Average Calculation
    Description:
    This program takes exam scores from the user,
    stores them in an array whose size is defined
    using a constant, and calculates the average score.
*/

#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int exam[size];
    double examTotal = 0;

    // Read exam scores and calculate total
    for (int i = 0; i < size; i++)
    {
        cout << "Please enter exam " << i + 1 << " score: ";
        cin >> exam[i];
        examTotal += exam[i];
    }

    // Calculate average
    double avg = examTotal / size;

    cout << "Average: " << avg << endl;

    return 0;
}
