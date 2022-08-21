// Assignment 3
// Sang Ly

// Develop a program to solve the following arithmetic problems
// 3 * 8 + 15 / 3
// 11 + 18 / 3 + 4
// 5 * 4 * 5 / 10 / 2 * 5

// Declare header files
#include <iostream>
using namespace std;

// Main program
int main() {
	// Print equation and solution to arithmetic problem 1
	cout << "Solve: 3 * 8 + 15 / 3 = " << endl;
	cout << "Answer: " << ((3 * 8) + (15 / 3)) << endl;

	// Print equation and solution to arithmetic problem 2
	cout << endl << "Solve: 11 + 18 / 3 + 4 = " << endl;
	cout << "Answer: " << (11 + (18 / 3) + 4) << endl;

	// Print equation and solution to arithmetic problem 3
	cout << endl << "Solve: 5 * 4 * 5 / 10 / 2 * 5 = " << endl;
	cout << "Answer: " << (5 * 4 * 5 / 10 / 2 * 5) << endl;
	return 0;
}