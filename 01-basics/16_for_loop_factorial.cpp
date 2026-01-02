// Topic: For Loop Examples
// Description:
// This program demonstrates different uses of the for loop.
// It prints numbers from 1 to 10, prints even numbers between 1 and 25,
// and calculates the factorial of a number entered by the user.

#include <iostream>
using namespace std;

int main()
{
    // Prints numbers from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    // Prints even numbers between 1 and 25
    for (int i = 1; i <= 25; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }

    cout << endl;

    // Factorial calculation
    int number, result = 1;
    cout << "Please enter a number: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        result = result * i;
    }

    cout << "Result: " << result << endl;

    return 0;
}
