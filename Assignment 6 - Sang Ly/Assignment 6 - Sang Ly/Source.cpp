// Assignment 6
// Sang Ly

// Develop a prorgam playing dice with AI using switch case

// Declare header files
#include <iostream>
#include <ctime>
using namespace std;

// Get the current time (Use for srand - seed random number generator )
time_t curTime = time(0);

// Declare functions
void numOfDice();
void diceRoll(int, string);
bool continuePlaying();

// Main program
int main() {

	// Declare variable
	bool startGame = true;

	// Continue running game until user exit
	// Using system clear for better visual
	// Call number of dice function
	// Call continue playing function
	while (startGame) {
		system("cls");
		numOfDice();
		startGame = continuePlaying();
	}
	return 0;
}

// Number of dice function
void numOfDice() {

	// Declare variable
	int count;

	// Prompt user to enter number of dice to roll
	// Store input in dice
	cout << "Enter number of dice (1-6): ";
	cin >> count;

	// Call dice roll function for user
	diceRoll(count, "Player 1");
	
	// Increase seed position by 120
	curTime = time(0);

	// Call dice roll function for AI
	diceRoll(count, "AI");
}

// Dice roll function
void diceRoll(int dice, string whosPlaying) {

	// Declare variable
	double avgScore = 0;
	double temp = 0;

	// Display User or AI
	cout << endl << "Player: " << whosPlaying << endl << endl;

	// Determine which case to apply from user's input
	// Each case represent number of dice being roll
	// Dice rolled are random
	// Default case will handle invalid input and call number of dice function
	// Print dice rolls and the average of the rolls
	srand(curTime);
	switch (dice) {
		case 1: {
			cout << "Roll: " << (temp = rand() % 6 + 1)<< endl;
			cout << endl << whosPlaying << " average score: " << (avgScore = temp / 1) << endl;
			break;
		}
		case 2: {
			for (int i = 0; i < 2; i++) {
				cout << "Roll: " << (temp = (rand() % 6 + 1)) << endl;
				avgScore = avgScore + temp;
			}
			cout << endl << whosPlaying << " average score: " << (avgScore = avgScore / 2) << endl;
			break;
		}
		case 3: {
			for (int i = 0; i < 3; i++) {
				cout << "Roll: " << (temp = (rand() % 6 + 1)) << endl;
				avgScore = avgScore + temp;
			}
			cout << endl << whosPlaying << " average score: " << (avgScore = avgScore / 3) << endl;
			break;
		}
		case 4: {
			for (int i = 0; i < 4; i++) {
				cout << "Roll: " << (temp = (rand() % 6 + 1)) << endl;
				avgScore = avgScore + temp;
			}
			cout << endl << whosPlaying << " average score: " << (avgScore = avgScore / 4) << endl;
			break;
		}
		case 5: {
			for (int i = 0; i < 5; i++) {
				cout << "Roll: " << (temp = (rand() % 6 + 1)) << endl;
				avgScore = avgScore + temp;
			}
			cout << endl << whosPlaying << " average score: " << (avgScore = avgScore / 5) << endl;
			break;
		}
		case 6: {
			for (int i = 0; i < 6; i++) {
				cout << "Roll: " << (temp = (rand() % 6 + 1)) << endl;
				avgScore = avgScore + temp;
			}
			cout << endl << whosPlaying << " average score: " << (avgScore = avgScore / 6) << endl;
			break;
		}
		default: {
			system("cls");
			cout << "Invalid input" << endl;
			numOfDice();
		}
	}
}

// Continue playing function
bool continuePlaying() {

	// Declare variable
	char input;

	// Prompt user for input and store value
	cout << endl << endl;
	cout << "Continue playing? (Y/N)";
	cin >> input;

	// If user enter y/Y function will return true
	// Otherwise function will return false
	// Repeat question if user enter anything other than prompted question
	if (toupper(input) == 'Y') {
		return true;
	}
	else if (toupper(input) == 'N') {
		return false;
	}
	else {
		continuePlaying();
	}
}