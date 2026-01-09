/*
    File: 01_struct_basic_usage.cpp
    Topic: Structures (struct)
    Description:
    This program demonstrates basic usage of structures in C++.
    It defines two structures (Point and Rectangle), creates objects
    from them, assigns values, and prints those values to the screen.
*/

#include <iostream>
using namespace std;

// Structure representing a point in 2D space
struct Point
{
    int x;
    int y;
};

// Structure representing a rectangle
struct Rectangle
{
    int width;
    int height;
};

int main()
{
    // Create first Point object
    Point pt;
    pt.x = 10;
    pt.y = 20;

    // Create second Point object
    Point pt2;
    pt2.x = 50;
    pt2.y = 70;

    // Create Rectangle object
    Rectangle rect1;
    rect1.width = 10;
    rect1.height = 20;

    // Output values
    cout << "Point 1 -> X: " << pt.x << ", Y: " << pt.y << endl;
    cout << "Point 2 -> X: " << pt2.x << ", Y: " << pt2.y << endl;
    cout << "Rectangle -> Width: " << rect1.width
         << ", Height: " << rect1.height << endl;

    return 0;
}
