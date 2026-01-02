// Topic: Break and Continue
// Description:
// This program demonstrates the usage of break and continue
// statements inside a for loop.

#include <iostream>
using namespace std;

int main()
{
    // break example
    for (int i = 0; i <= 5; i++)
    {
        if (i == 3)
            break;

        cout << i << " ";
    }

    cout << endl;

    // continue example
    for (int i = 0; i <= 5; i++)
    {
        if (i == 3)
            continue;

        cout << i << " ";
    }

    return 0;
}
