// Topic: Variables and Output
// Description:
// This program demonstrates how to print text to the console
// and how to use variables to create dynamic output.
// It shows the difference between fixed text and variable-based output.

#include<iostream>
using namespace std;

int main() {
// Printing fixed (hard-coded) text
	cout << "Mete eats hamburger." << endl;
	cout << "Mete drinks coke." << endl;
	cout << "Mete is 22 years old." << endl;
  
 // Declaring variables
	string name;
	name = "Mustafa";
	int age = 25;
  
 // Printing dynamic text using variables
	cout << name << " eats hambuger." << endl;
	cout << name << " drinks coke." << endl;
	cout << name << " is " << age << " years old." << endl;

  return 0;
}
