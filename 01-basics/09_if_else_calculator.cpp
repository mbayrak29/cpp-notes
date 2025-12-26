#include <iostream>
using namespace std;

/*
if (condition)
{
    to do list
}
else
{
    to do list
}
*/

int main()
{
    /*
    bool isHot = false;

    if (isHot)
    {
        cout << "The environment is hot.";
    }
    else
    {
        cout << "The environment is not hot.";
    }

    int temperature;
    cout << "Please input temperature: ";
    cin >> temperature;

    if (temperature >= 35)
    {
        cout << "The environment is hot.\n";
    }
    else
    {
        cout << "The environment is not hot.\n";
    }

    int password = 1234;
    int x;

    cout << "Please enter your password: ";
    cin >> x;

    if (x == password)
    {
        cout << "Correct password! Welcome.\n";
    }
    else
    {
        cout << "Wrong password! Try again.\n";
    }
    */

    int number1, number2, result = 0;
    int operation; // 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division

    cout << "Please enter the first number: ";
    cin >> number1;

    cout << "Please enter the second number: ";
    cin >> number2;

    cout << "Please enter the operation (1: add, 2: subtract, 3: multiply, 4: divide): ";
    cin >> operation;

    if (operation == 1)
    {
        result = number1 + number2;
    }
    else if (operation == 2)
    {
        result = number1 - number2;
    }
    else if (operation == 3)
    {
        result = number1 * number2;
    }
    else if (operation == 4)
    {
        result = number1 / number2;
    }
    else
    {
        cout << "Invalid operation!" << endl;
    }

    cout << "Result: " << result << endl;

    return 0;
}
