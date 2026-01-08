/*
    File: 11_string_functions.cpp
    Topic: C++ String Functions
    Description:
    This program demonstrates commonly used C++ string
    functions such as length, at, append, substr, find,
    erase, insert and replace.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fruit = "Apple";

    cout << "Length: " << fruit.length() << endl;
    cout << "First letter: " << fruit.at(0) << endl;

    fruit.append(" Juice");
    cout << "New Name: " << fruit << endl;

    string newName = fruit + " Jar";
    cout << newName << endl;

    cout << "Part (substr): " << newName.substr(0, 5) << endl;
    // substr(startIndex, characterCount)

    int pos = newName.find("Jar");
    cout << "Position of 'Jar': " << pos << endl;

    newName.erase(6, 5);
    cout << "After erase: " << newName << endl;

    newName.insert(5, " Cola");
    cout << "After insert: " << newName << endl;

    newName.replace(0, 5, "Orange");
    cout << "New Text: " << newName << endl;

    return 0;
}
