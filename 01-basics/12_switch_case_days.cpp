#include <iostream>
using namespace std;

// Switch-case example

int main()
{
    int day;

    cout << "Please enter the day of the week as a number: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid value! Please enter a number between 1 and 7.";
    }

    // If we do not use "break", execution continues
    // until a break statement is encountered

    return 0;
}
