// Topic: Do-While Loop
// Description:
// This program repeatedly asks the user to enter a password
// until the correct password is entered using a do-while loop.

#include <iostream>
using namespace std;

int main()
{
    int password = 1234;
    int input;

    do
    {
        cout << "Please enter the password: ";
        cin >> input;
    } 
    while (input != password);

    cout << "Password is correct.";

    return 0;
}
