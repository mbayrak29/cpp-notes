/*
    File: 05_null_pointer_allocation.cpp
    Topic: Null Pointer Initialization & Safe Allocation
    Description:
    This program demonstrates how to safely work with pointers
    by checking for NULL before dereferencing and allocating memory
    only when needed. It also shows proper memory cleanup using delete.
*/

#include <iostream>
using namespace std;

int main()
{
    // Pointer initialized as NULL
    int* p = NULL;

    // Check if pointer is NULL before using it
    if (p != NULL)
    {
        *p = 5;   // This will not run because p is NULL
    }
    else
    {
        // Allocate memory if pointer is NULL
        p = new int(5);
    }

    // Safe to use pointer after allocation
    cout << *p << endl;

    // Free allocated memory
    delete p;

    // Set pointer to NULL to avoid dangling pointer
    p = NULL;

    return 0;
}
