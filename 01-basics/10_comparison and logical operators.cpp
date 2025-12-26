

#include<iostream>
using namespace std;

int main()
{

    /*
    Comparison Operators

    ==  equal to
    !=  not equal to
    >   greater than
    <   less than
    >=  greater than or equal to
    <=  less than or equal to
    */

    /*
    int a = 10;
    int b = 20;

    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    */

    /*
    Logical Operators

    &&  AND  -> true if both conditions are true
    ||  OR   -> true if at least one condition is true
    !   NOT  -> reverses the condition
    */

    /*
    int age = 20;
    bool hasID = true;

    cout << "age >= 18 AND hasID: " << (age >= 18 && hasID) << endl;
    cout << "age < 18 OR hasID: " << (age < 18 || hasID) << endl;
    cout << "NOT hasID: " << (!hasID) << endl;
    */

    /*
    int x = 1234;
    int y = 222;
    if (x == y)
    {
        cout << "True password!\n" << endl;
    }
    else
    {
        cout << "Wrong password\n" << endl;
    }
    */
    /*
    int sayi1, sayi2;
    cout << "1.sayiyi giriniz: ";
    cin >> sayi1;
    cout << "2.sayiyi giriniz: ";
    cin >> sayi2;
    if (sayi1 > 0 && sayi2 > 0)
    {
        cout << "Her iki sayi da pozitiftir." << endl;
    }
    else if (sayi1 < 0 && sayi2 < 0)
    {
        cout << "Her iki sayi da negatiftir." << endl;
    }
    else if (sayi1 < 0 || sayi2 < 0)
    {
        cout << "Sayilardan biri negatiftir." << endl;
    }
    */

    int x = 5;
    if (!(x == 5))// ! makes false
    {
        cout << "x 5'e esittir.";
    }
	return 0;
}
