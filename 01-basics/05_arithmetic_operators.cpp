// Topic: Arithmetic Operators in C++
// Description:
// This program demonstrates basic arithmetic operations such as
// addition, subtraction, multiplication, division, and modulo.
// It also calculates the average of quiz grades.

#include <iostream>
using namespace std;

int main() {

    // Quiz grades
    int quizGrade1 = 70;
    float quizGrade2 = 51;

    // Calculating average
    // Type casting is used to avoid integer division
    float quizAverage = (quizGrade1 + quizGrade2) / 2.0f;
    cout << "Quiz Average: " << quizAverage << endl;

    // Basic arithmetic operations
    int x = 10;
    int y = 20;

    int sum = x + y;        // Addition
    int mod = 12 % 10;     // Modulo (remainder)
    int product = x * y;   // Multiplication
    int division = y / x;  // Integer division

    // Printing results
    cout << sum << endl;
    cout << mod << endl;
    cout << product << endl;
    cout << division << endl;

    return 0;
}
