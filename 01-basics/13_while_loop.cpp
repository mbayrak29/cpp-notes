// Topic: While Loop
// Description:
// This program takes a starting and ending number from the user
// and prints all numbers divisible by 7 within that range using
// a while loop.

#include <iostream>
using namespace std;

int main()
{
    /*
    int i = 0;
    while (i <= 3)
    {
        cout << "i is lower than or equal to 3" << endl;
        i++;
    }
    cout << "i: " << i << endl;
    cout << "Finish" << endl;
    */

    int start, finish;

    cout << "Please enter the starting number: ";
    cin >> start;

    cout << "Please enter the ending number: ";
    cin >> finish;

    while (start <= finish)
    {
        if (start % 7 == 0)
        {
            cout << start << " ";
        }
        start++;
    }

    return 0;
}
