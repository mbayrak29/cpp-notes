/*
    File: 08_stack_vs_heap_memory.cpp
    Topic: Stack vs Heap Memory & delete usage
    Description:
    This program demonstrates the difference between stack and heap memory.
    It also shows when `delete` should and should NOT be used.
*/

#include <iostream>
using namespace std;

int main()
{
    // Stack variables (automatically managed)
    int x, y;
    int z = 10;

    // Heap variable (dynamically allocated)
    int* p = new int(5);
    cout << *p << endl;

    // Correct usage: delete memory allocated with new
    delete p;
    p = NULL;

    // Stack variable
    int w = 20;

    // Pointer pointing to stack memory
    int* p2 = &w;

    // ❌ WRONG: Do NOT delete memory that was not allocated with new
    // delete p2;  // This causes undefined behavior

    cout << *p2 << endl;

    return 0;
}
