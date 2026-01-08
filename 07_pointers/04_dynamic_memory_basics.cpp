/*
    File: 03_dynamic_memory_basics.cpp
    Topic: Dynamic Memory Allocation
    Description:
    This program demonstrates dynamic memory allocation
    using new and delete, and safe pointer usage.
*/

#include <iostream>
using namespace std;

void printValue(int* p)
{
    if (p != NULL)
    {
        cout << *p << endl;
    }
}

int main()
{
    int* p = new int;
    *p = 5;

    cout << *p << endl;

    delete p;
    p = NULL;

    p = new int;
    *p = 10;

    cout << *p << endl;

    delete p;

    return 0;
}
