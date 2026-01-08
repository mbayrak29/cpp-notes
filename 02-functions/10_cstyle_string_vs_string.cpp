/*
    File: 10_cstyle_string_vs_string.cpp
    Topic: C-Style Strings vs C++ String
    Description:
    This example demonstrates the difference between
    C-style strings (char arrays) and C++ string objects.
    It also shows how to calculate string length manually.
*/

#include <iostream>
using namespace std;

int main()
{
    // C-style string (char array)
    char text[] = "Hello";
    cout << text << endl;

    // Calculate length of C-style string manually
    int length = 0;
    while (text[length] != '\0')
    {
        length++;
    }

    cout << length << endl;

    /*
        The following does NOT work because 'text'
        is a char array, not a C++ string object.

        text.append("C++");
    */

    // Convert char array to C++ string
    string newText = string(text);
    newText.append(" C++.");

    cout << newText << endl;

    return 0;
}
