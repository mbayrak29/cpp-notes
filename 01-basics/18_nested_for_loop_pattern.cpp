// Topic: Nested For Loops
// Description:
// This program demonstrates the use of nested for loops.
// It prints a simple number pattern based on user input.

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Please enter a number: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
