/*
    File: 02_struct_student_example.cpp
    Topic: Structures with Multiple Data Types
    Description:
    This program demonstrates how to define a structure that contains
    different data types, create structure objects, initialize them
    in different ways, and display their contents.
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
    // Creating and assigning values to a Student object step by step
    Student student1;
    student1.studentNumber = 100;
    student1.name = "Ahmet Yilmaz";
    student1.examAvg = 85.5;

    // Creating and initializing a Student object using initializer list
    Student student2 = { 102, "Ali Kaya", 90.2 };

    // Display student information
    cout << student1.studentNumber << " "
         << student1.name << " "
         << student1.examAvg << endl;

    cout << student2.studentNumber << " "
         << student2.name << " "
         << student2.examAvg << endl;

    return 0;
}
