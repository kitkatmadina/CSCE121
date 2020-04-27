//Assignment 5 question 3
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "std_lib_facilities.h"
#include <ctime>
using namespace std;
class Invalid_number_of_digits {};//first exception
class Duplicated_digits {};//second exception
void cowsbulls(vector<char> v);
bool game_win = false;
string secretnumber();
string num;
int main() 
try {
	num = secretnumber();
	vector<char> guess;
	cout << "Welcome to Cows and Bulls!\n Try to guess the computer's number. \nPress 'q' to quit. \nPress 'x' to see the number.";
	cout << "\nPlease enter your guess: ";
	string digit;
	int count = 0;
	do {
		cin >> digit;
		if (digit.compare("q") == 0) {break;} // way to quit
		if (digit.compare("x") == 0) {
			cout << "\nThe secret number is: "<<num;
			break;
		}
		guess.reserve(digit.length());
		for (int i = 0; i < 5; i++) { guess.push_back(digit[i]); }//turning the input into a vector.
		cout << "Your guess: ";
		for (int i = 0; i <= guess.size() - 1; i++) //print out the guess
			cout << guess[i];
		cout << "\n";
		if (guess.size() != 5)
			throw Invalid_number_of_digits(); //first exception
		for (int i = 1; i < guess.size(); i=i+1) {
			for (int j = 0; j < i; j++) {
				if (guess[i] == guess[j]) {
					throw Duplicated_digits(); // second exception
				}
			}
			
		}
		cowsbulls(guess);
		count = count + 1;
		guess.erase(guess.begin(),guess.end());
	} while (game_win == false);
	cout << "\nNumber of tries: " << count;
	return 0;
}
catch (Invalid_number_of_digits) {
	cout << "\nerror: input vector does not have the correct number of digits";
}
catch (Duplicated_digits) {
	cout << "\nerror: input vector has two or more of the same digit";
}

//function definition for cowsbulls
void cowsbulls(vector<char> v) { //v is vector guess
	vector<char> sn;
	for (int i = 0; i <= num.size() - 1;i++) {
		sn.push_back(num[i]);
	}
	int bulls=0; //counter for bulls
	int cows = 0; //counter for cows
	for (int i = 0; i <= v.size() - 1;i++) {
		for (int j = 0; j <= v.size()-1; j++) {
			if (sn[i] == v[j])
				cows = cows + 1;
		}
		if (sn[i] == v[i]) {
			bulls = bulls+ 1;
			cows = cows - 1; //so that bulls and cows aren't the same.
			
		}
	}
	cout << "\nNumber of cows: " << cows << endl;
	cout << "\nNumber of bulls: " << bulls << endl;
	if (bulls == 5) {
		cout << "Win!";
		game_win = true;
	}
	else {
		cout << "Try again!\n ";
	}
}
string secretnumber() {
	srand(time(0));
	string secretnum;
	vector<int> v;
	for (int i = 1; i <= 5; i++) { v.push_back(randint(10)); }
	stringstream ss;
	copy(v.begin(), v.end(), ostream_iterator<int>(ss));
	secretnum = ss.str();
	return secretnum;
}