// Assignment 8
// Sang Ly

// Develop a program to print single and multidimensional array

// Declare header files
#include <iostream>
using namespace std;

// Declare function
void createArr();
void printSingleArr(string [5]);
void printMultiArr(string [5][2]);

// Main program
int main() {

	// Call create array function
	createArr();

	return 0;
}

// Create single dimensional array function
void createArr() {

	// Declare array
	string strArr[] = {"Apple", "Bananas", "Kiwi", "Mango", "Orange"};
	string multiStrArr[][2] = { 
		{"Sam", "125 lbs"},
		{"Matt", "150 lbs"},
		{"John", "200 lbs"},
		{"Ella", "100 lbs"},
		{"Emma", "125 lbs"}
	};

	// Call print single array function
	printSingleArr(strArr);

	// Call print multiple array function
	printMultiArr(multiStrArr);
}

// Print single dimensional array function
void printSingleArr(string strArr[]) {

	// Loop through array
	// Print values in array
	cout << "Single dimensional array: " << endl;
	for (int i = 0; i < strArr->size(); i++) {
		cout << strArr[i] << endl;
	}
	cout << endl;
}

// Prin multiple dimensional array function5
void printMultiArr(string multiStrArr[5][2]) {
	
	// Loop through array
	// Print values in array
	cout << "Multiple dimensional array: " << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			cout << multiStrArr[i][j] << " ";
		}
		cout << endl;
	}
	
}