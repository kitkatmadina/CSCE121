//Kirsten Madina
//UIN 626003641
// Assignment 1 question 2
#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

int main()
{
	cout << "Please enter the name of the person you want to write to(followed by 'enter'):\n";
	string first_name; //first_name is a variable of type string
	cin >> first_name; //read the characters in first_name
	cout << "Dear " << first_name << ", \n";
	cout << "\tHow are you? I'm doing fine. I miss you.\n";
	cout << "Please enter the name of a friend (followed by 'enter'): \n";
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";
	char friend_sex;
	friend_sex = 0;
	cout << "Enter 'm' if your friend is male. Enter 'f' if your friend is female.\n";
	cin >> friend_sex;
	if (friend_sex == 'm' || 'M') {
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	} else if (friend_sex == 'f' || 'F') {
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}
	cout << "How old is the recipient?\n";
	int age;
	cin >> age;
	if (age < 0 || age > 110) {
		simple_error("You're kidding!");
	} else {
		cout << "I hear you just had a birthday and you are" << age << " years old.\n";
	}
	if (age < 12) {
		cout << "Next year you will be" << age + 1 << "years old\n";
	} else if (age == 17) {
		cout << "Next year you will be able to vote.\n";
	} else if (age > 70) {
		cout << "I hope you are enjoying retirement.\n";
	} else {
		cout << " ";
	}
	cout << "Now what is YOUR name?\n";
	string your_name;
	cin >> your_name;
	cout << "Yours sincerely, \n\n" << your_name;



	return 0;




}