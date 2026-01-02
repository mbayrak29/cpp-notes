// Topic: For Loop
// Description:
// This program demonstrates basic usage of the for loop.
// The first loop prints numbers from 1 to 10.
// The second loop prints even numbers between 1 and 25.

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

    return 0;
}
