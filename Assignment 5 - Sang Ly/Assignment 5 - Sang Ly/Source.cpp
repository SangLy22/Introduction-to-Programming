// Assignment 5
// Sang Ly

// Develop a program counting from 1 to 30 using for loop, while loop, and do while loop

// Declare header files
#include <iostream>
using namespace std;

// Declare function
void forLoopCounting();
void whileLoopCounting();
void doWhileLoopCounting();

// Main program
int main() {

	// Call for loop
	forLoopCounting();

	// Call while loop
	whileLoopCounting();

	// Call do while loop
	doWhileLoopCounting();

	return 0;
}

// For loop function type void
void forLoopCounting() {

	// For loop counting start at 1 end at 10
	// Print 1 to 10
	for (int i = 1; i < 11; i++) {
		cout << i << endl;
	}
}

// While loop function type void
void whileLoopCounting() {

	// Declare variable
	int count = 11;

	// While loop counting start at 11 end at 20
	// Print 11 to 20
	while (count < 21) {
		cout << count++ << endl;
	}
}

// Do while loop function type void
void doWhileLoopCounting() {
	
	// Declare variable
	int count = 21;

	// Do while counting start at 21 end at 30
	// Print 21 to 30
	do {
		cout << count++ << endl;
	} while (count < 31);
}