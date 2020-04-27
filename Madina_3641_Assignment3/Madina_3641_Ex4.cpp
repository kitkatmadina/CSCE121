/* Kirsten Madina
Assignment 2 Question 2, exercises
Write C++ programs for the textbook exercises 4-5*/
/* Number guessing game where the user thinks of a number 
between 1 and 100 and your program asks questions to figure out what the 
number is*/
#include <iostream>
#include "std_lib_facilities.h"

int main() {
	cout << "Think of a number between 1 and 100. Press 'Y' to continue."\n;
	string howto;
	howto = "\nPress 'L' if your number is lower. Press 'H' if your number is higher. Press Y if it is your number.\n"
	string answer; 
	cin >> answer;
	bool correctGuess
	int tries = 0;
	if (answer == 'Y') {
		int compNum = 50;
		while(correctGuess == F) {
			cout << "Is your number " << compNum << "? " << howto;
			if (answer == 'L') {
				compNum = compNum / 2;
				++tries;
			else if (answer == 'H') 
				compNum = compNum + compNum / 2;
				++tries;
				
			else if (answer == 'Y')
				"Yay!";
				correctGuess = T
			}
			if (tries > 7) {
				break
			}
		}
		
	}
	return 0
}

