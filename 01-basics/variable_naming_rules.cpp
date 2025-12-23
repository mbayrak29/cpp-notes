// Topic: Variable Naming Rules in C++
// Description:
// This example demonstrates valid and invalid variable names in C++.
// It shows common mistakes and the correct naming convention (camelCase).

#include <iostream>
using namespace std;

int main() {

    // Invalid: variable names cannot start with a number
    //int 1year = 2003;

    // Valid: use only English letters (avoid special or non-ASCII characters)
    int year = 2003;

    // Invalid: variable names cannot contain spaces
    // int birth date = 2003;

    // Invalid: variable names cannot contain dots or special characters
    // int birth.date = 2003;

    // Valid examples using camelCase naming convention
    int birthDate = 2003;
    int firstQuiz = 90;

    return 0;
}
