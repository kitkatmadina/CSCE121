// Kirsten Madina 
//UIN 626003641
// this is Assignment 1 question 3

#include <iostream>
using namespace std;

int main() {
	//declaring variables
	string your_first_name, your_last_name, section_number;
	string first_name1, last_name1, first_name2, last_name2, first_name3, last_name3;
	cout << "What is your first name, last name, and section number?";
	cin >> your_first_name;
	cin >> your_last_name;
	cin >> section_number;
	cout << "Who is your TA?";
	cin >> first_name1;
	cin >> last_name1;
	cout << "Who are your PTs?";
	cin >> first_name2;
	cin >> last_name2;
	cin >> first_name3;
	cin >> last_name3;
	cout << your_last_name << ", " << your_first_name << " " << section_number <<"\n";
	cout << "TA:" << last_name1 << ", " << first_name1 << "\n";
	cout << "PTs:\n" << last_name2 << ", " << first_name2 << "\n" << last_name3 << ", " << first_name3;

	return 0;

}