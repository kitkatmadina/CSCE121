//Kirsten Madina
//UIN 626003641
//Assignment 2 Ex 8
#include <iostream>
using namespace std;
int main() {
	int val = 0;
	cout << "Please enter an integer: ";
	cin >> val;;
	string type = "even";
	if (val % 2) type = "odd";	// if it is 0 modulo 2 it is even, and odd otherwise

	cout << "The value " << val << " is an " << type << " number\n";
	return 0;
}