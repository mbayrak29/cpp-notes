#include<iostream>
using namespace std;

int main()
{
	// kullanicidan 3 sayi alip en kucugunu bulan program
	int number1, number2, number3;
	cout << "Lutfen 1.sayiyi giriniz:";
	cin >> number1;
	cout << "Lutfen 2.sayiyi giriniz:";
	cin >> number2;
	cout << "Lutfen 3.sayiyi giriniz:";
	cin >> number3;
	int lowest;
	if (number1 <= number2 && number1 <= number3)
	{
		lowest = number1;
	}
	else if (number2 <= number3 && number2 <= number1)
	{
		lowest = number2;
	}
	else
	{
		lowest = number3;
	}
	cout << "Lowest number: " << lowest << endl;
}
