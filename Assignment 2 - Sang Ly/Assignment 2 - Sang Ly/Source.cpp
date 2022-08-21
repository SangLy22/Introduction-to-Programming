// Assignment 2
// Sang Ly

// Develop a prorgam to do addition, subtraction, multipliaction, and divison 
// using user inputs

// Declare header files
#include <iostream>
using namespace std;

// Main program
int main() {
	// Declare variables
	double userNum1;
	double userNum2;

	// Prompt user for first number and store in userNum1
	cout << "Enter first number: ";
	cin >> userNum1;

	// Prompt user for second number and store in userNum2
	cout << "Enter second number: ";
	cin >> userNum2;

	// Print addition 
	cout << endl << userNum1 << " + " << userNum2 << " = " << (userNum1 + userNum2) << endl;

	// Print subtraction
	cout << endl << userNum1 << " - " << userNum2 << " = " << (userNum1 - userNum2) << endl;

	// Print multiplication
	cout << endl << userNum1 << " * " << userNum2 << " = " << (userNum1 * userNum2) << endl;

	// Print division
	cout << endl << userNum1 << " / " << userNum2 << " = " << (userNum1 / userNum2) << endl;

	return 0;
}