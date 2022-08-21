// Assignment 7
// Sang Ly

// Develop a program to calculate positive and negative factorial 

// Delcare header files
#include <iostream>
using namespace std;

// Declare function
double factorialCalculator(double);
double factorialCalculation(double);

// Main proram
int main() {

	// Declare variable
	double input;

	// Prompt user for input
	cout << "Enter a number to find the factorial: ";
	cin >> input;

	// Call factorial calculator
	cout << factorialCalculator(input) << endl;

	return 0;
}

// Factorial calculator function
double factorialCalculator(double num) {
	
	// Determine if num is postive or positive
	// Call factorial calculation function
	if (num >= 0) {
		return factorialCalculation(num);
	}
	else if (num < 0) {
		return -factorialCalculation(fabs(num));
	}
	return 0;
}

// Factorial calculation function
double factorialCalculation(double num) {

	// Recursive call factorial calculation function
	if (num == 1 || num == 0 || num == -1) {
		return 1;
	}
	else {
		return num * factorialCalculation(num - 1);
	}
	return 0;
}