/*
    File: 08_dynamic_array_sum.cpp
    Topic: Dynamic Memory Allocation (Array)
    Description:
    This program dynamically allocates an integer array using `new[]`
    based on user input, stores values in the array, calculates the sum
    of all elements, and then properly frees the allocated memory
    using `delete[]`.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter how many integers will be stored: ";
    cin >> n;

    // Dynamically allocate array
    int* p = new int[n];

    // Read array elements
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    // Calculate sum of array elements
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p[i];
    }

    cout << sum << endl;

    // Free dynamically allocated memory
    delete[] p;
    p = NULL;

    return 0;
}
