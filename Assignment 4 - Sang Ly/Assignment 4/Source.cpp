// Assignment 4
// Sang Ly

// Develop a program taking in user's input and determine if they are of age
// to drink using if statement and functions

// Declare header files
#include <iostream>
using namespace std;

// Declare functions
bool checkAge(int);
void displayValid();
void displayNotValid();

// Main program
int main() {

	// Declare variable
	int userAge;

	// Prompt user for their age
	cout << "Enter age: ";
	cin >> userAge;

	// Call check age function
	// Call display valid function if 21 years old or older
	// Otherwise call display not valid function 
	if (checkAge(userAge)) {
		displayValid();
	}
	else {
		displayNotValid();
	}
	
	return 0;
}

// Check user's age function
bool checkAge(int age) {

	// Declare variable
	bool validation = false;

	// Check if age is above 21 and return true
	// Otherwise return false
	if (age >= 21) {
		validation = true;
	}
	else {
		validation = false;
	}

	// Return Tue or False depend on user's age
	return validation;
}

// Display legal drinking age function
void displayValid() {
	
	// Print message
	cout << "You are of the legal age to drink!" << endl;
}

// Display not of drinking age function
void displayNotValid() {

	// Print message
	cout << "You are not of legal age to drink. You have to wait!!!" << endl;
}