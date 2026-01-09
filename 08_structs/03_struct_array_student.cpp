/*
    File: 03_struct_array_student.cpp
    Topic: Array of Structures
    Description:
    This program demonstrates how to use an array of structures.
    It stores student information (number, name, exam average),
    takes input from the user, and displays all student data.
*/

#include <iostream>
#include <string>
using namespace std;

// Structure representing a student
struct Student
{
    int studentNumber;
    string name;
    double examAvg;
};

int main()
{
    const int SIZE = 3;
    Student students[SIZE];

    // Input student information
    for (int i = 0; i < SIZE; i++)
    {
        cout << i + 1 << ". student's number: ";
        cin >> students[i].studentNumber;

        cin.ignore(); // Clear input buffer before getline

        cout << i + 1 << ". student's name: ";
        getline(cin, students[i].name);

        cout << i + 1 << ". student's exam average: ";
        cin >> students[i].examAvg;
    }

    cout << endl << "Student List:" << endl;

    // Display student information
    for (int i = 0; i < SIZE; i++)
    {
        cout << students[i].studentNumber << " "
             << students[i].name << " "
             << students[i].examAvg << endl;
    }

    return 0;
}
