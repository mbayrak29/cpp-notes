/*
    File: 06_return_pointer_from_function.cpp
    Topic: Returning Pointer from Function
    Description:
    This program demonstrates how a function can dynamically allocate
    memory using `new` and return a pointer to that memory.
    
    The responsibility of freeing (delete) the allocated memory
    belongs to the calling function (main).
*/

#include <iostream>
using namespace std;

// Function that allocates memory on the heap and returns its address
int* function()
{
    int* p = new int;   // Dynamic memory allocation
    *p = 37;            // Assign value
    return p;           // Return pointer (do NOT delete here)
}

int main()
{
    int* ptr;

    // Pointer receives dynamically allocated memory address
    ptr = function();

    // Null check before using the pointer
    if (ptr != NULL)
    {
        cout << *ptr << endl;  // Access value via pointer

        delete ptr;            // Free allocated memory
        ptr = NULL;            // Avoid dangling pointer
    }

    return 0;
}
